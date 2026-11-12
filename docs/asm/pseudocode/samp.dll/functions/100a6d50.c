/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a6d50
 * Name: FUN_100a6d50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6d50(void)

{
  DWORD local_8;
  DWORD local_4;
  
  VirtualProtect(&DAT_00742495,5,0x40,&local_8);
  DAT_00742495 = 0xe8;
  _DAT_00742496 = 0xf9630a6;
  VirtualProtect(&DAT_00742495,5,local_8,&local_4);
  VirtualProtect(&DAT_007424ec,5,0x40,&local_8);
  DAT_007424ec = 0xe8;
  _DAT_007424ed = 0xf96304f;
  VirtualProtect(&DAT_007424ec,5,local_8,&local_4);
  VirtualProtect(&DAT_00742548,5,0x40,&local_8);
  DAT_00742548 = 0xe8;
  _DAT_00742549 = 0xf962ff3;
  VirtualProtect(&DAT_00742548,5,local_8,&local_4);
  VirtualProtect(&DAT_00740721,5,0x40,&local_8);
  DAT_00740721 = 0xe8;
  _DAT_00740722 = 0xf964c3a;
  VirtualProtect(&DAT_00740721,5,local_8,&local_4);
  VirtualProtect(&DAT_00740b69,5,0x40,&local_8);
  DAT_00740b69 = 0xe8;
  _DAT_00740b6a = 0xf9647f2;
  VirtualProtect(&DAT_00740b69,5,local_8,&local_4);
  VirtualProtect(&DAT_00736247,5,0x40,&local_8);
  DAT_00736247 = 0xe8;
  _DAT_00736248 = 0xf96f114;
  VirtualProtect(&DAT_00736247,5,local_8,&local_4);
  VirtualProtect(&DAT_007424cb,5,0x40,&local_8);
  DAT_007424cb = 0xe8;
  _DAT_007424cc = 0xf963130;
  VirtualProtect(&DAT_007424cb,5,local_8,&local_4);
  VirtualProtect(&DAT_0073ac4b,5,0x40,&local_8);
  DAT_0073ac4b = 0xe8;
  _DAT_0073ac4c = 0xf96aa00;
  VirtualProtect(&DAT_0073ac4b,5,local_8,&local_4);
  return;
}


/* END FUNCTION 0x100a6d50 */
