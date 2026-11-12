/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1010a5fe
 * Name: __atoldbl
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl __atoldbl(_LDOUBLE *_Result,char *_Str)

{
  INTRNCVT_STATUS IVar1;
  char *local_18;
  _LDBL12 local_14;
  undefined4 local_8;
  
  local_8 = DAT_10155bc4;
  ___strgtold12(&local_14,&local_18,_Str,1,0,0,0);
  IVar1 = __ld12told(&local_14,_Result);
  return IVar1;
}


/* END FUNCTION 0x1010a5fe */
