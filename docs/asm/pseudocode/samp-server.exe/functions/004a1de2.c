/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a1de2
 * Name: __ultoa
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * __cdecl __ultoa(ulong _Value,char *_Dest,int _Radix)

{
  xtoa(_Dest,_Radix,0);
  return _Dest;
}


/* END FUNCTION 0x004a1de2 */
