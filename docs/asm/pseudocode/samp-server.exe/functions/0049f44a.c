/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049f44a
 * Name: __lock_file
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl __lock_file(FILE *_File)

{
  if (((FILE *)0x4ebe17 < _File) && (_File < (FILE *)0x4ec079)) {
    __lock(((int)&_File[-0x275f1]._base >> 5) + 0x10);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  return;
}


/* END FUNCTION 0x0049f44a */
