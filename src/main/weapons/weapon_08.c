// WeaponObj, weapon_object_update_funcs[8]
// 80097860..80097B28
#include "common.h"

void func_80097860(struct WeaponObj* arg0)
{
    s32 should_reset = g_Player.unkC3 != 0;

    if (g_Player.unkC4 != 0) {
        should_reset = 1;
    }
    if (g_Player.unk93 != 8) {
        should_reset = 1;
    }
    if (should_reset != 0) {
        arg0->state = 3;
    }
    D_80108A24[arg0->state](arg0);
}

INCLUDE_ASM("main/nonmatchings/weapons/weapon_08", func_800978DC);

INCLUDE_ASM("main/nonmatchings/weapons/weapon_08", func_80097A24);

INCLUDE_ASM("main/nonmatchings/weapons/weapon_08", func_80097AC8);

INCLUDE_ASM("main/nonmatchings/weapons/weapon_08", func_80097B14);
