/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041a630
 * Name: FUN_0041a630
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0041a630(int param_1,undefined4 param_2)

{
  int in_EAX;
  char *pcVar1;
  double local_8;
  
  if (in_EAX != 0) {
    FUN_004085d0(&local_8);
    if (param_1 != 0) {
      local_8 = -local_8;
    }
    pcVar1 = (char *)FUN_00415c00();
    FUN_004197c0(param_2,0,0x82,pcVar1,-0xc);
  }
  return;
}


/* END FUNCTION 0x0041a630 */
