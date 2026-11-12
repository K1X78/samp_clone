/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10110cd0
 * Name: FUN_10110cd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_10110cd0(int param_1)

{
  undefined4 local_c;
  
  if (((*(int *)(param_1 + 4) == 0) || (*(int *)(param_1 + 8) == 0)) ||
     (*(int *)(param_1 + 0xc) == 0)) {
    local_c = 0;
  }
  else {
    local_c = 1;
  }
  return local_c;
}


/* END FUNCTION 0x10110cd0 */
