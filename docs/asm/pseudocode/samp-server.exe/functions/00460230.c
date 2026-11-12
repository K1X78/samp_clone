/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00460230
 * Name: FUN_00460230
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Removing unreachable block (ram,0x0046030a) */

void __thiscall
FUN_00460230(void *this,SOCKET param_1,undefined4 param_2,u_short param_3,int param_4,uint param_5,
            uint param_6,int *param_7)

{
  int *this_00;
  char cVar1;
  byte *pbVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined1 local_15;
  undefined4 *local_14;
  undefined8 local_10;
  
  iVar8 = *(int *)((int)this + 0x43c);
  uVar9 = *(uint *)((int)this + 0x438);
  if (((int)param_6 <= iVar8) && (((int)param_6 < iVar8 || (param_5 <= uVar9)))) {
    *(uint *)((int)this + 0x438) = param_5;
    *(uint *)((int)this + 0x43c) = param_6;
    return;
  }
  local_10 = (double)CONCAT44((param_6 - iVar8) - (uint)(param_5 < uVar9),param_5 - uVar9);
  dVar3 = (double)(longlong)local_10 * 1e-06 * *(double *)((int)this + 0x470) +
          *(double *)((int)this + 0x478);
  *(double *)((int)this + 0x478) = dVar3;
  if (*(double *)((int)this + 0x470) < dVar3) {
    *(undefined8 *)((int)this + 0x478) = *(undefined8 *)((int)this + 0x470);
  }
  *(uint *)((int)this + 0x438) = param_5;
  *(uint *)((int)this + 0x43c) = param_6;
  FUN_0045b2d0((int)this);
  bVar6 = FUN_0045b3b0((int)this + 0x40);
  if (!bVar6) {
    iVar8 = *(int *)((int)this + 0xbc);
    uVar9 = *(uint *)((int)this + 0xb8);
    if ((iVar8 <= (int)param_6) &&
       ((((iVar8 < (int)param_6 || (uVar9 < param_5)) && (uVar9 != 0 || iVar8 != 0)) &&
        ((longlong)((ulonglong)*(uint *)((int)this + 0x2e0) * 1000) <
         CONCAT44((param_6 - iVar8) - (uint)(param_5 < uVar9),param_5 - uVar9))))) {
      *(undefined1 *)((int)this + 0x2d4) = 1;
      return;
    }
  }
  local_14 = (undefined4 *)(param_4 * 8 + 0xe0);
  local_10 = (double)(int)local_14;
  if (*(double *)((int)this + 0x470) < local_10) {
    local_10 = *(double *)((int)this + 0x470);
  }
  if (local_10 < *(double *)((int)this + 0x478)) {
    do {
      puVar12 = (uint *)((int)this + 0xc0);
      FUN_0044d9d0(puVar12);
      FUN_0045e610(this,puVar12,param_4,&local_15,param_5,param_6,param_2,param_3,param_7);
      if ((int)*puVar12 < 1) break;
      if ((*(int *)((int)this + 0x720) == 0) && (*(int *)((int)this + 0x724) == 0)) {
        FUN_0045b070(this,param_1,param_2,param_3,(int *)puVar12);
      }
      else {
        puVar7 = operator_new(0x5e0);
        uVar10 = (int)(*puVar12 + 7) >> 3;
        puVar13 = *(undefined4 **)((int)this + 0xcc);
        puVar14 = puVar7;
        for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *puVar14 = *puVar13;
          puVar13 = puVar13 + 1;
          puVar14 = puVar14 + 1;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined1 *)puVar14 = *(undefined1 *)puVar13;
          puVar13 = (undefined4 *)((int)puVar13 + 1);
          puVar14 = (undefined4 *)((int)puVar14 + 1);
        }
        puVar7[0x175] = *(int *)((int)this + 0xc0) + 7 >> 3;
        *(ulonglong *)(puVar7 + 0x176) =
             (ulonglong)*(uint *)((int)this + 0x720) * 1000 + CONCAT44(param_6,param_5);
        local_14 = puVar7;
        if (*(int *)((int)this + 0x724) != 0) {
          uVar10 = FUN_0045af90();
          uVar10 = uVar10 % *(uint *)((int)this + 0x724);
          uVar9 = puVar7[0x176];
          puVar7[0x176] = uVar9 + uVar10;
          puVar7[0x177] = puVar7[0x177] + (uint)CARRY4(uVar9,uVar10);
        }
        FUN_0045b5f0((void *)((int)this + 0x70c),puVar7);
      }
      local_14 = (undefined4 *)(*(int *)((int)this + 0xc0) + 0xe0);
      *(double *)((int)this + 0x478) = *(double *)((int)this + 0x478) - (double)(int)local_14;
    } while (local_10 < *(double *)((int)this + 0x478));
  }
  cVar1 = *(char *)((int)this + 0x480);
  bVar6 = *(double *)((int)this + 0x478) < local_10;
  *(bool *)((int)this + 0x480) = bVar6;
  if ((bVar6) && (cVar1 == '\0')) {
    uVar9 = *(int *)((int)this + 0x2d8) * 2000;
    uVar10 = uVar9 + param_5;
    *(undefined4 *)((int)this + 0x45c) = 0;
    *(undefined4 *)((int)this + 0x458) = 0;
    iVar8 = param_6 + CARRY4(uVar9,param_5);
    *(uint *)((int)this + 0x448) = uVar10;
    *(uint *)((int)this + 0x440) = uVar10 + 250000;
    *(int *)((int)this + 0x44c) = iVar8;
    iVar11 = *(int *)((int)this + 0x450) + 1;
    *(uint *)((int)this + 0x444) = iVar8 + (uint)(0xfffc2f6f < uVar10);
    *(int *)((int)this + 0x450) = iVar11;
    if (iVar11 == -1) {
      *(undefined4 *)((int)this + 0x450) = 0;
    }
  }
  if (((int)param_6 < *(int *)((int)this + 0x444)) ||
     (((int)param_6 <= *(int *)((int)this + 0x444) && (param_5 < *(uint *)((int)this + 0x440)))))
  goto LAB_00460832;
  iVar8 = *(int *)((int)this + 0x45c);
  iVar11 = *(int *)((int)this + 0x458);
  if (iVar11 + iVar8 == 0) {
    local_14 = (undefined4 *)0x0;
  }
  else {
    fVar4 = (float)iVar11;
    if (iVar11 < 0) {
      fVar4 = fVar4 + 4.2949673e+09;
    }
    fVar5 = (float)iVar8;
    if (iVar8 < 0) {
      fVar5 = fVar5 + 4.2949673e+09;
    }
    local_14 = (undefined4 *)(fVar4 / (fVar5 + fVar4));
  }
  if (bVar6) {
    if ((float)local_14 < 0.02 == ((float)local_14 == 0.02)) {
      *(undefined8 *)((int)this + 0x468) = *(undefined8 *)((int)this + 0x470);
    }
    else {
      *(undefined8 *)((int)this + 0x460) = *(undefined8 *)((int)this + 0x470);
    }
    if ((float)local_14 == 0.0) {
      iVar8 = *(int *)((int)this + 0x454) + 1;
      *(int *)((int)this + 0x454) = iVar8;
      if (iVar8 == 10) {
        *(undefined8 *)((int)this + 0x468) = 0;
        goto LAB_00460699;
      }
    }
    else {
LAB_00460699:
      *(undefined4 *)((int)this + 0x454) = 0;
    }
    if (*(double *)((int)this + 0x468) == 0.0) {
      dVar3 = *(double *)((int)this + 0x470) + *(double *)((int)this + 0x470);
    }
    else {
      if ((0.2 < (float)local_14) &&
         (dVar3 = *(double *)((int)this + 0x460) * 0.5, *(double *)((int)this + 0x460) = dVar3,
         dVar3 < 144400.0)) {
        *(undefined8 *)((int)this + 0x460) = 0x4101a08000000000;
      }
      dVar3 = (*(double *)((int)this + 0x468) - *(double *)((int)this + 0x460)) * 0.5;
      if (dVar3 < 36100.0) {
        if ((float)local_14 == 0.0) {
          *(double *)((int)this + 0x468) = *(double *)((int)this + 0x468) * 1.5;
        }
        else if (0.02 <= (float)local_14) {
          if (((float)local_14 < 0.04) &&
             (dVar3 = *(double *)((int)this + 0x460) * 0.9, *(double *)((int)this + 0x460) = dVar3,
             dVar3 < 144400.0)) {
            *(undefined8 *)((int)this + 0x460) = 0x4101a08000000000;
          }
        }
        else {
          *(double *)((int)this + 0x468) = *(double *)((int)this + 0x468) * 1.05;
        }
        dVar3 = (*(double *)((int)this + 0x468) - *(double *)((int)this + 0x460)) * 0.5;
      }
      dVar3 = dVar3 + *(double *)((int)this + 0x460);
    }
LAB_004607c5:
    *(double *)((int)this + 0x470) = dVar3;
  }
  else if (0.02 < (float)local_14) {
    *(double *)((int)this + 0x468) = *(double *)((int)this + 0x470);
    if ((float)local_14 <= 0.2) {
      dVar3 = 0.9;
    }
    else {
      dVar3 = 0.5;
    }
    *(double *)((int)this + 0x460) = *(double *)((int)this + 0x460) * dVar3;
    if (*(double *)((int)this + 0x460) < 144400.0) {
      *(undefined8 *)((int)this + 0x460) = 0x4101a08000000000;
    }
    *(undefined4 *)((int)this + 0x454) = 0;
    dVar3 = (*(double *)((int)this + 0x470) - *(double *)((int)this + 0x460)) * 0.5 +
            *(double *)((int)this + 0x460);
    goto LAB_004607c5;
  }
  uVar9 = *(int *)((int)this + 0x2d8) * 2000;
  uVar10 = uVar9 + param_5;
  iVar11 = param_6 + CARRY4(uVar9,param_5) + (uint)(0xfff85edf < uVar10);
  *(uint *)((int)this + 0x448) = uVar10 + 500000;
  *(uint *)((int)this + 0x440) = uVar10 + 750000;
  *(int *)((int)this + 0x44c) = iVar11;
  iVar8 = *(int *)((int)this + 0x450) + 1;
  *(undefined4 *)((int)this + 0x458) = 0;
  *(undefined4 *)((int)this + 0x45c) = 0;
  *(uint *)((int)this + 0x444) = iVar11 + (uint)(0xfffc2f6f < uVar10 + 500000);
  *(int *)((int)this + 0x450) = iVar8;
  if (iVar8 == -1) {
    *(undefined4 *)((int)this + 0x450) = 0;
  }
