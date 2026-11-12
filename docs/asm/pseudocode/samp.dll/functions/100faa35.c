/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100faa35
 * Name: __itoa
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * __cdecl __itoa(int _Value,char *_Dest,int _Radix)

{
  undefined4 uVar1;
  
  if ((_Radix == 10) && (_Value < 0)) {
    uVar1 = 1;
    _Radix = 10;
  }
  else {
    uVar1 = 0;
  }
  xtoa(_Radix,uVar1);
  return _Dest;
}


/* END FUNCTION 0x100faa35 */
