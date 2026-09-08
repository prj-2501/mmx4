// MainObj, main_object_update_funcs[58]
// 800743FC..80074E84
#include "common.h"

INCLUDE_ASM("main/nonmatchings/mains/main_58", func_800743FC);

INCLUDE_ASM("main/nonmatchings/mains/main_58", func_80074438);

INCLUDE_ASM("main/nonmatchings/mains/main_58", func_800745E8);

INCLUDE_ASM("main/nonmatchings/mains/main_58", func_800747EC);

INCLUDE_ASM("main/nonmatchings/mains/main_58", func_8007482C);

INCLUDE_ASM("main/nonmatchings/mains/main_58", func_80074838);

INCLUDE_ASM("main/nonmatchings/mains/main_58", func_80074874);

INCLUDE_ASM("main/nonmatchings/mains/main_58", func_800748B8);

INCLUDE_ASM("main/nonmatchings/mains/main_58", func_8007491C);

INCLUDE_ASM("main/nonmatchings/mains/main_58", func_80074958);

INCLUDE_ASM("main/nonmatchings/mains/main_58", func_800749B8);

INCLUDE_ASM("main/nonmatchings/mains/main_58", func_80074A0C);

INCLUDE_ASM("main/nonmatchings/mains/main_58", func_80074A48);

INCLUDE_ASM("main/nonmatchings/mains/main_58", func_80074AA8);

INCLUDE_ASM("main/nonmatchings/mains/main_58", func_80074B10);

INCLUDE_ASM("main/nonmatchings/mains/main_58", func_80074B68);

INCLUDE_ASM("main/nonmatchings/mains/main_58", func_80074BD8);

INCLUDE_ASM("main/nonmatchings/mains/main_58", func_80074C14);

INCLUDE_ASM("main/nonmatchings/mains/main_58", func_80074CB8);

INCLUDE_ASM("main/nonmatchings/mains/main_58", func_80074D10);

extern u32* D_80101624[];

void func_80074DDC(struct VisualObj* arg0)
{
    struct VisualObj* obj = find_free_visual_obj();
    if (obj != NULL) {
        obj->active = 0x41;
        obj->id = 0x10;
        obj->unk2 = 0;
        obj->unk50 = (struct PlayerObj*)arg0;
        obj->unk42 = arg0->unk42;
        obj->animation_table = D_80101624;
        obj->unk3C = arg0->unk3C;
        obj->unk40 = arg0->unk40;
        obj->bg_offset = arg0->bg_offset;
        obj->unk16 = 4;
        obj->unk15 = arg0->unk15;
        obj->x_pos.val = arg0->x_pos.val;
        obj->y_pos.val = arg0->y_pos.val;
    }
}
