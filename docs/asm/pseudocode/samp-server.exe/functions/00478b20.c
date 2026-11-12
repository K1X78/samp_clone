/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00478b20
 * Name: FUN_00478b20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00478b20(undefined4 param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_004fc438 + 8);
  if (((iVar2 != 0) && (uVar1 = *(ushort *)(param_2 + 4), uVar1 < 1000)) &&
     (*(int *)(iVar2 + 0x24de4 + (uint)uVar1 * 4) != 0)) {
    if (999 < uVar1) {
      return *(undefined4 *)(iRam000030cb + 52000);
    }
    return *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x25d84 + (uint)uVar1 * 4) + 0x30cb) + 52000);
  }
  return 0;
}


/* END FUNCTION 0x00478b20 */
