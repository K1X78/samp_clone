/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00419780
 * Name: FUN_00419780
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_00419780(void)

{
  int *piVar1;
  int unaff_ESI;
  
  piVar1 = FUN_00417b70();
  if (piVar1 == (int *)0x0) {
    return;
  }
  *piVar1 = unaff_ESI;
  if (*(int *)(unaff_ESI + 0x88) != 0) {
    *(int **)(*(int *)(unaff_ESI + 0x88) + 4) = piVar1;
  }
  piVar1[2] = *(int *)(unaff_ESI + 0x88);
  piVar1[1] = 0;
  *(int **)(unaff_ESI + 0x88) = piVar1;
  piVar1[0x11] = 0x26bceaa5;
  return;
}


/* END FUNCTION 0x00419780 */
