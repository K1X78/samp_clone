/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10008750
 * Name: FUN_10008750
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10008750(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((((DAT_102aca28 != 0) && (*(char *)(param_1 + 0x3d9) == '\0')) &&
      (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x3de) + 8) + 0x1e) + 0xf4) != 0)) &&
     (*(int *)(DAT_102aca28 + 0x217) != 0)) {
    iVar1 = FUN_1000c9b0();
    if (0 < iVar1) {
      *(undefined1 *)(param_1 + 0x3d9) = 1;
      uVar2 = 0;
      FUN_10001010(0);
      FUN_100ac3b0(uVar2);
      uVar2 = 0;
      FUN_10001010(0);
      FUN_1009f470(uVar2);
      uVar2 = 0;
      FUN_10001010(0);
      FUN_1009f4c0(uVar2);
      FUN_1009d580();
    }
  }
  FUN_100a1bd0(0);
  if (*(char *)(param_1 + 0x3d9) != '\0') {
    uVar2 = FUN_1002e2b0();
    *(undefined4 *)(param_1 + 0x3da) = uVar2;
  }
  return;
}


/* END FUNCTION 0x10008750 */
