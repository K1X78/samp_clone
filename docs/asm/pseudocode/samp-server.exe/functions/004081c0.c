/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004081c0
 * Name: FUN_004081c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_004081c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = param_1;
  in_EAX[2] = param_1;
  in_EAX[4] = param_2;
  *in_EAX = 0;
  in_EAX[3] = 0;
  in_EAX[5] = param_3;
  *(undefined1 *)((int)in_EAX + 0x19) = 1;
  *(undefined1 *)((int)in_EAX + 0x1a) = 0;
  *(undefined1 *)(in_EAX + 6) = 0;
  return;
}


/* END FUNCTION 0x004081c0 */
