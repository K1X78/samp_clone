/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a5356
 * Name: __callnewh
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl __callnewh(size_t _Size)

{
  int iVar1;
  
  if (DAT_0051c398 != (code *)0x0) {
    iVar1 = (*DAT_0051c398)(_Size);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x004a5356 */
