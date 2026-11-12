/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00478aa0
 * Name: FUN_00478aa0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_00478aa0(int *param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = *(int *)(DAT_004fc438 + 8);
  if (iVar2 != 0) {
    uVar1 = *(ushort *)(param_2 + 4);
    if ((uVar1 < 1000) && (*(int *)(iVar2 + 0x24de4 + (uint)uVar1 * 4) != 0)) {
      if (uVar1 < 1000) {
        iVar2 = *(int *)(iVar2 + 0x25d84 + (uint)uVar1 * 4);
      }
      else {
        iVar2 = 0;
      }
      pcVar3 = (char *)FUN_00489270(*(void **)(iVar2 + 0x30cb),*(int *)(param_2 + 8));
      if (pcVar3 != (char *)0x0) {
        iVar2 = FUN_0046fcb0(param_1,*(int *)(param_2 + 0xc),pcVar3,*(int *)(param_2 + 0x10));
        return iVar2;
      }
      FUN_0046fcb0(param_1,*(int *)(param_2 + 0xc),&DAT_004fc400,*(int *)(param_2 + 0x10));
    }
  }
  return 0;
}


/* END FUNCTION 0x00478aa0 */
