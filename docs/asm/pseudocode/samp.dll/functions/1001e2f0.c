/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001e2f0
 * Name: FUN_1001e2f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1001e2f0(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((DAT_102ac9dc == (int *)0x0) || (*DAT_102ac9dc == 0)) {
    do {
      if (*(int *)(param_1 + iVar1 * 4) != 0) {
        FUN_100b3080();
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0x900);
  }
  return;
}


/* END FUNCTION 0x1001e2f0 */
