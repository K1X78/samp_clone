/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00494680
 * Name: FUN_00494680
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_00494680(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = thunk_FUN_0044e910();
  if (999 < (int)uVar1 - *(int *)(param_1 + 0x44)) {
    uVar1 = thunk_FUN_0044e910();
    *(int *)(param_1 + 0x44) = (int)uVar1;
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  return;
}


/* END FUNCTION 0x00494680 */
