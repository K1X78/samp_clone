/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100fdc44
 * Name: __amsg_exit
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_102acd98 == 1) || ((DAT_102acd98 == 0 && (DAT_102acd9c == 1)))) {
    __FF_MSGBANNER();
  }
  __NMSG_WRITE(param_1);
  (*(code *)PTR___exit_10155710)(0xff);
  return;
}


/* END FUNCTION 0x100fdc44 */
