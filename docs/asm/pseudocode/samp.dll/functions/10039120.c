/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10039120
 * Name: FUN_10039120
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_10039120(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((iVar1 != param_1[3]) && (*(char *)(iVar1 + 4) != '\0')) {
    *param_1 = *(int *)(iVar1 + 5);
    return iVar1;
  }
  return 0;
}


/* END FUNCTION 0x10039120 */
