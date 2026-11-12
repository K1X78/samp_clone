/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00450ae0
 * Name: FUN_00450ae0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_00450ae0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((iVar1 != param_1[3]) && (*(char *)(iVar1 + 0x11c) != '\0')) {
    *param_1 = *(int *)(iVar1 + 0x120);
    return iVar1;
  }
  return 0;
}


/* END FUNCTION 0x00450ae0 */
