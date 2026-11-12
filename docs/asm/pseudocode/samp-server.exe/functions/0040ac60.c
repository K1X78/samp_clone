/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040ac60
 * Name: FUN_0040ac60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0040ac60(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = param_2;
  in_EAX[4] = in_EAX + 8;
  *in_EAX = 0;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[5] = 0;
  *(short *)(in_EAX + 6) = (short)(param_3 - 0x20U >> 4);
  *(undefined1 *)((int)in_EAX + 0x1a) = 1;
  *(undefined1 *)((int)in_EAX + 0x1b) = 0;
  return;
}


/* END FUNCTION 0x0040ac60 */
