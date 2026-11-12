/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10026a80
 * Name: FUN_10026a80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10026a80(int *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  byte bVar3;
  undefined1 *puVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  uint uVar8;
  ushort uVar9;
  int iVar10;
  ushort *puVar11;
  int local_630;
  int local_62c;
  int local_628;
  int *local_624;
  undefined1 auStack_50c [256];
  int local_40c [256];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10114426;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_624 = param_1;
  FUN_100264c0();
  local_4 = 0;
  FUN_10026780();
  iVar10 = 0;
  do {
    puVar4 = operator_new(0x11);
    *(undefined4 *)(puVar4 + 5) = 0;
    *(undefined4 *)(puVar4 + 9) = 0;
    *puVar4 = (char)iVar10;
    iVar5 = *(int *)(param_2 + iVar10 * 4);
    *(int *)(puVar4 + 1) = iVar5;
    if (iVar5 == 0) {
      *(undefined4 *)(puVar4 + 1) = 1;
    }
    local_40c[iVar10] = (int)puVar4;
    FUN_10026960(puVar4,&local_630);
    iVar10 = iVar10 + 1;
  } while (iVar10 < 0x100);
  while( true ) {
    if (local_62c != 0) {
      local_628 = local_62c;
    }
    iVar10 = FUN_10026a00();
    iVar5 = FUN_10026a00();
    pvVar6 = operator_new(0x11);
    *(int *)((int)pvVar6 + 5) = iVar10;
    *(int *)((int)pvVar6 + 9) = iVar5;
    *(int *)((int)pvVar6 + 1) = *(int *)(iVar5 + 1) + *(int *)(iVar10 + 1);
    *(void **)(iVar10 + 0xd) = pvVar6;
    *(void **)(iVar5 + 0xd) = pvVar6;
    if (local_630 == 0) break;
    FUN_10026960(pvVar6,&local_630);
  }
  *param_1 = (int)pvVar6;
  *(undefined4 *)((int)pvVar6 + 0xd) = 0;
  FUN_1001f1f0();
  iVar10 = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  puVar11 = (ushort *)(param_1 + 2);
  do {
    iVar5 = *local_624;
    uVar9 = 0;
    iVar7 = local_40c[iVar10];
    do {
      iVar2 = *(int *)(iVar7 + 0xd);
      if (*(int *)(iVar2 + 5) == iVar7) {
        auStack_50c[uVar9] = 0;
      }
      else {
        auStack_50c[uVar9] = 1;
      }
      uVar9 = uVar9 + 1;
      iVar7 = iVar2;
    } while (iVar2 != iVar5);
    if (uVar9 != 0) {
      uVar8 = (uint)uVar9;
      puVar4 = auStack_50c + uVar8;
      do {
        pcVar1 = puVar4 + -1;
        puVar4 = puVar4 + -1;
        if (*pcVar1 == '\0') {
          FUN_1001f9d0();
        }
        else {
          FUN_1001f9f0();
        }
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    bVar3 = FUN_1001f770(puVar11 + -2);
    *puVar11 = (ushort)bVar3;
    FUN_1001f3b0();
    iVar10 = iVar10 + 1;
    puVar11 = puVar11 + 3;
  } while (iVar10 < 0x100);
  local_4 = local_4 & 0xffffff00;
  FUN_1001f390();
  local_4 = 0xffffffff;
  FUN_10026a10();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10026a80 */
