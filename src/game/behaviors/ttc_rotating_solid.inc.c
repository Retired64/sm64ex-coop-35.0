
/**
 * Behavior for bhvTTCRotatingSolid, which are the rotating cube and triangular
 * prism.
 */

/**
 * The collision models for cube and triangular prism, respectively.
 */
static void const *sTTCRotatingSolidCollisionModels[] = {
    ttc_seg7_collision_07014F70,
    ttc_seg7_collision_07015008,
};

/**
 * The number of frames to wait before rotating for the first time.
 */
static u8 sTTCRotatingSolidInitialDelays[] = {
    /* TTC_SPEED_SLOW    */ 120,
    /* TTC_SPEED_FAST    */ 40,
    /* TTC_SPEED_RANDOM  */ 0,
    /* TTC_SPEED_STOPPED */ 0,
};

/**
 * Init function for bhvTTCRotatingSolid.
 */
void bhv_ttc_rotating_solid_init(void) {
    if (BHV_ARR_CHECK(sTTCRotatingSolidCollisionModels, o->oBehParams2ndByte, void const*)) {
        o->collisionData = segmented_to_virtual(sTTCRotatingSolidCollisionModels[o->oBehParams2ndByte]);
    }

    o->oTTCRotatingSolidNumSides = o->oBehParams2ndByte == TTC_ROTATING_SOLID_BP_CUBE ? 4 : 3;

    o->oTTCRotatingSolidRotationDelay = sTTCRotatingSolidInitialDelays[gTTCSpeedSetting];

    struct SyncObject* so = sync_object_init(o, 4000.0f);
    if (so) {
        so->minUpdateRate = 5.0f;
        sync_object_init_field(o, &o->oTTCRotatingSolidNumTurns);
        sync_object_init_field(o, &o->oTTCRotatingSolidRotationDelay);
        sync_object_init_field(o, &o->oTTCRotatingSolidVelY);
        sync_object_init_field(o, &o->oTTCChangeDirTimer);
        sync_object_init_field(o, &o->oAngleVelRoll);
        sync_object_init_field(o, &o->oFaceAngleRoll);
    }
}

/**
 * Update function for bhvTTCRotatingSolid.
 * Wait a bit, dip down and back up, play a sound, then rotate.
 */
void bhv_ttc_rotating_solid_update(void) {
    // 1. Wait out the rotation delay
    if (gTTCSpeedSetting != TTC_SPEED_STOPPED && o->oTimer > o->oTTCRotatingSolidRotationDelay) {
        if (o->oTTCRotatingSolidSoundTimer != 0) {
            // 3. Play a sound after 6 frames
            if (--o->oTTCRotatingSolidSoundTimer == 0) {
                cur_obj_play_sound_2(SOUND_GENERAL2_ROTATING_BLOCK_ALERT);
            }
        } else if (o->oTTCRotatingSolidVelY > 0.0f && o->oPosY >= o->oHomeY) {
            // 4. Rotate
            s32 targetRoll =
                (s32)((f32) o->oTTCRotatingSolidNumTurns / o->oTTCRotatingSolidNumSides * 0x10000);
            s32 startRoll = o->oFaceAngleRoll;

            obj_face_roll_approach(targetRoll, 0x4B0);

            o->oAngleVelRoll = o->oFaceAngleRoll - startRoll;
            if (o->oAngleVelRoll == 0) {
                cur_obj_play_sound_2(SOUND_GENERAL2_ROTATING_BLOCK_CLICK);

                if (o->oTTCRotatingSolidNumSides) {
                    o->oTTCRotatingSolidNumTurns = (o->oTTCRotatingSolidNumTurns + 1) % o->oTTCRotatingSolidNumSides;
                }

                o->oTimer = 0;
                if (gTTCSpeedSetting == TTC_SPEED_RANDOM) {
                    o->oTTCRotatingSolidRotationDelay = random_mod_offset(5, 20, 7);
                }
            }
        } else {
            // 2. Move vertically with vel -4.5, -4.0, ... until reached back home
            o->oTTCRotatingSolidVelY += 0.5f;
            if ((o->oPosY += o->oTTCRotatingSolidVelY) >= o->oHomeY) {
                o->oPosY = o->oHomeY;
                o->oTTCRotatingSolidSoundTimer = 6;
            }
        }
    } else {
        o->oTTCRotatingSolidVelY = -5.0f;
    }
}
