/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a72db
 * Name: __cftog
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl __cftog(double *param_1,undefined1 *param_2,size_t param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  size_t unaff_EDI;
  char *pcVar3;
  STRFLT _PtFlt;
  _strflt local_30;
  char local_20 [24];
  undefined4 local_8;
  
  local_8 = DAT_004ec7b4;
  _PtFlt = *(STRFLT *)param_1;
  __fltout2((_CRT_DOUBLE)*param_1,&local_30,local_20,unaff_EDI);
  iVar2 = local_30.decpt + -1;
  __fptostr(param_2 + (local_30.sign == 0x2d),param_3,(int)&local_30,_PtFlt);
  local_30.decpt = local_30.decpt + -1;
  if ((local_30.decpt < -4) || ((int)param_3 <= local_30.decpt)) {
    __cftoe2(param_3,param_4,'\x01');
  }
  else {
    pcVar1 = param_2 + (local_30.sign == 0x2d);
    if (iVar2 < local_30.decpt) {
      do {
        pcVar3 = pcVar1;
        pcVar1 = pcVar3 + 1;
      } while (*pcVar3 != '\0');
      pcVar3[-1] = '\0';
    }
    __cftof2(param_2,param_3,'\x01');
  }
  return;
}


/* END FUNCTION 0x004a72db */
