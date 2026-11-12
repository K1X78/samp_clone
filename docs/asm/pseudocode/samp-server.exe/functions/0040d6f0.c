/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040d6f0
 * Name: FUN_0040d6f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined * __fastcall FUN_0040d6f0(int *param_1)

{
  int in_EAX;
  
  if (in_EAX < 0) {
    in_EAX = param_1[3] + -1;
  }
  if (*(char *)(*param_1 + 0x1e) != '\0') {
    return &DAT_004b28a8;
  }
  return (undefined *)(param_1[5] + in_EAX * 0x14);
}


/* END FUNCTION 0x0040d6f0 */
