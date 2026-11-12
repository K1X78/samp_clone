/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004ad79e
 * Name: FID_conflict___atodbl
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FID_conflict___atodbl(_CRT_DOUBLE *param_1,char *param_2)

{
  char *local_18;
  _LDBL12 local_14;
  undefined4 local_8;
  
  local_8 = DAT_004ec7b4;
  ___strgtold12(&local_14,&local_18,param_2,0,0,0,0);
  __ld12tod(&local_14,param_1);
  return;
}


/* END FUNCTION 0x004ad79e */
