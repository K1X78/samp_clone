/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040d330
 * Name: FUN_0040d330
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0040d330(void)

{
  int *unaff_ESI;
  int unaff_EDI;
  
  FUN_0040d250((int)unaff_ESI);
  *(undefined2 *)(unaff_ESI + 7) = 0x4010;
  *(undefined1 *)((int)unaff_ESI + 0x1e) = 4;
  unaff_ESI[6] = 0;
  *(undefined1 *)((int)unaff_ESI + 0x1f) = 1;
  if (unaff_EDI < 0) {
    *unaff_ESI = 0;
    return;
  }
  *unaff_ESI = unaff_EDI;
  return;
}


/* END FUNCTION 0x0040d330 */
