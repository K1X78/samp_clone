/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a9e8d
 * Name: _inconsistency
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */

void _inconsistency(void)

{
  if (PTR_terminate_004ec7b8 != (undefined *)0x0) {
    (*(code *)PTR_terminate_004ec7b8)();
  }
                    /* WARNING: Subroutine does not return */
  terminate();
}


/* END FUNCTION 0x004a9e8d */
