/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a288f
 * Name: doexit
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl doexit(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  UINT uExitCode;
  
  __lock(8);
  if (DAT_0051c230 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  _DAT_0051c22c = 1;
  DAT_0051c228 = (undefined1)param_3;
  if (param_2 == 0) {
    if (DAT_0051ca4c != (undefined4 *)0x0) {
      while( true ) {
        DAT_0051ca48 = DAT_0051ca48 + -1;
        if (DAT_0051ca48 < DAT_0051ca4c) break;
        if ((code *)*DAT_0051ca48 != (code *)0x0) {
          (*(code *)*DAT_0051ca48)();
        }
      }
    }
    __initterm((undefined4 *)&DAT_004ca050);
  }
  __initterm((undefined4 *)&DAT_004ca05c);
  FUN_004a293e();
  if (param_3 == 0) {
    DAT_0051c230 = 1;
                    /* WARNING: Subroutine does not return */
    ___crtExitProcess(param_1);
  }
  return;
}


/* END FUNCTION 0x004a288f */
