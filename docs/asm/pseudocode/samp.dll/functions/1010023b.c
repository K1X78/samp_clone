/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1010023b
 * Name: _inconsistency
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */

void _inconsistency(void)

{
  if (PTR_terminate_10155bcc != (undefined *)0x0) {
    (*(code *)PTR_terminate_10155bcc)();
  }
                    /* WARNING: Subroutine does not return */
  terminate();
}


/* END FUNCTION 0x1010023b */
