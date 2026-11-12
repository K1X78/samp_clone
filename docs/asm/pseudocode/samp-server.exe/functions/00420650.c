/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00420650
 * Name: FUN_00420650
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_00420650(void)

{
  int *unaff_EBX;
  int iVar1;
  int *piVar2;
  
  if (unaff_EBX != (int *)0x0) {
    iVar1 = 0;
    piVar2 = (int *)unaff_EBX[3];
    if (0 < *unaff_EBX) {
      do {
        FUN_00420620(*piVar2);
        iVar1 = iVar1 + 1;
        piVar2 = piVar2 + 5;
      } while (iVar1 < *unaff_EBX);
    }
  }
  return;
}


/* END FUNCTION 0x00420650 */
