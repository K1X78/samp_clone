/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10069780
 * Name: FUN_10069780
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10069780(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined *puVar1;
  undefined4 uStack_30;
  undefined4 *puStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xff000000;
  uStack_c = 0x100;
  puStack_10 = (undefined1 *)&param_3;
  uStack_1c = *(undefined4 *)(param_1 + 0x143);
  uStack_14 = 0xffffffff;
  param_4 = param_4 + -5;
  puStack_18 = &DAT_10118354;
  piStack_20 = *(int **)(param_1 + 0x13f);
  uStack_24 = 0x100697b7;
  (**(code **)(*piStack_20 + 0x38))();
  uStack_24 = 0xff000000;
  uStack_28 = 0x500;
  puStack_2c = &uStack_14;
  uStack_30 = 0xffffffff;
  puVar1 = &DAT_10118354;
  (**(code **)(**(int **)(param_1 + 0x13f) + 0x38))
            (*(int **)(param_1 + 0x13f),*(undefined4 *)(param_1 + 0x143),&DAT_10118354);
  (**(code **)(**(int **)(param_1 + 0x13b) + 0x38))
            (*(int **)(param_1 + 0x13b),*(undefined4 *)(param_1 + 0x143),puVar1,0xffffffff,
             &uStack_30,0x105,piStack_20);
  return;
}


/* END FUNCTION 0x10069780 */
