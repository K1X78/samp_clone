/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100cfb70
 * Name: FUN_100cfb70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100cfb70(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; param_1 != 0; param_1 = *(int *)(param_1 + 0x1c)) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}


/* END FUNCTION 0x100cfb70 */
