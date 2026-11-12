/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a96e9
 * Name: ___DestructExceptionObject
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

void __cdecl ___DestructExceptionObject(int param_1)

{
  undefined *UNRECOVERED_JUMPTABLE;
  
  if ((param_1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(undefined **)(*(int *)(param_1 + 0x1c) + 4),
     UNRECOVERED_JUMPTABLE != (undefined *)0x0)) {
    FID_conflict__CallMemberFunction1(*(undefined4 *)(param_1 + 0x18),UNRECOVERED_JUMPTABLE);
  }
  return;
}


/* END FUNCTION 0x004a96e9 */
