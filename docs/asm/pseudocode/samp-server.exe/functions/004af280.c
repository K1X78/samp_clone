/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004af280
 * Name: _abort
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl _abort(void)

{
  __NMSG_WRITE(10);
  _raise(0x16);
                    /* WARNING: Subroutine does not return */
  __exit(3);
}


/* END FUNCTION 0x004af280 */
