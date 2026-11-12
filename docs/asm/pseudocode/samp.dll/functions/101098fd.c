/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x101098fd
 * Name: __FF_MSGBANNER
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl __FF_MSGBANNER(void)

{
  if ((DAT_102acd98 == 1) || ((DAT_102acd98 == 0 && (DAT_102acd9c == 1)))) {
    __NMSG_WRITE(0xfc);
    if (DAT_102ad214 != (code *)0x0) {
      (*DAT_102ad214)();
    }
    __NMSG_WRITE(0xff);
  }
  return;
}


/* END FUNCTION 0x101098fd */
