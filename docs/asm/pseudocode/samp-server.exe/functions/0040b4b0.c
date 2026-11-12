/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040b4b0
 * Name: FUN_0040b4b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0040b4b0(int param_1)

{
  uint in_EAX;
  
  if (((in_EAX & 0xff) == 0xd) || ((in_EAX & 0xff) == 10)) {
    *(uint *)(param_1 + 0x24) = in_EAX;
  }
  return;
}


/* END FUNCTION 0x0040b4b0 */
