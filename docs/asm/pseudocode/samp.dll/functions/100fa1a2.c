/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100fa1a2
 * Name: __findnext
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __findnext(HANDLE param_1,uint *param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  undefined4 *puVar3;
  uint uVar4;
  _WIN32_FIND_DATAA local_148;
  undefined4 local_8;
  
  local_8 = DAT_10155bc4;
  BVar1 = FindNextFileA(param_1,&local_148);
  if (BVar1 != 0) {
    *param_2 = -(uint)(local_148.dwFileAttributes != 0x80) & local_148.dwFileAttributes;
    uVar4 = ___timet_from_ft(&local_148.ftCreationTime);
    param_2[1] = uVar4;
    uVar4 = ___timet_from_ft(&local_148.ftLastAccessTime);
    param_2[2] = uVar4;
    uVar4 = ___timet_from_ft(&local_148.ftLastWriteTime);
    param_2[3] = uVar4;
    param_2[4] = local_148.nFileSizeLow;
    FUN_10103c90(param_2 + 5,local_148.cFileName);
    return 0;
  }
  DVar2 = GetLastError();
  if (DVar2 < 2) {
LAB_100fa1e4:
    puVar3 = (undefined4 *)FUN_100fdc77();
    *puVar3 = 0x16;
  }
  else {
    if (3 < DVar2) {
      if (DVar2 == 8) {
        puVar3 = (undefined4 *)FUN_100fdc77();
        *puVar3 = 0xc;
        return 0xffffffff;
      }
      if (DVar2 != 0x12) goto LAB_100fa1e4;
    }
    puVar3 = (undefined4 *)FUN_100fdc77();
    *puVar3 = 2;
  }
  return 0xffffffff;
}


/* END FUNCTION 0x100fa1a2 */
