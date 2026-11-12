/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100fde90
 * Name: __unlock_file2
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl __unlock_file2(int _Index,void *_File)

{
  if (_Index < 0x14) {
    FUN_1010035a(_Index + 0x10);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)_File + 0x20));
  return;
}


/* END FUNCTION 0x100fde90 */
