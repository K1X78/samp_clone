/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a9f0c
 * Name: report_failure
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */

void report_failure(void)

{
  ___security_error_handler(1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(3);
}


/* END FUNCTION 0x004a9f0c */
