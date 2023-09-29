// 0x0500C538
static const s16 king_bobomb_seg5_animvalue_0500C538[] = {
    0x0000, 0x01FB, 0x01FB, 0x01F9, 0x01F7, 0xFFFB, 0x0891, 0x0887,
    0x086A, 0x083A, 0xFE5F, 0xFE61, 0xFE67, 0xFE70, 0x0000, 0xFE72,
    0xFA6F, 0xF4F4, 0x0000, 0xFEDF, 0xFBF2, 0xF7EF, 0xEECD, 0xEEA7,
    0xEE47, 0xEDCB, 0xEECD, 0xEEB2, 0xEE6E, 0xEE15, 0xF697, 0xF6A8,
    0xF6DA, 0xF725, 0xFBCB, 0xFBCF, 0xFBDD, 0xFBF3, 0xB036, 0xB040,
    0xB05E, 0xB08F, 0x0970, 0x095B, 0x0920, 0x08C8, 0x07DB, 0x07D2,
    0x07B8, 0x0791, 0xB3B3, 0xB3A6, 0xB383, 0xB353, 0x00D3, 0x00E5,
    0x0114, 0x0156, 0x0927, 0x0913, 0x08DA, 0x0884, 0x0757, 0x07BD,
    0x08BE, 0x0A15, 0x00D0, 0x00B9, 0x007A, 0x0021, 0xF66D, 0xF680,
    0xF6B3, 0xF700, 0x0626, 0x0696, 0x07B5, 0x0938, 0x8001, 0xC000,
    0xC000, 0x2000, 0x3FFF, 0xE000, 0x2000, 0x3FFF, 0xE000, 0x0005,
    0x0005, 0x0005, 0x0005, 0x2B2F, 0x2AB5, 0x295A, 0x273A, 0x4006,
    0x4006, 0x4006, 0x4006, 0x0000,
};

// 0x0500C600
static const u16 king_bobomb_seg5_animindex_0500C600[] = {
    0x0001, 0x0000, 0x0004, 0x0001, 0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000,
    0x0004, 0x0057, 0x0004, 0x005B, 0x0004, 0x005F,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000,
    0x0001, 0x0054, 0x0001, 0x0055, 0x0001, 0x0056,
    0x0004, 0x001E, 0x0004, 0x0022, 0x0004, 0x0026,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0004, 0x000E,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0004, 0x0006,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000,
    0x0001, 0x0051, 0x0001, 0x0052, 0x0001, 0x0053,
    0x0004, 0x002A, 0x0004, 0x002E, 0x0004, 0x0032,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0004, 0x0012,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0004, 0x000A,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0050,
    0x0004, 0x0036, 0x0004, 0x003A, 0x0004, 0x003E,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0004, 0x0016,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000,
    0x0001, 0x0000, 0x0001, 0x004E, 0x0001, 0x004F,
    0x0004, 0x0042, 0x0004, 0x0046, 0x0004, 0x004A,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0004, 0x001A,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0005,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000,
};

// 0x0500C774
static const struct Animation king_bobomb_seg5_anim_0500C774 = {
    0,
    0,
    0,
    0,
    0x04,
    ANIMINDEX_NUMPARTS(king_bobomb_seg5_animindex_0500C600),
    king_bobomb_seg5_animvalue_0500C538,
    king_bobomb_seg5_animindex_0500C600,
    0,
    ANIM_FIELD_LENGTH(king_bobomb_seg5_animvalue_0500C538),
    ANIM_FIELD_LENGTH(king_bobomb_seg5_animindex_0500C600),
};