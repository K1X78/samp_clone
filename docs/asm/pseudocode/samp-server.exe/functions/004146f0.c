/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004146f0
 * Name: FUN_004146f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_004146f0(int param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  undefined4 *local_10;
  int local_c;
  int local_8;
  uint local_4;
  
  iVar4 = *(int *)(param_1 + 0x30);
  local_24 = 0;
  local_c = iVar4;
  uVar2 = FUN_0040bd90();
  uVar2 = uVar2 + 1;
  uVar6 = (iVar4 + uVar2 * 10) * 2 + 8;
  local_4 = uVar2;
  puVar3 = (uint *)FUN_00412610(uVar2 * 5);
  if (puVar3 != (uint *)0x0) {
    puVar7 = puVar3;
    for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar7 = 0;
      puVar7 = (uint *)((int)puVar7 + 1);
    }
    puVar3[1] = uVar2;
    local_10 = (undefined4 *)FUN_00412610(0);
    if (local_10 == (undefined4 *)0x0) {
      local_24 = 7;
    }
    puVar7 = puVar3;
    for (local_20 = 0; (local_24 == 0 && (local_20 < (int)uVar2)); local_20 = local_20 + 1) {
      local_24 = FUN_00414540(&local_8,(int *)&local_14);
      if (local_24 == 0) {
        local_18 = local_18 + 4;
        if (local_20 + 1U == uVar2) {
          local_1c = local_c - local_14;
        }
        else {
          local_1c = (int)(local_8 - local_18) >> 2;
        }
        puVar1 = (undefined1 *)((int)puVar3 + (local_14 + puVar3[1] * 10) * 2 + 8);
        uVar6 = local_14 + 1;
        iVar4 = 0;
        if (0 < (int)local_1c) {
          do {
            *(short *)(puVar1 + iVar4 * 2) = (short)iVar4;
            iVar4 = iVar4 + 1;
          } while (iVar4 < (int)local_1c);
        }
        local_14 = uVar6;
        FUN_0040bf30(local_18,local_10,(uint)puVar1,&local_1c);
        puVar7[3] = (uint)puVar1;
        puVar7[6] = uVar6;
        puVar7[5] = local_1c;
        puVar7[4] = local_18;
        uVar2 = local_4;
      }
      puVar7 = puVar7 + 5;
    }
    FUN_004126f0();
    if (local_24 != 0) {
      thunk_FUN_004126f0();
    }
    *param_2 = puVar3;
    return local_24;
  }
  return 7;
}


/* END FUNCTION 0x004146f0 */
