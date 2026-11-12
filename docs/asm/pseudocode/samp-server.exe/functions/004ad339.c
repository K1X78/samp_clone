/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004ad339
 * Name: __chsize_lk
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl __chsize_lk(uint param_1,int param_2)

{
  DWORD DVar1;
  DWORD DVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulong *puVar6;
  int *piVar7;
  HANDLE hFile;
  BOOL BVar8;
  int iVar9;
  uint uVar10;
  char local_1008 [4096];
  undefined4 local_8;
  
  iVar9 = 0;
  local_8 = DAT_004ec7b4;
  DVar1 = __lseek_lk(param_1,0,1);
  if ((DVar1 == 0xffffffff) || (DVar2 = __lseek_lk(param_1,0,2), DVar2 == 0xffffffff)) {
    iVar9 = -1;
  }
  else {
    uVar10 = param_2 - DVar2;
    if ((int)uVar10 < 1) {
      if ((int)uVar10 < 0) {
        __lseek_lk(param_1,param_2,0);
        hFile = (HANDLE)__get_osfhandle(param_1);
        BVar8 = SetEndOfFile(hFile);
        iVar9 = (BVar8 != 0) - 1;
        if (iVar9 == -1) {
          piVar7 = FUN_004a5f9b();
          *piVar7 = 0xd;
          puVar6 = FUN_004a5fa4();
          DVar2 = GetLastError();
          *puVar6 = DVar2;
        }
      }
    }
    else {
      _memset(local_1008,0,0x1000);
      iVar3 = __setmode_lk(param_1,0x8000);
      do {
        uVar4 = 0x1000;
        if ((int)uVar10 < 0x1000) {
          uVar4 = uVar10;
        }
        iVar5 = __write_lk(param_1,local_1008,uVar4);
        if (iVar5 == -1) {
          puVar6 = FUN_004a5fa4();
          if (*puVar6 == 5) {
            piVar7 = FUN_004a5f9b();
            *piVar7 = 0xd;
          }
          iVar9 = -1;
          break;
        }
        uVar10 = uVar10 - iVar5;
      } while (0 < (int)uVar10);
      __setmode_lk(param_1,iVar3);
    }
    __lseek_lk(param_1,DVar1,0);
  }
  return iVar9;
}


/* END FUNCTION 0x004ad339 */
