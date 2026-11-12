/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1010eb36
 * Name: __getdcwd_lk
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __getdcwd_lk(uint param_1,void *param_2,size_t param_3)

{
  int iVar1;
  undefined4 *puVar2;
  DWORD DVar3;
  uint uVar4;
  void *pvVar5;
  undefined4 uVar6;
  LPSTR local_110;
  CHAR local_10c [260];
  undefined4 local_8;
  
  uVar4 = param_1;
  local_8 = DAT_10155bc4;
  if (param_1 == 0) {
    DVar3 = GetCurrentDirectoryA(0x104,local_10c);
  }
  else {
    iVar1 = __validdrive(param_1);
    if (iVar1 == 0) {
      puVar2 = (undefined4 *)FUN_100fdc80();
      *puVar2 = 0xf;
      puVar2 = (undefined4 *)FUN_100fdc77();
      *puVar2 = 0xd;
      return 0;
    }
    param_1 = (uint)CONCAT12(0x2e,CONCAT11(0x3a,(char)uVar4 + '@'));
    DVar3 = GetFullPathNameA((LPCSTR)&param_1,0x104,local_10c,&local_110);
  }
  if ((DVar3 != 0) && (uVar4 = DVar3 + 1, uVar4 < 0x105)) {
    if (param_2 == (void *)0x0) {
      if ((int)uVar4 <= (int)param_3) {
        uVar4 = param_3;
      }
      pvVar5 = _malloc(uVar4);
      if (pvVar5 != (void *)0x0) {
LAB_1010ec0d:
        uVar6 = FUN_10103c90(pvVar5,local_10c);
        return uVar6;
      }
      puVar2 = (undefined4 *)FUN_100fdc77();
      *puVar2 = 0xc;
    }
    else {
      pvVar5 = param_2;
      if ((int)uVar4 <= (int)param_3) goto LAB_1010ec0d;
      puVar2 = (undefined4 *)FUN_100fdc77();
      *puVar2 = 0x22;
    }
  }
  return 0;
}


/* END FUNCTION 0x1010eb36 */
