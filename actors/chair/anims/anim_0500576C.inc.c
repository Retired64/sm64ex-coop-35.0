// 0x050056F0
static const s16 chair_seg5_animvalue_050056F0[] = {
    0x0000, 0x0099, 0xFFAA, 0xC001, 0xC001, 0xC001, 0x3FFF, 0x0000,
};

// 0x05005700
static const u16 chair_seg5_animindex_05005700[] = {
    0x0001, 0x0000, 0x0001, 0x0001, 0x0001, 0x0002, 0x0001, 0x0000, 0x0001, 0x0003, 0x0001, 0x0000,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0004,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0005,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0006,
};

// 0x0500576C
static const struct Animation chair_seg5_anim_0500576C = {
    0,
    0,
    0,
    0,
    0x64,
    ANIMINDEX_NUMPARTS(chair_seg5_animindex_05005700),
    chair_seg5_animvalue_050056F0,
    chair_seg5_animindex_05005700,
    0,
    ANIM_FIELD_LENGTH(chair_seg5_animvalue_050056F0),
    ANIM_FIELD_LENGTH(chair_seg5_animindex_05005700),
};