// 0x05015750
static const s16 spiny_egg_seg5_animvalue_05015750[] = {
    0x0000, 0x0000,
};

// 0x05015754
static const u16 spiny_egg_seg5_animindex_05015754[] = {
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000,
};

// 0x050157CC
static const struct Animation spiny_egg_seg5_anim_050157CC = {
    0,
    0,
    0,
    0,
    0x64,
    ANIMINDEX_NUMPARTS(spiny_egg_seg5_animindex_05015754),
    spiny_egg_seg5_animvalue_05015750,
    spiny_egg_seg5_animindex_05015754,
    0,
    ANIM_FIELD_LENGTH(spiny_egg_seg5_animvalue_05015750),
    ANIM_FIELD_LENGTH(spiny_egg_seg5_animindex_05015754),
};