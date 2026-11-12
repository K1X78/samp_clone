/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001e330
 * Name: FUN_1001e330
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1001e330(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + iVar1 * 4) != 0) {
      FUN_100b30a0();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x900);
  return;
}


/* END FUNCTION 0x1001e330 */
