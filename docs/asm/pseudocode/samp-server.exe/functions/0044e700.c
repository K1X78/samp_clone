/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044e700
 * Name: FUN_0044e700
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_0044e700(void *this,int param_1)

{
  char *pcVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  uint uVar7;
  ushort uVar8;
  int iVar9;
  int local_630;
  int local_62c;
  int local_628;
  int *local_624;
  uint local_620 [69];
  undefined1 auStack_50c [256];
  int local_40c [256];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b0cf6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_624 = this;
  FUN_0045b660(&local_630);
  local_4 = 0;
  FUN_0044e430(this);
  iVar9 = 0;
  do {
    puVar3 = operator_new(0x14);
    *(undefined4 *)(puVar3 + 8) = 0;
    *(undefined4 *)(puVar3 + 0xc) = 0;
    *puVar3 = (char)iVar9;
    iVar4 = *(int *)(param_1 + iVar9 * 4);
    *(int *)(puVar3 + 4) = iVar4;
    if (iVar4 == 0) {
      *(undefined4 *)(puVar3 + 4) = 1;
    }
    local_40c[iVar9] = (int)puVar3;
    FUN_0044e610((int)puVar3,&local_630);
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0x100);
  while( true ) {
    if (local_62c != 0) {
      local_628 = local_62c;
    }
    iVar9 = FUN_0045c720(&local_630);
    iVar4 = FUN_0045c720(&local_630);
    pvVar5 = operator_new(0x14);
    *(int *)((int)pvVar5 + 8) = iVar9;
    *(int *)((int)pvVar5 + 0xc) = iVar4;
    *(int *)((int)pvVar5 + 4) = *(int *)(iVar4 + 4) + *(int *)(iVar9 + 4);
    *(void **)(iVar9 + 0x10) = pvVar5;
    *(void **)(iVar4 + 0x10) = pvVar5;
    if (local_630 == 0) break;
    FUN_0044e610((int)pvVar5,&local_630);
  }
  *(void **)this = pvVar5;
  *(undefined4 *)((int)pvVar5 + 0x10) = 0;
  FUN_0044d8a0(local_620);
  iVar9 = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  do {
    iVar4 = *local_624;
    uVar8 = 0;
    iVar6 = local_40c[iVar9];
    do {
      iVar2 = *(int *)(iVar6 + 0x10);
      if (*(int *)(iVar2 + 8) == iVar6) {
        auStack_50c[uVar8] = 0;
      }
      else {
        auStack_50c[uVar8] = 1;
      }
      uVar8 = uVar8 + 1;
      iVar6 = iVar2;
    } while (iVar2 != iVar4);
    if (uVar8 != 0) {
      uVar7 = (uint)uVar8;
      puVar3 = auStack_50c + uVar7;
      do {
        pcVar1 = puVar3 + -1;
        puVar3 = puVar3 + -1;
        if (*pcVar1 == '\0') {
          FUN_0044de70(local_620);
        }
        else {
          FUN_0044de90(local_620);
        }
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    iVar4 = FUN_0044dcc0(local_620,(undefined4 *)((int)this + 4));
    *(ushort *)((int)this + 8) = (ushort)iVar4 & 0xff;
    FUN_0044d9d0(local_620);
    iVar9 = iVar9 + 1;
    this = (ushort *)((int)this + 8);
  } while (iVar9 < 0x100);
  local_4 = local_4 & 0xffffff00;
  FUN_0044d9b0((int)local_620);
  local_4 = 0xffffffff;
  FUN_0044e6a0(&local_630);
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x0044e700 */
