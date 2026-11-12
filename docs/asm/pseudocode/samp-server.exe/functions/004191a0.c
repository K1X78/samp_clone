/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004191a0
 * Name: FUN_004191a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_004191a0(uint param_1)

{
  int in_EAX;
  uint local_4;
  
  if (0 < in_EAX) {
    *(int *)(param_1 + 0x88) = in_EAX;
  }
  if (*(char *)(param_1 + 0xe) != '\0') {
    local_4 = param_1;
    FUN_00414010(&local_4);
  }
  return *(undefined4 *)(param_1 + 0x88);
}


/* END FUNCTION 0x004191a0 */
