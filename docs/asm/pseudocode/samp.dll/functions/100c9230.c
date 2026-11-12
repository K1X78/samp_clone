/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c9230
 * Name: FUN_100c9230
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100c9230(int *param_1)

{
  int iVar1;
  int unaff_ESI;
  
  if (unaff_ESI == 0) {
    return 0x2b;
  }
  if (*(int *)(unaff_ESI + 0x584) == 0) {
    FUN_100d8ba0();
    return 1;
  }
  iVar1 = FUN_100dbe90();
  *param_1 = iVar1;
  if (iVar1 == -1) {
    FUN_100d8ba0();
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x100c9230 */
