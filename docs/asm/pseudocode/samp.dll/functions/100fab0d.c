/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100fab0d
 * Name: __i64toa
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * __cdecl __i64toa(longlong _Val,char *_DstBuf,int _Radix)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (((_Radix == 10) && (_Val < 0x100000000)) && (_Val < 0)) {
    uVar1 = 1;
  }
  FID_conflict__x64toa_20(_Val,_Radix,uVar1);
  return _DstBuf;
}


/* END FUNCTION 0x100fab0d */
