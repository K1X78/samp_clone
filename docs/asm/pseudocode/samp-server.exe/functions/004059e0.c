/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004059e0
 * Name: FUN_004059e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_004059e0(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0xc);
  if (iVar1 == 0) {
    iVar1 = _fseek(*(FILE **)(param_2 + 4),*(long *)(param_2 + 8),0);
    return iVar1;
  }
  if (iVar1 != 1) {
    if (iVar1 != 2) {
      return 0;
    }
    iVar1 = _fseek(*(FILE **)(param_2 + 4),*(long *)(param_2 + 8),2);
    return iVar1;
  }
  iVar1 = _fseek(*(FILE **)(param_2 + 4),*(long *)(param_2 + 8),1);
  return iVar1;
}


/* END FUNCTION 0x004059e0 */
