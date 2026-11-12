/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040a150
 * Name: FUN_0040a150
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0040a150(void)

{
  int unaff_ESI;
  undefined4 unaff_EDI;
  
  if (*(int *)(unaff_ESI + 0x28) != 0) {
    (*DAT_004ca1ac)(*(int *)(unaff_ESI + 0x28));
    *(undefined4 *)(unaff_ESI + 0x28) = 0;
    *(undefined4 *)(unaff_ESI + 0x2c) = 0;
  }
  *(undefined4 *)(unaff_ESI + 0x14) = unaff_EDI;
  return;
}


/* END FUNCTION 0x0040a150 */
