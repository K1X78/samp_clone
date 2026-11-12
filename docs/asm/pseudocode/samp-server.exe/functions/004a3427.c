/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a3427
 * Name: entry
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int entry(void)

{
  HMODULE pHVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  _OSVERSIONINFOA local_cc;
  
  builtin_memcpy(local_cc.szCSDVersion + 0x7c,"?4J",4);
  local_cc.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_cc);
  DAT_0051c1f0 = local_cc.dwPlatformId;
  DAT_0051c1fc = local_cc.dwMajorVersion;
  _DAT_0051c200 = local_cc.dwMinorVersion;
  _DAT_0051c1f4 = local_cc.dwBuildNumber & 0x7fff;
  if (local_cc.dwPlatformId != 2) {
    _DAT_0051c1f4 = _DAT_0051c1f4 | 0x8000;
  }
  _DAT_0051c1f8 = local_cc.dwMajorVersion * 0x100 + local_cc.dwMinorVersion;
  pHVar1 = GetModuleHandleA((LPCSTR)0x0);
  if (((short)pHVar1->unused == 0x5a4d) &&
     (piVar3 = (int *)((int)&pHVar1->unused + pHVar1[0xf].unused), *piVar3 == 0x4550)) {
    if ((short)piVar3[6] == 0x10b) {
      if (0xe < (uint)piVar3[0x1d]) {
        iVar2 = piVar3[0x3a];
        goto LAB_004a34e6;
      }
    }
    else if (((short)piVar3[6] == 0x20b) && (0xe < (uint)piVar3[0x21])) {
      iVar2 = piVar3[0x3e];
LAB_004a34e6:
      bVar4 = iVar2 != 0;
      goto LAB_004a34ec;
    }
  }
  bVar4 = false;
LAB_004a34ec:
  iVar2 = __heap_init();
  if (iVar2 == 0) {
    fast_error_exit(0x1c);
  }
  iVar2 = __mtinit();
  if (iVar2 == 0) {
    fast_error_exit(0x10);
  }
  __RTC_Initialize();
  iVar2 = __ioinit();
  if (iVar2 < 0) {
    __amsg_exit(0x1b);
  }
  DAT_0051ca40 = GetCommandLineA();
  DAT_0051c234 = ___crtGetEnvironmentStringsA();
  iVar2 = __setargv();
  if (iVar2 < 0) {
    __amsg_exit(8);
  }
  iVar2 = __setenvp();
  if (iVar2 < 0) {
    __amsg_exit(9);
  }
  iVar2 = __cinit(1);
  if (iVar2 != 0) {
    __amsg_exit(iVar2);
  }
  DAT_0051c214 = DAT_0051c210;
  iVar2 = FUN_00492420();
  if (!bVar4) {
                    /* WARNING: Subroutine does not return */
    _exit(iVar2);
  }
  __cexit();
  return iVar2;
}


/* END FUNCTION 0x004a3427 */
