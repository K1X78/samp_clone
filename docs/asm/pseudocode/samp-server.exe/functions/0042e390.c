/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042e390
 * Name: FUN_0042e390
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0042e390(void)

{
  int iVar1;
  undefined4 *unaff_ESI;
  
  iVar1 = 0;
  if (0 < (int)unaff_ESI[10]) {
    do {
      FUN_0042dc50();
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)unaff_ESI[10]);
  }
  FUN_0040d750((uint)(unaff_ESI + 0x10));
  FUN_00408130(*(int *)*unaff_ESI);
  return;
}


/* END FUNCTION 0x0042e390 */
