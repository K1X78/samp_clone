/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004167e0
 * Name: FUN_004167e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_004167e0(undefined4 param_1)

{
  bool bVar1;
  int local_8;
  uint local_4;
  
  FUN_00412de0(8,(undefined1 *)&local_8);
  if (((int)local_4 < 1) && ((int)local_4 < 0)) {
    bVar1 = local_8 != 0;
    local_8 = -local_8;
    local_4 = -((local_4 ^ 0x80000000) + (uint)bVar1);
  }
  FUN_0040ddd0(param_1,local_8,local_4);
  return;
}


/* END FUNCTION 0x004167e0 */
