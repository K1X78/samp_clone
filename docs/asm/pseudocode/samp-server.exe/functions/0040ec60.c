/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040ec60
 * Name: FUN_0040ec60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_0040ec60(int param_1)

{
  int iVar1;
  int unaff_ESI;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  if (unaff_ESI <= *(int *)(param_1 + 0x38)) {
    *(int *)(param_1 + 0x3c) = iVar1 + unaff_ESI;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) - unaff_ESI;
    return iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x48);
  *(int *)(param_1 + 0x48) = iVar1 + unaff_ESI;
  return iVar1 + 1;
}


/* END FUNCTION 0x0040ec60 */
