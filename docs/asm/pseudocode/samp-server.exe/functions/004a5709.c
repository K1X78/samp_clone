/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a5709
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
  FUN_004a573b();
  return ptVar1;
}


/* END FUNCTION 0x004a5709 */
