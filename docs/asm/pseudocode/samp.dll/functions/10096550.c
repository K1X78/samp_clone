/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10096550
 * Name: FUN_10096550
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __fastcall FUN_10096550(undefined4 *param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  *param_1 = &PTR_FUN_1011dbc4;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0x3f800000;
  FUN_10093810(&local_c,&local_18);
  FUN_10093910(0x3f490fdb,0x3f800000,0x3f800000,0x447a0000);
  GetCursorPos((LPPOINT)(param_1 + 0x23));
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined1 *)((int)param_1 + 0x95) = 0;
  *(undefined1 *)((int)param_1 + 0x96) = 0;
  *(undefined4 *)((int)param_1 + 0x97) = 0;
  *(undefined4 *)((int)param_1 + 0x9b) = 0;
  *(undefined4 *)((int)param_1 + 0xdb) = 0;
  *(undefined4 *)((int)param_1 + 0xdf) = 0;
  SetRect((LPRECT)((int)param_1 + 0xe3),-0x80000000,-0x80000000,0x7fffffff,0x7fffffff);
  *(undefined4 *)((int)param_1 + 0xf3) = 0;
  *(undefined4 *)((int)param_1 + 0xf7) = 0;
  *(undefined4 *)((int)param_1 + 0xfb) = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  *(undefined1 *)((int)param_1 + 0x136) = 1;
  *(undefined1 *)((int)param_1 + 0x135) = 1;
  *(undefined1 *)((int)param_1 + 0xff) = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0x3e800000;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x4b] = 0x3c23d70a;
  param_1[0x4c] = 0x40a00000;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  *(undefined4 *)((int)param_1 + 0x9f) = 0;
  *(undefined4 *)((int)param_1 + 0xa3) = 0;
  *(undefined4 *)((int)param_1 + 0xa7) = 0x40000000;
  param_1[0x4e] = 0xbf800000;
  param_1[0x4f] = 0xbf800000;
  param_1[0x50] = 0xbf800000;
  param_1[0x51] = 0x3f800000;
  param_1[0x52] = 0x3f800000;
  *(undefined1 *)((int)param_1 + 0x137) = 0;
  *(undefined1 *)(param_1 + 0x54) = 0;
  param_1[0x53] = 0x3f800000;
  return param_1;
}


/* END FUNCTION 0x10096550 */
