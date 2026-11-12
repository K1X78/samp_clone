/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10033f90
 * Name: FUN_10033f90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_10033f90(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_1002e2b0();
  if (*(uint *)(param_1 + 0x245d) < uVar1) {
    return *(undefined4 *)(param_1 + 0x2459);
  }
  return *(undefined4 *)(param_1 + 0x2455);
}


/* END FUNCTION 0x10033f90 */
