/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00450e60
 * Name: FUN_00450e60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_00450e60(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((iVar1 != param_1[3]) && (*(char *)(iVar1 + 4) != '\0')) {
    *param_1 = *(int *)(iVar1 + 8);
    return iVar1;
  }
  return 0;
}


/* END FUNCTION 0x00450e60 */
