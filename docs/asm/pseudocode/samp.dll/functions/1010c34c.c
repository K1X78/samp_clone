/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1010c34c
 * Name: __isatty
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl __isatty(int _FileHandle)

{
  if (DAT_102ad548 <= (uint)_FileHandle) {
    return 0;
  }
  return (int)*(char *)((&DAT_102ad560)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x24) & 0x40
  ;
}


/* END FUNCTION 0x1010c34c */
