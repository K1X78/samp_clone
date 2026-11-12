/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100faa5f
 * Name: __ltoa
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * __cdecl __ltoa(long _Value,char *_Dest,int _Radix)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((_Radix == 10) && (_Value < 0)) {
    uVar1 = 1;
  }
  xtoa(_Radix,uVar1);
  return _Dest;
}


/* END FUNCTION 0x100faa5f */
