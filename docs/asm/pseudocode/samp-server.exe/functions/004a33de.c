/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a33de
 * Name: __amsg_exit
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl __amsg_exit(int param_1)

{
  if (DAT_0051c23c != 2) {
    __FF_MSGBANNER();
  }
  __NMSG_WRITE(param_1);
  (*(code *)PTR___exit_004ec1e0)(0xff);
  return;
}


/* END FUNCTION 0x004a33de */
