/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100556a0
 * Name: FUN_100556a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_100556a0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((iVar1 != param_1[3]) && (*(char *)(iVar1 + 6) != '\0')) {
    *param_1 = *(int *)(iVar1 + 7);
    return iVar1;
  }
  return 0;
}


/* END FUNCTION 0x100556a0 */
