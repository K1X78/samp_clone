/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004abbf3
 * Name: __FF_MSGBANNER
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl __FF_MSGBANNER(void)

{
  if ((DAT_0051c23c == 1) || ((DAT_0051c23c == 0 && (DAT_004ec1e4 == 1)))) {
    __NMSG_WRITE(0xfc);
    if (DAT_0051c4a8 != (code *)0x0) {
      (*DAT_0051c4a8)();
    }
    __NMSG_WRITE(0xff);
  }
  return;
}


/* END FUNCTION 0x004abbf3 */
