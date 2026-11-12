/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004ac7a2
 * Name: __isatty
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl __isatty(int _FileHandle)

{
  if (DAT_0051c938 <= (uint)_FileHandle) {
    return 0;
  }
  return (int)*(char *)((&DAT_0051c940)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x24) & 0x40
  ;
}


/* END FUNCTION 0x004ac7a2 */
