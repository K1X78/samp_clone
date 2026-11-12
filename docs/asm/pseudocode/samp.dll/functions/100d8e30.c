/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d8e30
 * Name: FUN_100d8e30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100d8e30(int *param_1,uint param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  code *pcVar4;
  uint uVar5;
  code *local_4;
  
  iVar1 = *param_1;
  local_4 = (code *)0x0;
  if (param_4 == 0) {
    return 0;
  }
  if ((*(byte *)(iVar1 + 0x110) & 0x10) != 0) {
    uVar2 = FUN_100d86d0(param_2,param_3);
    return uVar2;
  }
  if ((param_2 & 1) != 0) {
    local_4 = *(code **)(iVar1 + 0x1a0);
  }
  pcVar4 = (code *)0x0;
  if ((((param_2 & 2) != 0) &&
      (pcVar4 = *(code **)(iVar1 + 0x1a4), *(code **)(iVar1 + 0x1a4) == (code *)0x0)) &&
     (pcVar4 = (code *)0x0, *(int *)(iVar1 + 0x160) != 0)) {
    pcVar4 = *(code **)(iVar1 + 0x1a0);
  }
  do {
    uVar5 = param_4;
    if (0x4000 < param_4) {
      uVar5 = 0x4000;
    }
    if (local_4 != (code *)0x0) {
      uVar3 = (*local_4)(param_3,1,uVar5,*(undefined4 *)(iVar1 + 0x158));
      if (uVar3 == 0x10000001) {
        if ((*(byte *)(param_1[200] + 0x44) & 0x10) != 0) {
          FUN_100d8ba0(iVar1,"Write callback asked for PAUSE when not supported!");
          return 0x17;
        }
        uVar2 = FUN_100d86d0(param_2,param_3);
        return uVar2;
      }
      if (uVar3 != uVar5) {
        FUN_100d8ba0(iVar1,"Failed writing body (%zu != %zu)",uVar3,uVar5);
        return 0x17;
      }
    }
    if (pcVar4 != (code *)0x0) {
      uVar3 = (*pcVar4)(param_3,1,uVar5,*(undefined4 *)(iVar1 + 0x160));
      if (uVar3 == 0x10000001) {
        uVar2 = FUN_100d86d0(2,param_3);
        return uVar2;
      }
      if (uVar3 != uVar5) {
        FUN_100d8ba0(iVar1,"Failed writing header");
        return 0x17;
      }
    }
    param_3 = param_3 + uVar5;
    param_4 = param_4 - uVar5;
    if (param_4 == 0) {
      return 0;
    }
  } while( true );
}


/* END FUNCTION 0x100d8e30 */
