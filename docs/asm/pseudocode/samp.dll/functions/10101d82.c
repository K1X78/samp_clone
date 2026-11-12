/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10101d82
 * Name: ___updatetlocinfo
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

pthreadlocinfo __cdecl ___updatetlocinfo(void)

{
  pthreadlocinfo ptVar1;
  
  __lock(0xc);
  ptVar1 = (pthreadlocinfo)___updatetlocinfo_lk();
  FUN_10101db4();
  return ptVar1;
}


/* END FUNCTION 0x10101d82 */
