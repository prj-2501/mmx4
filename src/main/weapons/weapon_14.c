// WeaponObj, weapon_object_update_funcs[14]
// 80095DC0..800961B0
#include "common.h"

void func_80095DC0(struct WeaponObj* arg0)
{
    s32 should_reset = g_Player.unkC3 != 0;

    if (g_Player.unkC4 != 0) {
        should_reset = 1;
    }
    if (g_Player.unk93 != 5) {
        should_reset = 1;
    }
    if (should_reset != 0) {
        arg0->state = 3;
    }
    D_80108974[arg0->state](arg0);
}

INCLUDE_ASM("main/nonmatchings/weapons/weapon_14", func_80095E3C);

INCLUDE_ASM("main/nonmatchings/weapons/weapon_14", func_80095F9C);

INCLUDE_ASM("main/nonmatchings/weapons/weapon_14", func_80096018);

INCLUDE_ASM("main/nonmatchings/weapons/weapon_14", func_80096060);

INCLUDE_ASM("main/nonmatchings/weapons/weapon_14", func_80096170);
