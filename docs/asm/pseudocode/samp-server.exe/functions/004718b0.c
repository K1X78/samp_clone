/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004718b0
 * Name: FUN_004718b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_004718b0(undefined4 param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_2 + 4);
  if ((uVar1 < 2000) &&
     (*(int *)((int)*(void **)(DAT_004fc438 + 0xc) + (uint)uVar1 * 4 + 0x3f54) != 0)) {
    FUN_004677d0(*(void **)(DAT_004fc438 + 0xc),uVar1);
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x004718b0 */
