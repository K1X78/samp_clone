/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00472cb0
 * Name: FUN_00472cb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined2 __cdecl FUN_00472cb0(undefined4 param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_2 + 4);
  if ((uVar1 < 1000) && (*(int *)(*(int *)(DAT_004fc438 + 8) + 0x24de4 + (uint)uVar1 * 4) != 0)) {
    return *(undefined2 *)
            (*(int *)(*(int *)(DAT_004fc438 + 8) + 0x25d84 + (uint)uVar1 * 4) + 0x3076);
  }
  return 0xffff;
}


/* END FUNCTION 0x00472cb0 */
