/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00426690
 * Name: FUN_00426690
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_00426690(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint local_8;
  int local_4;
  
  iVar2 = *param_1;
  iVar5 = 0;
  uVar4 = 0;
  local_8 = 0;
  if ((*(int *)(iVar2 + 0x1d8) != 0) && (param_1[0x36] != 0)) {
    iVar1 = param_1[0x36] + -1;
    local_4 = 0;
    if (0 < *(int *)(iVar2 + 4)) {
      do {
        iVar3 = *(int *)(*(int *)(iVar2 + 8) + 4 + iVar5);
        if (iVar3 != 0) {
          if ((param_2 != 2) || (uVar4 = FUN_00426610(iVar3,2,iVar1), uVar4 == 0)) {
            uVar4 = FUN_00426610(iVar3,1,iVar1);
          }
          if (local_8 == 0) {
            local_8 = uVar4;
          }
        }
        local_4 = local_4 + 1;
        iVar5 = iVar5 + 0x10;
        uVar4 = local_8;
      } while (local_4 < *(int *)(iVar2 + 4));
    }
    *(int *)(iVar2 + 0x1d8) = *(int *)(iVar2 + 0x1d8) + -1;
    param_1[0x36] = 0;
    if (param_2 == 2) {
      *(int *)(iVar2 + 0x1e0) = param_1[0x34];
      *(int *)(iVar2 + 0x1e4) = param_1[0x35];
    }
  }
  return uVar4;
}


/* END FUNCTION 0x00426690 */
