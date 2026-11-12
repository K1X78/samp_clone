/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10007eb0
 * Name: FUN_10007eb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10007eb0(undefined4 *param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x100) != -0x80) {
    FUN_100a7260();
  }
  iVar1 = 0x80;
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


/* END FUNCTION 0x10007eb0 */
