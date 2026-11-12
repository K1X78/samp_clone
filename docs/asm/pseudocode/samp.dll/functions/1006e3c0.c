/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006e3c0
 * Name: FUN_1006e3c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1006e3c0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_100f9324();
  *param_1 = iVar1;
  iVar2 = FUN_100f9324();
  param_1[2] = iVar2 + iVar1;
  iVar1 = FUN_100f9324();
  param_1[1] = iVar1;
  iVar2 = FUN_100f9324();
  param_1[3] = iVar2 + iVar1;
  return;
}


/* END FUNCTION 0x1006e3c0 */
