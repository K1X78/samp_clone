/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00470fb0
 * Name: FUN_00470fb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00470fb0(undefined4 param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_2 + 4);
  if (((uVar1 < 2000) && (*(int *)(*(int *)(DAT_004fc438 + 0xc) + 0x2014 + (uint)uVar1 * 4) != 0))
     && (uVar1 < 2000)) {
    return *(undefined4 *)(*(int *)(DAT_004fc438 + 0xc) + 0xd4 + (uint)uVar1 * 4);
  }
  return 0;
}


/* END FUNCTION 0x00470fb0 */
