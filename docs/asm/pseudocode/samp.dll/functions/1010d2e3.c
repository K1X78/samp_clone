/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1010d2e3
 * Name: ___ansicp
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

long ___ansicp(LCID param_1)

{
  int iVar1;
  long lVar2;
  CHAR local_10 [6];
  undefined1 local_a;
  undefined4 local_8;
  
  local_8 = DAT_10155bc4;
  local_a = 0;
  iVar1 = GetLocaleInfoA(param_1,0x1004,local_10,6);
  if (iVar1 == 0) {
    lVar2 = -1;
  }
  else {
    lVar2 = _atol(local_10);
  }
  return lVar2;
}


/* END FUNCTION 0x1010d2e3 */
