/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10069680
 * Name: FUN_10069680
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10069680(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  uint in_stack_0000001c;
  uint auStack_68 [2];
  int *piStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint *puStack_50;
  uint auStack_4c [2];
  int *piStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint *puStack_34;
  uint uStack_30;
  int iStack_2c;
  int *piStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  uint uStack_14;
  int iStack_10;
  
  iStack_10 = -0x1000000;
  param_4 = param_4 + -1;
  uVar1 = in_stack_0000001c | 0x100;
  puStack_18 = (undefined1 *)&param_3;
  uStack_24 = *(undefined4 *)(param_1 + 0x143);
  piStack_28 = *(int **)(param_1 + 0x137);
  uStack_1c = 0xffffffff;
  uStack_20 = param_2;
  iStack_2c = 0x100696bd;
  uStack_14 = uVar1;
  (**(code **)(*piStack_28 + 0x38))();
  iStack_2c = -0x1000000;
  puStack_34 = &uStack_14;
  uStack_40 = *(undefined4 *)(param_1 + 0x143);
  uStack_38 = 0xffffffff;
  iStack_10 = iStack_10 + 2;
  uStack_3c = param_2;
  piStack_44 = *(int **)(param_1 + 0x137);
  auStack_4c[1] = 0x100696e9;
  uStack_30 = uVar1;
  (**(code **)(*piStack_44 + 0x38))();
  auStack_4c[1] = 0xff000000;
  puStack_50 = &uStack_30;
  uStack_5c = *(undefined4 *)(param_1 + 0x143);
  iStack_2c = iStack_2c + -1;
  uStack_54 = 0xffffffff;
  uStack_30 = uStack_30 - 1;
  uStack_58 = param_2;
  piStack_60 = *(int **)(param_1 + 0x137);
  auStack_68[1] = 0x1006971c;
  auStack_4c[0] = uVar1;
  (**(code **)(*piStack_60 + 0x38))();
  auStack_68[1] = 0xff000000;
  auStack_4c[0] = auStack_4c[0] + 2;
  auStack_68[0] = uVar1;
  (**(code **)(**(int **)(param_1 + 0x137) + 0x38))
            (*(int **)(param_1 + 0x137),*(undefined4 *)(param_1 + 0x143),param_2,0xffffffff,
             auStack_4c);
  auStack_68[0] = auStack_68[0] - 1;
  (**(code **)(**(int **)(param_1 + 0x137) + 0x38))
            (*(int **)(param_1 + 0x137),*(undefined4 *)(param_1 + 0x143),param_2,0xffffffff,
             auStack_68,uVar1,uStack_58);
  return;
}


/* END FUNCTION 0x10069680 */
