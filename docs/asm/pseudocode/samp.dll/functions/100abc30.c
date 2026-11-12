/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100abc30
 * Name: FUN_100abc30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100abc30(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2a4);
  *DAT_10151960 = *(undefined1 *)(param_1 + 0x2b0);
  if (iVar1 != 0) {
    (*(code *)0x5e6320)(iVar1);
    *DAT_10151960 = 0;
    return;
  }
  *DAT_10151960 = 0;
  return;
}


/* END FUNCTION 0x100abc30 */
