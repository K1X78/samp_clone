/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10108c58
 * Name: __except1
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float10 __except1(undefined4 param_1,undefined4 param_2,undefined8 param_3,double param_4,
                 undefined4 param_5)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = __handle_exc(param_1,&param_4,param_5);
  if (iVar1 == 0) {
    __raise_exc();
  }
  iVar1 = __errcode(param_1);
  if ((DAT_10156610 == 0) && (iVar1 != 0)) {
    fVar2 = (float10)__umatherr(iVar1,param_2,param_3,0,param_4,param_5);
  }
  else {
    __set_errno(iVar1);
    __ctrlfp();
    fVar2 = (float10)param_4;
  }
  return fVar2;
}


/* END FUNCTION 0x10108c58 */
