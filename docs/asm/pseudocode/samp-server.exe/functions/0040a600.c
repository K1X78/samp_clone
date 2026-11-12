/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040a600
 * Name: FUN_0040a600
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_0040a600(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar1 = (*DAT_004ca198)(*(int *)(param_1 + 0x28));
  }
  return uVar1;
}


/* END FUNCTION 0x0040a600 */
