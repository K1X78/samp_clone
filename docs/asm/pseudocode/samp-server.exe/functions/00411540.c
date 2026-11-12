/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00411540
 * Name: FUN_00411540
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * FUN_00411540(void)

{
  uint in_EAX;
  char *pcVar1;
  
  if ((0x1a < (in_EAX & 0xff)) ||
     (pcVar1 = (&PTR_s_not_an_error_004b5c50)[in_EAX & 0xff], pcVar1 == (char *)0x0)) {
    pcVar1 = "unknown error";
  }
  return pcVar1;
}


/* END FUNCTION 0x00411540 */
