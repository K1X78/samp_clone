/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000a9d0
 * Name: FUN_1000a9d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1000a9d0(int param_1)

{
  uint uVar1;
  
  if (*(int **)(param_1 + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 8))(0,0);
  }
  FUN_10067b60(DAT_102aca10,"Lost connection to the server. Reconnecting..");
  FUN_1000a230();
  if (*(int *)(*(int *)(param_1 + 0x3de) + 8) != 0) {
    uVar1 = 0;
    do {
      if (((ushort)uVar1 < 0x3ec) &&
         (*(int *)(*(int *)(*(int *)(param_1 + 0x3de) + 8) + 0xfd6 + (uVar1 & 0xffff) * 4) != 0)) {
        FUN_10013f40(uVar1,0);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 != 0x3ec);
  }
  if (DAT_102aca1c != 0) {
    FUN_10065fe0(1);
  }
  *(undefined4 *)(param_1 + 0x3cd) = 1;
  return;
}


/* END FUNCTION 0x1000a9d0 */
