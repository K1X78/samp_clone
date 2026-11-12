/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00404150
 * Name: FUN_00404150
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_00404150(void)

{
  int in_EAX;
  int *unaff_ESI;
  
  if (in_EAX == 8) {
    __fputchar(8);
    *unaff_ESI = *unaff_ESI + -1;
    _fflush((FILE *)&DAT_004ebe38);
    return;
  }
  if (in_EAX != 0xd) {
    __fputchar((int)(char)in_EAX);
    *unaff_ESI = *unaff_ESI + 1;
    _fflush((FILE *)&DAT_004ebe38);
    return;
  }
  __fputchar(10);
  *unaff_ESI = *unaff_ESI + 1;
  _fflush((FILE *)&DAT_004ebe38);
  return;
}


/* END FUNCTION 0x00404150 */
