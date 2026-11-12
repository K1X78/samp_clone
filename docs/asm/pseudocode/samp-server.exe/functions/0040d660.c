/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040d660
 * Name: FUN_0040d660
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0040d660(undefined4 param_1,undefined1 param_2)

{
  int in_EAX;
  
  if (*(int *)(in_EAX + 0x14) != 0) {
    *(undefined1 *)(*(int *)(in_EAX + 0x14) + -0x11 + *(int *)(in_EAX + 0xc) * 0x14) = param_2;
  }
  return;
}


/* END FUNCTION 0x0040d660 */
