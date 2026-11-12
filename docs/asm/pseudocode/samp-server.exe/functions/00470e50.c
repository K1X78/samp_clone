/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00470e50
 * Name: FUN_00470e50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_00470e50(undefined4 param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_2 + 4);
  if ((uVar1 < 1000) && (*(int *)(*(int *)(DAT_004fc438 + 8) + 0x24de4 + (uint)uVar1 * 4) != 0)) {
    if (999 < uVar1) {
      return (uint)bRam00002fe9;
    }
    return (uint)*(byte *)(*(int *)(*(int *)(DAT_004fc438 + 8) + 0x25d84 + (uint)uVar1 * 4) + 0x2fe9
                          );
  }
  return 0xffffffff;
}


/* END FUNCTION 0x00470e50 */
