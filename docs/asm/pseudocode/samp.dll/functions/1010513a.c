/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1010513a
 * Name: ___tzset
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

void __cdecl ___tzset(void)

{
  if (DAT_102ad0dc == 0) {
    __lock(6);
    if (DAT_102ad0dc == 0) {
      __tzset_lk();
      DAT_102ad0dc = DAT_102ad0dc + 1;
    }
    FUN_1010517d();
  }
  return;
}


/* END FUNCTION 0x1010513a */
