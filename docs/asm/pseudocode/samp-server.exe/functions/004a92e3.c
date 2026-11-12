/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a92e3
 * Name: ___tzset
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

void __cdecl ___tzset(void)

{
  if (DAT_0051c47c == 0) {
    __lock(6);
    if (DAT_0051c47c == 0) {
      __tzset_lk();
      DAT_0051c47c = DAT_0051c47c + 1;
    }
    FUN_004a9326();
  }
  return;
}


/* END FUNCTION 0x004a92e3 */
