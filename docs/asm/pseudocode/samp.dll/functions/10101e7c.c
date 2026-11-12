/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10101e7c
 * Name: __expandlocale
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __expandlocale(char *param_1,undefined *param_2,undefined2 *param_3,undefined4 *param_4)

{
  size_t sVar1;
  int iVar2;
  BOOL BVar3;
  undefined1 local_98 [144];
  wchar_t local_8 [2];
  
  local_8 = (wchar_t  [2])DAT_10155bc4;
  if (param_1 == (char *)0x0) {
    param_2 = (undefined *)0x0;
  }
  else if ((*param_1 == 'C') && (param_1[1] == '\0')) {
    *param_2 = 0x43;
    param_2[1] = 0;
    if (param_3 != (undefined2 *)0x0) {
      *param_3 = 0;
      param_3[1] = 0;
      param_3[2] = 0;
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
    }
  }
  else {
    sVar1 = _strlen(param_1);
    if ((0x81 < sVar1) ||
       ((iVar2 = _strcmp(&DAT_10155e28,param_1), iVar2 != 0 &&
        (iVar2 = _strcmp(&DAT_10155da0,param_1), iVar2 != 0)))) {
      iVar2 = ___lc_strtolc(local_98,param_1);
      if ((iVar2 != 0) ||
         (BVar3 = ___get_qualified_locale
                            ((LPLC_STRINGS)local_98,(UINT *)&DAT_102acfbc,(LPLC_STRINGS)local_98),
         BVar3 == 0)) {
        return (undefined *)0x0;
      }
      _DAT_102acfc4 = (uint)DAT_102acfc0;
      ___lc_lctostr(&DAT_10155e28,local_98);
      if ((*param_1 == '\0') || (sVar1 = _strlen(param_1), 0x81 < sVar1)) {
        param_1 = "";
      }
      DAT_10155e22 = 0;
      _strncpy(&DAT_10155da0,param_1,0x82);
    }
    if (param_3 != (undefined2 *)0x0) {
      _memcpy(param_3,&DAT_102acfbc,6);
    }
    if (param_4 != (undefined4 *)0x0) {
      _memcpy(param_4,&DAT_102acfc4,4);
    }
    FUN_10103c90(param_2,&DAT_10155e28);
    param_2 = &DAT_10155e28;
  }
  return param_2;
}


/* END FUNCTION 0x10101e7c */
