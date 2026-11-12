/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041fdd0
 * Name: FUN_0041fdd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_0041fdd0(void)

{
  int unaff_ESI;
  float10 fVar1;
  
  fVar1 = FUN_0041fd20();
  *(double *)(unaff_ESI + 8) = (double)fVar1;
  *(ushort *)(unaff_ESI + 0x1c) = *(ushort *)(unaff_ESI + 0x1c) & 0xbf08 | 8;
  return 0;
}


/* END FUNCTION 0x0041fdd0 */
