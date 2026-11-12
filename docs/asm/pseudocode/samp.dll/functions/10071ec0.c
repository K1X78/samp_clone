/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10071ec0
 * Name: FUN_10071ec0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10071ec0(int param_1,ushort param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_EDX;
  
  *(undefined4 *)(param_1 + 0x80) = 1;
  *(undefined4 *)(param_1 + 0x78) = 1;
  FUN_10071c90(0);
  *(ushort *)(param_1 + 0x88) = param_2;
  *(undefined4 *)(param_1 + 0x8e) = param_3;
  *(undefined1 *)(param_1 + 0xa2) = 0;
  FUN_100a0530(0,extraout_EDX);
  *(undefined4 *)(DAT_102aca3c + 0x65) = 0;
  FUN_100a0410();
  if ((((DAT_102aca24 != 0) &&
       (iVar1 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0x14), param_2 < 0x835)) &&
      (*(int *)(iVar1 + 4 + (uint)param_2 * 4) != 0)) &&
     (iVar1 = *(int *)(iVar1 + 0x20d4 + (uint)param_2 * 4), iVar1 != 0)) {
    *(undefined4 *)(param_1 + 0x92) = *(undefined4 *)(iVar1 + 0xad);
    *(undefined4 *)(param_1 + 0x96) = *(undefined4 *)(iVar1 + 0xb1);
    *(undefined4 *)(param_1 + 0x9a) = *(undefined4 *)(iVar1 + 0xb5);
  }
  return;
}


/* END FUNCTION 0x10071ec0 */
