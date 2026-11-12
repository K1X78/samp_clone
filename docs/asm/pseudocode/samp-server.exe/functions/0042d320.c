/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042d320
 * Name: FUN_0042d320
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_0042d320(void)

{
  uint uVar1;
  int unaff_EDI;
  
  if (*(char *)(unaff_EDI + 0x43) == '\x03') {
    return *(uint *)(unaff_EDI + 0x50);
  }
  *(undefined1 *)(unaff_EDI + 0x43) = 0;
  uVar1 = FUN_0042d2a0(*(void **)(unaff_EDI + 0x4c),*(uint *)(unaff_EDI + 0x48),
                       (int)*(void **)(unaff_EDI + 0x4c),0,(int *)(unaff_EDI + 0x50));
  if (uVar1 == 0) {
    FUN_004080d0(*(int *)(unaff_EDI + 0x44));
    *(undefined4 *)(unaff_EDI + 0x44) = 0;
  }
  return uVar1;
}


/* END FUNCTION 0x0042d320 */
