/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040e420
 * Name: FUN_0040e420
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0040e420(void)

{
  int *extraout_ECX;
  int *extraout_ECX_00;
  int unaff_ESI;
  int local_4;
  
  local_4 = 0;
  FUN_0040e390(&local_4);
  FUN_0040e390(extraout_ECX);
  if ((*(byte *)(unaff_ESI + 3) & 8) != 0) {
    FUN_0040e3d0(extraout_ECX_00);
    *(int *)(unaff_ESI + 0x2c) = local_4 + 1;
    return;
  }
  FUN_0040e3a0(extraout_ECX_00,*(int **)(unaff_ESI + 0x10));
  *(int *)(unaff_ESI + 0x2c) = local_4 + 1;
  return;
}


/* END FUNCTION 0x0040e420 */
