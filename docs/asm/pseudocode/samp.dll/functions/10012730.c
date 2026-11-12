/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10012730
 * Name: FUN_10012730
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_10012730(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0x834;
  do {
    param_1 = param_1 + 1;
    if (*param_1 != 0) {
      iVar1 = iVar1 + 1;
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return iVar1;
}


/* END FUNCTION 0x10012730 */
