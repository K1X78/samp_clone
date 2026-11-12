/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040dcf0
 * Name: FUN_0040dcf0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0040dcf0(int param_1)

{
  int in_EAX;
  
  if (0x20 < param_1) {
    *(undefined4 *)(in_EAX + 0xe4) = 0xffffffff;
    return;
  }
  *(uint *)(in_EAX + 0xe4) = *(uint *)(in_EAX + 0xe4) | 1 << ((char)param_1 - 1U & 0x1f);
  return;
}


/* END FUNCTION 0x0040dcf0 */
