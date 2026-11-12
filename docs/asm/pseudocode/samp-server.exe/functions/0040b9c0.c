/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040b9c0
 * Name: FUN_0040b9c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined1 __fastcall FUN_0040b9c0(int param_1)

{
  int in_EAX;
  
  if ((-1 < param_1) && (*(char *)(in_EAX + 0xb) == '\0')) {
    *(char *)(in_EAX + 4) = (char)param_1;
  }
  return *(undefined1 *)(in_EAX + 4);
}


/* END FUNCTION 0x0040b9c0 */
