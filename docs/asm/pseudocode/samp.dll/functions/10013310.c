/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10013310
 * Name: FUN_10013310
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10013310(int *param_1)

{
  int iVar1;
  
  iVar1 = 0x1000;
  do {
    param_1 = param_1 + 1;
    if (*param_1 != 0) {
      FUN_100b1f10(&DAT_10118158,*param_1);
    }
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


/* END FUNCTION 0x10013310 */
