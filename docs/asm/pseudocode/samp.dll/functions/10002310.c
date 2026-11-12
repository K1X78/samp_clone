/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10002310
 * Name: FUN_10002310
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __fastcall FUN_10002310(undefined4 *param_1)

{
  WSADATA local_190;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined4 *)((int)param_1 + 0x1a) = 0;
  *(undefined4 *)((int)param_1 + 0x1e) = 0;
  *(undefined4 *)((int)param_1 + 0x22) = 0;
  *(undefined4 *)((int)param_1 + 0x26) = 0;
  *(undefined4 *)((int)param_1 + 0x2a) = 0;
  *(undefined4 *)((int)param_1 + 0x2e) = 0;
  *(undefined4 *)((int)param_1 + 0x32) = 0;
  *param_1 = 0xffffffff;
  WSAStartup(0x202,&local_190);
  return param_1;
}


/* END FUNCTION 0x10002310 */
