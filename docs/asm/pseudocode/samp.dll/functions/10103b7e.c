/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10103b7e
 * Name: ___loctotime_t
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int ___loctotime_t(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7)

{
  int iVar1;
  int iVar2;
  tm local_28;
  
  iVar2 = param_1 + -0x76c;
  if ((iVar2 < 0x46) || (0x8a < iVar2)) {
    iVar1 = -1;
  }
  else {
    param_3 = *(int *)(&DAT_10156300 + param_2 * 4) + param_3;
    if ((((iVar2 % 4 == 0) && (iVar2 % 100 != 0)) || (param_1 % 400 == 0)) && (2 < param_2)) {
      param_3 = param_3 + 1;
    }
    ___tzset();
    local_28.tm_min = param_5;
    local_28.tm_mon = param_2 + -1;
    iVar1 = ((param_4 +
             (iVar2 * 0x16d +
             (param_1 + -0x76d) / 4 + param_3 +
             ((param_1 + -0x641) / 400 - (param_1 + -0x76d) / 100)) * 0x18) * 0x3c + param_5) * 0x3c
            + _DAT_10155fc0 + 0x7c558180 + param_6;
    local_28.tm_hour = param_4;
    local_28.tm_sec = param_6;
    if ((param_7 == 1) ||
       (((param_7 == -1 && (DAT_10155fc4 != 0)) &&
        (local_28.tm_year = iVar2, local_28.tm_yday = param_3, iVar2 = __isindst(&local_28),
        iVar2 != 0)))) {
      iVar1 = iVar1 + DAT_10155fc8;
    }
  }
  return iVar1;
}


/* END FUNCTION 0x10103b7e */
