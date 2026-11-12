/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a1db8
 * Name: __itoa
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * __cdecl __itoa(int _Value,char *_Dest,int _Radix)

{
  int iVar1;
  
  if ((_Radix == 10) && (_Value < 0)) {
    iVar1 = 1;
    _Radix = 10;
  }
  else {
    iVar1 = 0;
  }
  xtoa(_Dest,_Radix,iVar1);
  return _Dest;
}


/* END FUNCTION 0x004a1db8 */
