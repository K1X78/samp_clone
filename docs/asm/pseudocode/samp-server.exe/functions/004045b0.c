/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004045b0
 * Name: FUN_004045b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_004045b0(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  if (iVar1 == 0) {
    iVar1 = *(int *)(*param_1 + 0x10) + *param_1;
  }
  return *(uint *)(param_1[5] + 8 + iVar1) >> 2;
}


/* END FUNCTION 0x004045b0 */
