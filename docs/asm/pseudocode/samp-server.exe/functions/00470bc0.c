/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00470bc0
 * Name: FUN_00470bc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00470bc0(undefined4 param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_2 + 4);
  if ((uVar1 < 1000) && (*(int *)(*(int *)(DAT_004fc438 + 8) + 0x24de4 + (uint)uVar1 * 4) != 0)) {
    return *(undefined4 *)(*(int *)(DAT_004fc438 + 8) + 0x2cecc + (uint)uVar1 * 4);
  }
  return 0;
}


/* END FUNCTION 0x00470bc0 */
