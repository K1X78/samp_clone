/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a932f
 * Name: __isindst
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

int __cdecl __isindst(tm *_Time)

{
  bool bVar1;
  undefined3 extraout_var;
  
  __lock(6);
  bVar1 = __isindst_lk();
  FUN_004a9364();
  return CONCAT31(extraout_var,bVar1);
}


/* END FUNCTION 0x004a932f */
