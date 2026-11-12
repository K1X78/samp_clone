/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1010a5c1
 * Name: FID_conflict___atodbl
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FID_conflict___atodbl(_CRT_DOUBLE *param_1,char *param_2)

{
  char *local_18;
  _LDBL12 local_14;
  undefined4 local_8;
  
  local_8 = DAT_10155bc4;
  ___strgtold12(&local_14,&local_18,param_2,0,0,0,0);
  __ld12tod(&local_14,param_1);
  return;
}


/* END FUNCTION 0x1010a5c1 */
