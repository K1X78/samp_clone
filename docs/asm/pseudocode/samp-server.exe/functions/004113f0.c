/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004113f0
 * Name: FUN_004113f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool __fastcall FUN_004113f0(int param_1)

{
  int in_EAX;
  
  for (; (0 < in_EAX && (*(char *)(param_1 + -1 + in_EAX) == ' ')); in_EAX = in_EAX + -1) {
  }
  return in_EAX == 0;
}


/* END FUNCTION 0x004113f0 */
