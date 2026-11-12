/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10002180
 * Name: FUN_10002180
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10002180(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 0x400;
  do {
    if ((void *)*param_1 != (void *)0x0) {
      _free((void *)*param_1);
      *param_1 = 0;
    }
    param_1 = param_1 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


/* END FUNCTION 0x10002180 */
