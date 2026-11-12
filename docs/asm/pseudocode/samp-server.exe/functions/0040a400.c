/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040a400
 * Name: FUN_0040a400
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0040a400(void)

{
  int unaff_ESI;
  undefined4 unaff_EDI;
  
  (*DAT_004ca1a4)(*(undefined4 *)(*(int *)(unaff_ESI + 0x18) + 0x28));
  *(undefined4 *)(unaff_ESI + 0xc) = unaff_EDI;
  if (((*(ushort *)(unaff_ESI + 0x14) & 2) != 0) && ((*(ushort *)(unaff_ESI + 0x14) & 4) != 0)) {
    FUN_0040a040();
    FUN_0040a0a0(unaff_ESI);
    return;
  }
  return;
}


/* END FUNCTION 0x0040a400 */
