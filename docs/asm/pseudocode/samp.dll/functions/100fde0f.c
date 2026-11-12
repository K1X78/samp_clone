/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100fde0f
 * Name: __lock_file
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl __lock_file(FILE *_File)

{
  if (((FILE *)0x10155937 < _File) && (_File < (FILE *)0x10155b99)) {
    __lock(((int)&_File[-0x80aaca]._base >> 5) + 0x10);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  return;
}


/* END FUNCTION 0x100fde0f */
