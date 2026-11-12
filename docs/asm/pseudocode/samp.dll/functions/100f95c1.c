/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f95c1
 * Name: doexit
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

void doexit(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  UINT uExitCode;
  
  __lock(8);
  if (DAT_102acd84 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_102acd80 = 1;
  DAT_102acd7c = (undefined1)param_3;
  if (param_2 == 0) {
    if (DAT_102ae6b4 != (undefined4 *)0x0) {
      while( true ) {
        DAT_102ae6b0 = DAT_102ae6b0 + -1;
        if (DAT_102ae6b0 < DAT_102ae6b4) break;
        if ((code *)*DAT_102ae6b0 != (code *)0x0) {
          (*(code *)*DAT_102ae6b0)();
        }
      }
    }
    __initterm(&DAT_1013c048);
  }
  __initterm(&DAT_1013c054);
  FUN_100f9670();
  if (param_3 == 0) {
    DAT_102acd84 = 1;
                    /* WARNING: Subroutine does not return */
    ___crtExitProcess(param_1);
  }
  return;
}


/* END FUNCTION 0x100f95c1 */
