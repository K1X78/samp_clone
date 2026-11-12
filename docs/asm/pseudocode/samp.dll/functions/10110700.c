/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10110700
 * Name: FUN_10110700
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_10110700(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint local_30;
  int local_10;
  char *local_8;
  
  iVar1 = FUN_10111170(param_1,1);
  pcVar2 = (char *)FUN_10111170(param_2,0);
  uVar3 = (uint)*(byte *)(iVar1 + 0x1f);
  if ((uVar3 == 0) || (0x1e < uVar3)) {
    SetLastError(6);
    uVar4 = 0;
  }
  else if (*(char *)(iVar1 + uVar3) == -0x17) {
    pcVar5 = (char *)((iVar1 + uVar3 + 5 + *(int *)(iVar1 + uVar3 + 1)) - uVar3);
    if (*pcVar5 == -0x17) {
      if (pcVar5 + *(int *)(pcVar5 + 1) + 5 == pcVar2) {
        FUN_10110870(pcVar5,uVar3);
        local_30 = 0;
        local_10 = iVar1;
        local_8 = pcVar5;
        while ((int)local_30 < (int)uVar3) {
          local_10 = FUN_10111c60(local_8,local_10,0);
          local_30 = local_10 - iVar1;
          local_8 = pcVar5 + local_30;
        }
        if (local_30 == uVar3) {
          FUN_101108f0();
          uVar4 = 1;
        }
        else {
          SetLastError(0xd);
          FUN_101108f0();
          uVar4 = 0;
        }
      }
      else {
        SetLastError(0xc);
        uVar4 = 0;
      }
    }
    else {
      SetLastError(9);
      uVar4 = 0;
    }
  }
  else {
    SetLastError(6);
    uVar4 = 0;
  }
  return uVar4;
}


/* END FUNCTION 0x10110700 */
