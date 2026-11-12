/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1010d297
 * Name: ___STRINGTOLD
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    ___STRINGTOLD
   
   Library: Visual Studio 2003 Release */

uint __cdecl ___STRINGTOLD(_LDOUBLE *pld,char **p_end_ptr,char *str,int mult12)

{
  uint uVar1;
  INTRNCVT_STATUS IVar2;
  _LDBL12 local_14;
  undefined4 local_8;
  
  local_8 = DAT_10155bc4;
  uVar1 = ___strgtold12(&local_14,p_end_ptr,str,mult12,0,0,0);
  IVar2 = __ld12told(&local_14,pld);
  if (IVar2 == INTRNCVT_OVERFLOW) {
    uVar1 = uVar1 | 2;
  }
  return uVar1;
}


/* END FUNCTION 0x1010d297 */
