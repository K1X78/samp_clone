/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10087560
 * Name: FUN_10087560
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10087560(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  if (0 < *(int *)(param_1 + 0x24)) {
    do {
      FUN_10086090();
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x24));
  }
  return;
}


/* END FUNCTION 0x10087560 */
