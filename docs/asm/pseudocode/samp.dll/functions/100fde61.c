/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100fde61
 * Name: __unlock_file
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl __unlock_file(FILE *_File)

{
  if (((FILE *)0x10155937 < _File) && (_File < (FILE *)0x10155b99)) {
    FUN_1010035a(((int)&_File[-0x80aaca]._base >> 5) + 0x10);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  return;
}


/* END FUNCTION 0x100fde61 */
