/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100eb940
 * Name: FUN_100eb940
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100eb940(void)

{
  int *piVar1;
  int unaff_ESI;
  int unaff_EDI;
  
  piVar1 = *(int **)(unaff_ESI + 8);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    if (*piVar1 == unaff_EDI) break;
    piVar1 = (int *)piVar1[2];
  }
  FUN_100e89e0(unaff_ESI + 8,piVar1,0);
  *(int *)(unaff_ESI + 4) = *(int *)(unaff_ESI + 4) + -1;
  *(undefined4 *)(unaff_EDI + 0x62c) = 0;
  return 1;
}


/* END FUNCTION 0x100eb940 */
