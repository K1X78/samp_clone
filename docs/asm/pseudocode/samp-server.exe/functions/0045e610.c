/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045e610
 * Name: FUN_0045e610
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall
FUN_0045e610(void *this,uint *param_1,int param_2,undefined1 *param_3,uint param_4,uint param_5,
            undefined4 param_6,undefined2 param_7,int *param_8)

{
  void *this_00;
  int *this_01;
  bool bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  ushort *puVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  ushort *local_28;
  int local_24;
  uint *local_20;
  int *local_1c;
  int local_18;
  int local_14;
  uint local_10;
  uint *local_c;
  undefined4 local_4;
  
  local_14 = 0;
  local_24 = 0;
  iVar8 = param_2 + -0x1c;
  cVar3 = FUN_00463810((int)this + 0x484);
  if (cVar3 != '\0') {
    iVar8 = param_2 + -0x24;
  }
  *param_3 = 0;
  local_18 = iVar8 << 3;
  if ((*(int *)((int)this + 0x2c) <= (int)param_5) &&
     ((*(int *)((int)this + 0x2c) < (int)param_5 || (*(uint *)((int)this + 0x28) < param_4)))) {
    this_00 = (void *)((int)this + 0x1c);
    iVar8 = thunk_FUN_0045b300((int)this_00);
    if (iVar8 != 0) {
      FUN_0044de90(param_1);
      local_24 = 1;
      uVar4 = FUN_0045d560(this_00,(int *)param_1,param_2 * 8 + -0xe1,'\x01');
      uVar9 = *(uint *)((int)this + 0x368);
      *(uint *)((int)this + 0x368) = uVar9 + uVar4;
      *(uint *)((int)this + 0x36c) = *(int *)((int)this + 0x36c) + (uint)CARRY4(uVar9,uVar4);
      iVar8 = thunk_FUN_0045b300((int)this_00);
      if (iVar8 == 0) {
        *(uint *)((int)this + 0x28) = param_4;
        *(uint *)((int)this + 0x2c) = param_5;
      }
      bVar2 = false;
      goto LAB_0045e6e7;
    }
    *(uint *)((int)this + 0x28) = param_4;
    *(uint *)((int)this + 0x2c) = param_5;
  }
  bVar2 = true;
LAB_0045e6e7:
  do {
    uVar9 = *(uint *)((int)this + 0x5c);
    this_01 = (int *)((int)this + 0x58);
    if (*(uint *)((int)this + 0x60) < uVar9) {
      iVar8 = *(int *)((int)this + 100) - uVar9;
    }
    else {
      iVar8 = -uVar9;
    }
    if (*(uint *)((int)this + 0x60) + iVar8 == 0) {
LAB_0045e94a:
      local_10 = 0;
      puVar6 = (uint *)((int)this + 0x338);
      local_1c = (int *)((int)this + 0x308);
      local_20 = (uint *)((int)this + 0x6c);
      local_c = puVar6;
      goto LAB_0045e970;
    }
    local_28 = *(ushort **)(*this_01 + *(int *)((int)this + 0x5c) * 4);
    if (*(int *)(local_28 + 0x14) == 0 && *(int *)(local_28 + 0x16) == 0) {
      iVar8 = *(int *)((int)this + 0x5c) + 1;
      *(int *)((int)this + 0x5c) = iVar8;
      if (iVar8 == *(int *)((int)this + 100)) {
        *(undefined4 *)((int)this + 0x5c) = 0;
      }
      if (*(void **)(local_28 + 0x1a) != (void *)0x0) {
        _free(*(void **)(local_28 + 0x1a));
      }
      FUN_0044eb60((void *)((int)this + 0x728),(int)local_28);
      goto LAB_0045e6e7;
    }
    iVar8 = *(int *)(*this_01 + *(int *)((int)this + 0x5c) * 4);
    iVar5 = *(int *)(iVar8 + 0x2c);
    if (((int)param_5 < iVar5) || (((int)param_5 <= iVar5 && (param_4 <= *(uint *)(iVar8 + 0x28)))))
    goto LAB_0045e94a;
    iVar8 = *(int *)((int)this + 0x5c) + 1;
    *(int *)((int)this + 0x5c) = iVar8;
    if (iVar8 == *(int *)((int)this + 100)) {
      *(undefined4 *)((int)this + 0x5c) = 0;
    }
    if (*(int *)((int)this + 0x5c) == 0) {
      puVar7 = *(ushort **)(*this_01 + -4 + *(int *)((int)this + 100) * 4);
    }
    else {
      puVar7 = *(ushort **)(*this_01 + -4 + *(int *)((int)this + 0x5c) * 4);
    }
    local_28 = puVar7;
    iVar8 = FUN_0045b1f0(this,(int)puVar7);
    if (local_18 < (int)(iVar8 + *(int *)(puVar7 + 0x18) + *param_1)) break;
    uVar9 = 0;
    if (param_8[1] != 0) {
      uVar10 = __alldiv(param_4,param_5,1000,0);
      local_4 = (undefined4)((ulonglong)uVar10 >> 0x20);
      do {
        (**(code **)(**(int **)(*param_8 + uVar9 * 4) + 0x24))
                  (local_28,*(undefined4 *)((int)this + 0x6f8),param_6,param_7,(int)uVar10,1);
        uVar9 = uVar9 + 1;
      } while (uVar9 < (uint)param_8[1]);
    }
    uVar9 = *(uint *)((int)this + 0x378);
    *(int *)((int)this + 0x374) = *(int *)((int)this + 0x374) + 1;
    uVar4 = *(uint *)(local_28 + 0x18);
    *(uint *)((int)this + 0x378) = uVar9 + uVar4;
    *(uint *)((int)this + 0x37c) = *(int *)((int)this + 0x37c) + (uint)CARRY4(uVar9,uVar4);
    if (bVar2) {
      FUN_0044de70(param_1);
      bVar2 = false;
    }
    uVar9 = FUN_0045be90(this,param_1,local_28);
    *(uint *)((int)this + 900) =
         *(int *)((int)this + 900) + ((int)uVar9 >> 0x1f) +
         (uint)CARRY4(*(uint *)((int)this + 0x380),uVar9);
    *(uint *)((int)this + 0x380) = *(uint *)((int)this + 0x380) + uVar9;
    *(undefined4 *)(local_28 + 2) = *(undefined4 *)((int)this + 0x6f8);
    *param_3 = 1;
    uVar9 = *(uint *)((int)this + 0x700);
    iVar8 = *(int *)((int)this + 0x704);
    local_24 = local_24 + 1;
    *(int *)((int)this + 0x370) = *(int *)((int)this + 0x370) + 1;
    *(uint *)(local_28 + 0x14) = uVar9 + param_4;
    *(uint *)(local_28 + 0x16) = iVar8 + param_5 + (uint)CARRY4(uVar9,param_4);
    if (((*(int *)((int)this + 0x44c) <= (int)param_5) &&
        ((*(int *)((int)this + 0x44c) < (int)param_5 || (*(uint *)((int)this + 0x448) <= param_4))))
       && (*(int *)(local_28 + 0x1c) == *(int *)((int)this + 0x450))) {
      *(int *)((int)this + 0x458) = *(int *)((int)this + 0x458) + 1;
    }
    *(undefined4 *)(local_28 + 0x1c) = *(undefined4 *)((int)this + 0x450);
    FUN_0045c490(this,(undefined4 *)local_28,param_4,param_5,'\0',(undefined4 *)0x0);
  } while( true );
  FUN_00450f10(this_01,&local_28,0);
  goto LAB_0045ec2e;
LAB_0045e970:
  do {
    uVar9 = *local_20;
    if (local_20[1] < uVar9) {
      iVar8 = local_20[2] - uVar9;
    }
    else {
      iVar8 = -uVar9;
    }
    if (local_20[1] + iVar8 != 0) {
      uVar9 = local_20[2];
      uVar4 = *local_20 + 1;
      *local_20 = uVar4;
      if (uVar4 == uVar9) {
        *local_20 = 0;
        puVar7 = *(ushort **)((local_20[-1] - 4) + uVar9 * 4);
      }
      else if (uVar4 == 0) {
        puVar7 = *(ushort **)((local_20[-1] - 4) + uVar9 * 4);
      }
      else {
        puVar7 = *(ushort **)((local_20[-1] - 4) + uVar4 * 4);
      }
      local_28 = puVar7;
      iVar8 = FUN_0045b1f0(this,(int)puVar7);
      uVar9 = *(uint *)((int)this + 0x38);
      if ((uVar9 != 0 || *(int *)((int)this + 0x3c) != 0) &&
         ((*(int *)(puVar7 + 6) == 6 || (*(int *)(puVar7 + 6) == 7)))) {
        iVar5 = *(int *)(puVar7 + 0x12) + *(int *)((int)this + 0x3c) +
                (uint)CARRY4(*(uint *)(puVar7 + 0x10),uVar9);
        if ((iVar5 <= (int)param_5) &&
           ((iVar5 < (int)param_5 || (*(uint *)(puVar7 + 0x10) + uVar9 < param_4)))) {
          if (*(void **)(puVar7 + 0x1a) != (void *)0x0) {
            _free(*(void **)(puVar7 + 0x1a));
          }
          FUN_0044eb60((void *)((int)this + 0x728),(int)local_28);
          goto LAB_0045e970;
        }
      }
      if ((int)(*param_1 + iVar8 + *(int *)(puVar7 + 0x18)) <= local_18) {
        iVar8 = *(int *)(puVar7 + 6);
        if (((iVar8 == 8) || (iVar8 == 10)) || (bVar1 = false, iVar8 == 9)) {
          bVar1 = true;
        }
        local_1c[-4] = local_1c[-4] + 1;
        if (bVar1) {
          *local_1c = *local_1c + 1;
        }
        uVar9 = *(uint *)(puVar7 + 0x18);
        uVar4 = 0;
        puVar6[-7] = puVar6[-7] + (uint)CARRY4(puVar6[-8],uVar9);
        puVar6[-8] = puVar6[-8] + uVar9;
        if (param_8[1] != 0) {
          uVar10 = __alldiv(param_4,param_5,1000,0);
          local_4 = (undefined4)((ulonglong)uVar10 >> 0x20);
          do {
            (**(code **)(**(int **)(*param_8 + uVar4 * 4) + 0x24))
                      (local_28,*(undefined4 *)((int)this + 0x6f8),param_6,param_7,(int)uVar10,1);
            uVar4 = uVar4 + 1;
            puVar6 = local_c;
          } while (uVar4 < (uint)param_8[1]);
        }
        if (bVar2) {
          FUN_0044de70(param_1);
          bVar2 = false;
        }
        uVar4 = FUN_0045be90(this,param_1,local_28);
        uVar9 = *puVar6;
        *puVar6 = uVar9 + uVar4;
        puVar6[1] = puVar6[1] + ((int)uVar4 >> 0x1f) + (uint)CARRY4(uVar9,uVar4);
        *(undefined4 *)(local_28 + 2) = *(undefined4 *)((int)this + 0x6f8);
        local_24 = local_24 + 1;
        if (bVar1) {
          local_14 = local_14 + *(int *)(local_28 + 0x18);
          iVar8 = *(int *)((int)this + 0x704);
          uVar9 = *(uint *)((int)this + 0x700);
          *(uint *)(local_28 + 0x14) = uVar9 + param_4;
          *(uint *)(local_28 + 0x16) = iVar8 + param_5 + (uint)CARRY4(uVar9,param_4);
          *(undefined4 *)(local_28 + 0x1c) = *(undefined4 *)((int)this + 0x450);
          FUN_0045e4b0((void *)((int)this + 0x40),(uint)*local_28,&local_28);
          FUN_0045c490(this,(undefined4 *)local_28,param_4,param_5,'\0',(undefined4 *)0x1);
          *param_3 = 1;
        }
        else {
          if (*(void **)(local_28 + 0x1a) != (void *)0x0) {
            _free(*(void **)(local_28 + 0x1a));
          }
          FUN_0044eb60((void *)((int)this + 0x728),(int)local_28);
        }
        goto LAB_0045e970;
      }
      FUN_00450f10(local_20 + -1,&local_28,0);
    }
    local_10 = local_10 + 1;
    local_1c = local_1c + 1;
    puVar6 = puVar6 + 2;
    local_20 = local_20 + 4;
    local_c = puVar6;
  } while (local_10 < 4);
LAB_0045ec2e:
  if (0 < (int)*param_1) {
    *(int *)((int)this + 0x6f8) = *(int *)((int)this + 0x6f8) + 1;
  }
  return local_24;
}


/* END FUNCTION 0x0045e610 */
