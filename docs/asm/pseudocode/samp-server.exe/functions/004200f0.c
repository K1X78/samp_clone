/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004200f0
 * Name: FUN_004200f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __cdecl FUN_004200f0(int param_1,undefined4 *param_2,uint param_3,int *param_4)

{
  byte bVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined3 extraout_var;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint local_14;
  ushort local_c;
  
  uVar4 = param_3;
  puVar7 = param_2;
  puVar2 = (undefined4 *)0x0;
  if (param_2 != (undefined4 *)0x0) {
    uVar3 = param_3 & 1;
    local_c = 0;
    if (param_4 == (int *)0x0) {
      uVar9 = FUN_0040e530((int)param_2,param_3);
      puVar2 = FUN_00412930(uVar9);
    }
    else {
      puVar2 = (undefined4 *)*param_4;
      local_c = 0x4000;
    }
    if (puVar2 != (undefined4 *)0x0) {
      param_2 = puVar2;
      uVar4 = FUN_0040e4c0(uVar4);
      if (((*(byte *)((int)puVar7 + 3) & 4) == 0) && ((char *)puVar7[1] != (char *)0x0)) {
        local_14 = FUN_00408380((char *)puVar7[1]);
        local_14 = local_14 + 1;
      }
      else {
        local_14 = 0;
      }
      if (uVar3 == 0) {
        bVar1 = FUN_0040e490();
        uVar9 = CONCAT31(extraout_var,bVar1);
        puVar5 = puVar7;
        puVar11 = puVar2;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *puVar11 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar11 = puVar11 + 1;
        }
        for (uVar10 = bVar1 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined1 *)puVar11 = *(undefined1 *)puVar5;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
          puVar11 = (undefined4 *)((int)puVar11 + 1);
        }
        puVar5 = (undefined4 *)(uVar9 + (int)param_2);
        for (uVar10 = 0x30 - uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        for (uVar9 = 0x30 - uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined1 *)puVar5 = 0;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
        }
      }
      else {
        puVar5 = puVar7;
        puVar11 = puVar2;
        for (uVar9 = (uVar4 & 0xfff) >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *puVar11 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar11 = puVar11 + 1;
        }
        for (uVar9 = uVar4 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined1 *)puVar11 = *(undefined1 *)puVar5;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
          puVar11 = (undefined4 *)((int)puVar11 + 1);
        }
      }
      *(ushort *)((int)puVar2 + 2) =
           (ushort)uVar4 & 0x3000 | *(ushort *)((int)puVar2 + 2) & 0x8fff | local_c;
      if (local_14 != 0) {
        puVar5 = (undefined4 *)((uVar4 & 0xfff) + (int)param_2);
        puVar2[1] = puVar5;
        puVar11 = (undefined4 *)puVar7[1];
        for (uVar4 = local_14 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar5 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar5 = puVar5 + 1;
        }
        for (local_14 = local_14 & 3; local_14 != 0; local_14 = local_14 - 1) {
          *(undefined1 *)puVar5 = *(undefined1 *)puVar11;
          puVar11 = (undefined4 *)((int)puVar11 + 1);
          puVar5 = (undefined4 *)((int)puVar5 + 1);
        }
      }
      if (((*(ushort *)((int)puVar2 + 2) | *(ushort *)((int)puVar7 + 2)) & 0x2000) == 0) {
        if ((*(ushort *)((int)puVar7 + 2) & 0x800) == 0) {
          piVar6 = FUN_00415950(param_1,(int *)puVar7[4],uVar3);
          puVar2[4] = piVar6;
        }
        else {
          puVar5 = FUN_0041a470(param_1,(undefined4 *)puVar7[4],uVar3);
          puVar2[4] = puVar5;
        }
      }
      if ((*(byte *)((int)puVar2 + 3) & 0x30) == 0) {
        *(undefined1 *)((int)puVar2 + 0x22) = 0;
        if ((*(byte *)((int)puVar7 + 3) & 0x20) == 0) {
          uVar8 = FUN_00420310(param_1,(undefined4 *)puVar7[2],0);
          puVar2[2] = uVar8;
          uVar8 = FUN_00420310(param_1,(undefined4 *)puVar7[3],0);
          puVar2[3] = uVar8;
        }
      }
      else {
        uVar4 = FUN_0040e500(param_3);
        param_2 = (undefined4 *)((int)param_2 + uVar4);
        if ((*(byte *)((int)puVar2 + 3) & 0x10) != 0) {
          puVar5 = FUN_004200f0(param_1,(undefined4 *)puVar7[2],1,(int *)&param_2);
          puVar2[2] = puVar5;
          puVar7 = FUN_004200f0(param_1,(undefined4 *)puVar7[3],1,(int *)&param_2);
          puVar2[3] = puVar7;
        }
        if (param_4 != (int *)0x0) {
          *param_4 = (int)param_2;
          return puVar2;
        }
      }
    }
  }
  return puVar2;
}


/* END FUNCTION 0x004200f0 */
