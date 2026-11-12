/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004b0ab8
 * Name: __getch
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

int __cdecl __getch(void)

{
  uint uVar1;
  
  __lock(3);
  uVar1 = __getch_lk();
  FUN_004b0aea();
  return uVar1;
}


/* END FUNCTION 0x004b0ab8 */
