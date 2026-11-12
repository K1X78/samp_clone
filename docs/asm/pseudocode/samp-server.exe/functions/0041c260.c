/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041c260
 * Name: FUN_0041c260
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_0041c260(int param_1)

{
  char *in_EAX;
  
  if ((1 < param_1) && ((*in_EAX == '\x06' || (*in_EAX == '\a')))) {
    FUN_00418b00((undefined **)
                 "only a single result allowed for a SELECT that is part of an expression");
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x0041c260 */