LAB_00460832:
  uVar9 = 0;
  if (*(int *)((int)this + 0x710) != 0) {
    do {
      iVar8 = *(int *)(*(int *)((int)this + 0x70c) + uVar9 * 4);
      iVar11 = *(int *)(iVar8 + 0x5dc);
      if (((int)param_6 < iVar11) ||
         (((int)param_6 <= iVar11 && (param_5 <= *(uint *)(iVar8 + 0x5d8))))) {
        uVar9 = uVar9 + 1;
      }
      else {
        this_00 = (int *)((int)this + 0xc0);
        FUN_0044d9d0(this_00);
        pbVar2 = *(byte **)(*(int *)((int)this + 0x70c) + uVar9 * 4);
        FUN_0044dff0(this_00,pbVar2,*(uint *)(pbVar2 + 0x5d4));
        FUN_0045b070(this,param_1,param_2,param_3,this_00);
        _free(*(void **)(*(int *)((int)this + 0x70c) + uVar9 * 4));
        if (uVar9 != *(int *)((int)this + 0x710) - 1U) {
          *(undefined4 *)(*(int *)((int)this + 0x70c) + uVar9 * 4) =
               *(undefined4 *)(*(int *)((int)this + 0x70c) + -4 + *(int *)((int)this + 0x710) * 4);
        }
        *(int *)((int)this + 0x710) = *(int *)((int)this + 0x710) + -1;
      }
    } while (uVar9 < *(uint *)((int)this + 0x710));
  }
  return;
}


/* END FUNCTION 0x00460230 */
