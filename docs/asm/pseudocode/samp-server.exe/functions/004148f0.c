/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004148f0
 * Name: FUN_004148f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_004148f0(uint *param_1)

{
  int in_EAX;
  
  if (param_1[3] != *(uint *)(in_EAX + 0x54)) {
    *param_1 = 0;
    param_1[3] = *(uint *)(in_EAX + 0x54);
  }
  if (*param_1 < *(uint *)(in_EAX + 0x30)) {
    *(uint *)(in_EAX + 0x30) = *param_1;
    *(uint *)(in_EAX + 0x38) = param_1[1];
    *(uint *)(in_EAX + 0x3c) = param_1[2];
    FUN_004145b0();
  }
  return 0;
}


/* END FUNCTION 0x004148f0 */
