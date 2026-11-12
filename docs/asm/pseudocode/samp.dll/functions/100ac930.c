/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ac930
 * Name: FUN_100ac930
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100ac930(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x2a4) != 0) {
    *DAT_10151960 = *(undefined1 *)(param_1 + 0x2b0);
    iVar1 = *(int *)(*(int *)(param_1 + 0x2a4) + 0x14);
    FUN_1009ee80(*(undefined4 *)(iVar1 + 0x30),*(undefined4 *)(iVar1 + 0x34),
                 *(undefined4 *)(iVar1 + 0x38));
    (*(code *)0x439600)();
    *DAT_10151960 = 0;
  }
  return;
}


/* END FUNCTION 0x100ac930 */
