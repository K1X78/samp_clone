/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00477370
 * Name: FUN_00477370
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00477370(undefined4 param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  
  uVar1 = *(ushort *)(param_2 + 4);
  if (uVar1 < 1000) {
    iVar3 = *(int *)(*(int *)(DAT_004fc438 + 8) + 0x24de4 + (uint)uVar1 * 4);
    if ((iVar3 != 0) && (*(int *)(DAT_004fc438 + 0x24) != 0)) {
      uVar2 = *(ushort *)(param_2 + 8);
      if ((uVar2 < 0x400) &&
         (*(int *)(*(int *)(DAT_004fc438 + 0x24) + 0x4000 + (uint)uVar2 * 4) != 0)) {
        FUN_00464e60(uVar1,CONCAT22((short)((uint)iVar3 >> 0x10),uVar2),*(uint *)(param_2 + 0xc));
        return 1;
      }
    }
  }
  return 0;
}


/* END FUNCTION 0x00477370 */
