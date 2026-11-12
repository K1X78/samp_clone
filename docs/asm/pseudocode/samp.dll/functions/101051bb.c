/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x101051bb
 * Name: __isindst
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

int __cdecl __isindst(tm *_Time)

{
  int iVar1;
  
  __lock(6);
  iVar1 = __isindst_lk();
  FUN_101051f0();
  return iVar1;
}


/* END FUNCTION 0x101051bb */
