/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10047b30
 * Name: FUN_10047b30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall
FUN_10047b30(int param_1,int *param_2,int param_3,undefined1 *param_4,uint param_5,int param_6,
            undefined4 param_7,undefined2 param_8,int *param_9)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  undefined2 *puVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined2 *local_28;
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
  iVar9 = param_3 + -0x1c;
  cVar4 = FUN_10056450();
  if (cVar4 != '\0') {
    iVar9 = param_3 + -0x24;
  }
  *param_4 = 0;
  local_18 = iVar9 << 3;
  if ((*(int *)(param_1 + 0x2c) <= param_6) &&
     ((*(int *)(param_1 + 0x2c) < param_6 || (*(uint *)(param_1 + 0x28) < param_5)))) {
    iVar9 = thunk_FUN_10045850();
    if (iVar9 != 0) {
      FUN_1001f9f0();
      local_24 = 1;
      uVar5 = FUN_10046a00(param_2,param_3 * 8 + -0xe1,1);
      uVar10 = *(uint *)(param_1 + 0x357);
      *(uint *)(param_1 + 0x357) = uVar10 + uVar5;
      *(uint *)(param_1 + 0x35b) = *(int *)(param_1 + 0x35b) + (uint)CARRY4(uVar10,uVar5);
      iVar9 = thunk_FUN_10045850();
      if (iVar9 == 0) {
        *(uint *)(param_1 + 0x28) = param_5;
        *(int *)(param_1 + 0x2c) = param_6;
      }
      bVar3 = false;
      goto LAB_10047c07;
    }
    *(uint *)(param_1 + 0x28) = param_5;
    *(int *)(param_1 + 0x2c) = param_6;
  }
  bVar3 = true;
