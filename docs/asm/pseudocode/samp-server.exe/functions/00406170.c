/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00406170
 * Name: FUN_00406170
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_00406170(undefined4 param_1,int param_2)

{
  uint in_EAX;
  
  return ((in_EAX & 0xfffffffc) - (in_EAX & 3)) + 3 + param_2;
}


/* END FUNCTION 0x00406170 */
