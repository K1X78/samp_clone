/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00415840
 * Name: FUN_00415840
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char FUN_00415840(void)

{
  char cVar1;
  char cVar2;
  int unaff_ESI;
  
  cVar1 = FUN_004157b0();
  if ((*(int *)(unaff_ESI + 0xc) == 0) && ((*(byte *)(unaff_ESI + 3) & 8) == 0)) {
    cVar2 = 'b';
    if (cVar1 != '\0') {
      cVar2 = cVar1;
    }
    return cVar2;
  }
  cVar1 = FUN_00415810();
  return cVar1;
}


/* END FUNCTION 0x00415840 */
