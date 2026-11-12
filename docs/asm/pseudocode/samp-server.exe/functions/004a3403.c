/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a3403
 * Name: fast_error_exit
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void fast_error_exit(int param_1)

{
  if (DAT_0051c23c != 2) {
    __FF_MSGBANNER();
  }
  __NMSG_WRITE(param_1);
                    /* WARNING: Subroutine does not return */
  ___crtExitProcess(0xff);
}


/* END FUNCTION 0x004a3403 */
