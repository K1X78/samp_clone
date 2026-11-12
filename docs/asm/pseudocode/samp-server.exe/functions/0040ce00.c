/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040ce00
 * Name: FUN_0040ce00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0040ce00(void)

{
  int unaff_ESI;
  
  if (*(short *)(unaff_ESI + 0x3e) == 0) {
    FUN_0040c910((uint)*(ushort *)(unaff_ESI + 0xb0 + *(short *)(unaff_ESI + 0x5c) * 2),
                 (int *)(unaff_ESI + 0x20));
    *(undefined1 *)(unaff_ESI + 0x42) = 1;
  }
  return;
}


/* END FUNCTION 0x0040ce00 */
