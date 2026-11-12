/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00470f70
 * Name: FUN_00470f70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00470f70(undefined4 param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_2 + 4);
  if (uVar1 < 2000) {
    if (*(int *)((int)*(void **)(DAT_004fc438 + 0xc) + (uint)uVar1 * 4 + 0x2014) != 0) {
      FUN_004676b0(*(void **)(DAT_004fc438 + 0xc),uVar1,*(undefined4 *)(param_2 + 8));
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x00470f70 */
