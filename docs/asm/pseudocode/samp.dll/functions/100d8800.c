/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d8800
 * Name: FUN_100d8800
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100d8800(int *param_1,int param_2,undefined4 *param_3,uint param_4,uint *param_5)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 local_4;
  
  iVar1 = *param_1;
  local_4 = 0x38;
  iVar3 = FUN_100d5880(*(undefined4 *)(iVar1 + 100),1);
  if ((iVar3 == 0) || (bVar2 = true, *(int *)param_1[0x18b] != 1)) {
    bVar2 = false;
  }
  iVar3 = param_1[0x67];
  *param_5 = 0;
  if (bVar2) {
    uVar4 = param_1[0xf0] - param_1[0xef];
    if (param_4 <= uVar4) {
      uVar4 = param_4;
    }
    if (uVar4 != 0) {
      puVar6 = (undefined4 *)(param_1[0xee] + param_1[0xef]);
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *param_3 = *puVar6;
        puVar6 = puVar6 + 1;
        param_3 = param_3 + 1;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)param_3 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        param_3 = (undefined4 *)((int)param_3 + 1);
      }
      param_1[0xef] = param_1[0xef] + uVar4;
      param_1[0xb9] = 0;
      *param_5 = uVar4;
      return 0;
    }
    if (0x3fff < param_4) {
      param_4 = 0x4000;
    }
    uVar4 = param_4;
    puVar6 = (undefined4 *)param_1[0xee];
  }
  else {
    uVar4 = *(uint *)(iVar1 + 0x4d0);
    puVar6 = param_3;
    if (param_4 < uVar4) {
      uVar4 = param_4;
    }
  }
  uVar4 = (*(code *)param_1[(param_2 == iVar3) + 0x6c])
                    (param_1,(uint)(param_2 == iVar3),puVar6,uVar4,&local_4);
  if (-1 < (int)uVar4) {
    if (bVar2) {
      puVar6 = (undefined4 *)param_1[0xee];
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *param_3 = *puVar6;
        puVar6 = puVar6 + 1;
        param_3 = param_3 + 1;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)param_3 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        param_3 = (undefined4 *)((int)param_3 + 1);
      }
      param_1[0xf0] = uVar4;
      param_1[0xef] = uVar4;
    }
    *param_5 = *param_5 + uVar4;
    return 0;
  }
  return local_4;
}


/* END FUNCTION 0x100d8800 */
