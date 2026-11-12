/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100aa180
 * Name: FUN_100aa180
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aa180(void)

{
  DWORD local_4;
  
  FUN_100aa060(&DAT_00551024,7,0x68);
  _DAT_00551024 = DAT_101546b0;
  _DAT_00551028 = DAT_101546b4;
  DAT_0055102a = DAT_101546b6;
  VirtualProtect(&DAT_0055105f,4,0x40,&local_4);
  _DAT_0055105f = 20000;
  VirtualProtect(&DAT_005510cf,4,0x40,&local_4);
  _DAT_005510cf = 16000;
  VirtualProtect(&DAT_00550f46,4,0x40,&local_4);
  _DAT_00550f46 = 300000;
  VirtualProtect(&DAT_00550f82,4,0x40,&local_4);
  _DAT_00550f82 = 210000;
  VirtualProtect(&DAT_00550fba,4,0x40,&local_4);
  _DAT_00550fba = 50000;
  VirtualProtect(&DAT_00551097,4,0x40,&local_4);
  _DAT_00551097 = 0xc1c;
  VirtualProtect(&DAT_00550ff2,1,0x40,&local_4);
  DAT_00550ff2 = 0xf0;
  VirtualProtect(&DAT_00551283,1,0x40,&local_4);
  DAT_00551283 = 0xf0;
  VirtualProtect(&DAT_00551140,1,0x40,&local_4);
  DAT_00551140 = 5;
  VirtualProtect(&DAT_00551178,1,0x40,&local_4);
  DAT_00551178 = 1;
  VirtualProtect(&DAT_0054f3a1,4,0x40,&local_4);
  _DAT_0054f3a1 = 20000;
  VirtualProtect(&DAT_00551106,5,0x40,&local_4);
  _DAT_00551106 = DAT_101546b8;
  DAT_0055110a = DAT_101546bc;
  return;
}


/* END FUNCTION 0x100aa180 */
