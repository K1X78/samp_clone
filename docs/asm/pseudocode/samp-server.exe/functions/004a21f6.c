/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a21f6
 * Name: _strtoul
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


ulong __cdecl _strtoul(char *_Str,char **_EndPtr,int _Radix)

{
  uint uVar1;
  
  uVar1 = strtoxl((byte *)_Str,_EndPtr,_Radix,1);
  return uVar1;
}


/* END FUNCTION 0x004a21f6 */
