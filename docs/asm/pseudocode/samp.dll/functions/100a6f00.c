/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a6f00
 * Name: FUN_100a6f00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6f00(void)

{
  DWORD local_8;
  DWORD local_4;
  
  VirtualProtect(&DAT_006d7c90,5,0x40,&local_8);
  DAT_006d7c90 = 0xe9;
  _DAT_006d7c91 = 0xf9cd3fb;
  VirtualProtect(&DAT_006d7c90,5,local_8,&local_4);
  return;
}


/* END FUNCTION 0x100a6f00 */