LAB_10047c07:
  do {
    uVar10 = *(uint *)(param_1 + 0x58);
    piVar1 = (int *)(param_1 + 0x54);
    if (*(uint *)(param_1 + 0x5c) < uVar10) {
      iVar9 = *(int *)(param_1 + 0x60) - uVar10;
    }
    else {
      iVar9 = -uVar10;
    }
    if (*(uint *)(param_1 + 0x5c) + iVar9 == 0) {
LAB_10047e6a:
      local_1c = (int *)(param_1 + 0x2fb);
      local_10 = 0;
      puVar7 = (uint *)(param_1 + 0x32b);
      local_20 = (uint *)(param_1 + 0x68);
      local_c = puVar7;
      goto LAB_10047e90;
    }
    local_28 = *(undefined2 **)(*piVar1 + *(int *)(param_1 + 0x58) * 4);
    if (*(int *)((int)local_28 + 0x23) == 0 && *(int *)((int)local_28 + 0x27) == 0) {
      iVar9 = *(int *)(param_1 + 0x58) + 1;
      *(int *)(param_1 + 0x58) = iVar9;
      if (iVar9 == *(int *)(param_1 + 0x60)) {
        *(undefined4 *)(param_1 + 0x58) = 0;
      }
      if (*(void **)((int)local_28 + 0x2f) != (void *)0x0) {
        _free(*(void **)((int)local_28 + 0x2f));
      }
      FUN_1002e630(local_28);
      goto LAB_10047c07;
    }
    iVar9 = *(int *)(*piVar1 + *(int *)(param_1 + 0x58) * 4);
    iVar6 = *(int *)(iVar9 + 0x27);
    if ((param_6 < iVar6) || ((param_6 <= iVar6 && (param_5 <= *(uint *)(iVar9 + 0x23)))))
    goto LAB_10047e6a;
    iVar9 = *(int *)(param_1 + 0x58) + 1;
    *(int *)(param_1 + 0x58) = iVar9;
    if (iVar9 == *(int *)(param_1 + 0x60)) {
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    if (*(int *)(param_1 + 0x58) == 0) {
      puVar8 = *(undefined2 **)(*piVar1 + -4 + *(int *)(param_1 + 0x60) * 4);
    }
    else {
      puVar8 = *(undefined2 **)(*piVar1 + -4 + *(int *)(param_1 + 0x58) * 4);
    }
    local_28 = puVar8;
    iVar9 = FUN_10043980(puVar8);
    if (local_18 < iVar9 + *(int *)((int)puVar8 + 0x2b) + *param_2) break;
    uVar10 = 0;
    if (param_9[1] != 0) {
      uVar11 = __alldiv(param_5,param_6,1000,0);
      local_4 = (undefined4)((ulonglong)uVar11 >> 0x20);
      do {
        (**(code **)(**(int **)(*param_9 + uVar10 * 4) + 0x24))
                  (local_28,*(undefined4 *)(param_1 + 0x6c5),param_7,param_8,(int)uVar11,1);
        uVar10 = uVar10 + 1;
      } while (uVar10 < (uint)param_9[1]);
    }
    uVar10 = *(uint *)(param_1 + 0x367);
    *(int *)(param_1 + 0x363) = *(int *)(param_1 + 0x363) + 1;
    uVar5 = *(uint *)((int)local_28 + 0x2b);
    *(uint *)(param_1 + 0x367) = uVar10 + uVar5;
    *(uint *)(param_1 + 0x36b) = *(int *)(param_1 + 0x36b) + (uint)CARRY4(uVar10,uVar5);
    if (bVar3) {
      FUN_1001f9d0();
      bVar3 = false;
    }
    uVar10 = FUN_10044ff0(param_2,local_28);
    *(uint *)(param_1 + 0x373) =
         *(int *)(param_1 + 0x373) + ((int)uVar10 >> 0x1f) +
         (uint)CARRY4(*(uint *)(param_1 + 0x36f),uVar10);
    *(uint *)(param_1 + 0x36f) = *(uint *)(param_1 + 0x36f) + uVar10;
    *(undefined4 *)(local_28 + 1) = *(undefined4 *)(param_1 + 0x6c5);
    *param_4 = 1;
    uVar10 = *(uint *)(param_1 + 0x6cd);
    iVar9 = *(int *)(param_1 + 0x6d1);
    local_24 = local_24 + 1;
    *(int *)(param_1 + 0x35f) = *(int *)(param_1 + 0x35f) + 1;
    *(uint *)((int)local_28 + 0x23) = uVar10 + param_5;
    *(uint *)((int)local_28 + 0x27) = iVar9 + param_6 + (uint)CARRY4(uVar10,param_5);
    if (((*(int *)(param_1 + 0x42e) <= param_6) &&
        ((*(int *)(param_1 + 0x42e) < param_6 || (*(uint *)(param_1 + 0x42a) <= param_5)))) &&
       (*(int *)((int)local_28 + 0x33) == *(int *)(param_1 + 0x432))) {
      *(int *)(param_1 + 0x43a) = *(int *)(param_1 + 0x43a) + 1;
    }
    *(undefined4 *)((int)local_28 + 0x33) = *(undefined4 *)(param_1 + 0x432);
    FUN_10045630(local_28,param_5,param_6,0,0);
  } while( true );
  FUN_10043b90(&local_28,0);
  goto LAB_1004814d;
LAB_10047e90:
  do {
    uVar10 = *local_20;
    uVar5 = local_20[1];
    if (uVar5 < uVar10) {
      iVar9 = (uVar5 - uVar10) + local_20[2];
    }
    else {
      iVar9 = uVar5 - uVar10;
    }
    if (iVar9 != 0) {
      uVar10 = local_20[2];
      uVar5 = *local_20 + 1;
      *local_20 = uVar5;
      if (uVar5 == uVar10) {
        *local_20 = 0;
        puVar8 = *(undefined2 **)((local_20[-1] - 4) + uVar10 * 4);
      }
      else if (uVar5 == 0) {
        puVar8 = *(undefined2 **)((local_20[-1] - 4) + uVar10 * 4);
      }
      else {
        puVar8 = *(undefined2 **)((local_20[-1] - 4) + uVar5 * 4);
      }
      local_28 = puVar8;
      iVar9 = FUN_10043980(puVar8);
      uVar10 = *(uint *)(param_1 + 0x34);
      if ((uVar10 != 0 || *(int *)(param_1 + 0x38) != 0) &&
         ((*(int *)(puVar8 + 5) == 6 || (*(int *)(puVar8 + 5) == 7)))) {
        iVar6 = *(int *)((int)puVar8 + 0x1f) + *(int *)(param_1 + 0x38) +
                (uint)CARRY4(*(uint *)((int)puVar8 + 0x1b),uVar10);
        if ((iVar6 <= param_6) &&
           ((iVar6 < param_6 || (*(uint *)((int)puVar8 + 0x1b) + uVar10 < param_5)))) {
          if (*(void **)((int)puVar8 + 0x2f) != (void *)0x0) {
            _free(*(void **)((int)puVar8 + 0x2f));
          }
          FUN_1002e630(local_28);
          goto LAB_10047e90;
        }
      }
      if (*param_2 + iVar9 + *(int *)((int)puVar8 + 0x2b) <= local_18) {
        iVar9 = *(int *)(puVar8 + 5);
        if (((iVar9 == 8) || (iVar9 == 10)) || (bVar2 = false, iVar9 == 9)) {
          bVar2 = true;
        }
        local_1c[-4] = local_1c[-4] + 1;
        if (bVar2) {
          *local_1c = *local_1c + 1;
        }
        uVar10 = *(uint *)((int)puVar8 + 0x2b);
        uVar5 = 0;
        puVar7[-7] = puVar7[-7] + (uint)CARRY4(puVar7[-8],uVar10);
        puVar7[-8] = puVar7[-8] + uVar10;
        if (param_9[1] != 0) {
          uVar11 = __alldiv(param_5,param_6,1000,0);
          local_4 = (undefined4)((ulonglong)uVar11 >> 0x20);
          do {
            (**(code **)(**(int **)(*param_9 + uVar5 * 4) + 0x24))
                      (local_28,*(undefined4 *)(param_1 + 0x6c5),param_7,param_8,(int)uVar11,1);
            uVar5 = uVar5 + 1;
            puVar7 = local_c;
          } while (uVar5 < (uint)param_9[1]);
        }
        if (bVar3) {
          FUN_1001f9d0();
          bVar3 = false;
        }
        uVar5 = FUN_10044ff0(param_2,local_28);
        uVar10 = *puVar7;
        *puVar7 = uVar10 + uVar5;
        puVar7[1] = puVar7[1] + ((int)uVar5 >> 0x1f) + (uint)CARRY4(uVar10,uVar5);
        *(undefined4 *)(local_28 + 1) = *(undefined4 *)(param_1 + 0x6c5);
        local_24 = local_24 + 1;
        if (bVar2) {
          local_14 = local_14 + *(int *)((int)local_28 + 0x2b);
          iVar9 = *(int *)(param_1 + 0x6d1);
          uVar10 = *(uint *)(param_1 + 0x6cd);
          *(uint *)((int)local_28 + 0x23) = uVar10 + param_5;
          *(uint *)((int)local_28 + 0x27) = iVar9 + param_6 + (uint)CARRY4(uVar10,param_5);
          *(undefined4 *)((int)local_28 + 0x33) = *(undefined4 *)(param_1 + 0x432);
          FUN_100479b0(*local_28,&local_28);
          FUN_10045630(local_28,param_5,param_6,0,1);
          *param_4 = 1;
        }
        else {
          if (*(void **)((int)local_28 + 0x2f) != (void *)0x0) {
            _free(*(void **)((int)local_28 + 0x2f));
          }
          FUN_1002e630(local_28);
        }
        goto LAB_10047e90;
      }
      FUN_10043b90(&local_28,0);
    }
    local_10 = local_10 + 1;
    local_1c = local_1c + 1;
    puVar7 = puVar7 + 2;
    local_20 = local_20 + 4;
    local_c = puVar7;
  } while (local_10 < 4);
LAB_1004814d:
  if (0 < *param_2) {
    *(int *)(param_1 + 0x6c5) = *(int *)(param_1 + 0x6c5) + 1;
  }
  return local_24;
}


/* END FUNCTION 0x10047b30 */
