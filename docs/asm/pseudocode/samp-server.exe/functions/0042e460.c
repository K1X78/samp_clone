/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042e460
 * Name: FUN_0042e460
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


byte __thiscall FUN_0042e460(void *this,void *param_1,char param_2)

{
  byte bVar1;
  char cVar2;
  code *in_EAX;
  undefined3 extraout_var;
  int iVar3;
  ushort uVar4;
  void *this_00;
  uint uVar5;
  int unaff_EBX;
  void *pvVar6;
  undefined4 *puVar7;
  bool bVar8;
  int local_4;
  
  if (this == (void *)0x0) {
    FUN_0042e3e0(unaff_EBX);
    return 0;
  }
  if (*(int *)(unaff_EBX + 0x10) == 0) {
    local_4 = 1000000000;
  }
  else {
    local_4 = *(int *)(*(int *)(unaff_EBX + 0x10) + 0x48);
  }
  uVar4 = (-(ushort)(param_2 != '\0') & 0xfff2) + 0x10;
  bVar8 = (int)param_1 < 0;
  pvVar6 = param_1;
  param_1._0_2_ = uVar4;
  if (bVar8) {
    pvVar6 = (void *)0x0;
    if (param_2 == '\x01') {
      if (-1 < local_4) {
        do {
          if (*(char *)((int)this + (int)pvVar6) == '\0') break;
          pvVar6 = (void *)((int)pvVar6 + 1);
        } while ((int)pvVar6 <= local_4);
      }
    }
    else if (-1 < local_4) {
      do {
        if (*(char *)((int)this + 1 + (int)pvVar6) == '\0' &&
            *(char *)((int)this + (int)pvVar6) == '\0') break;
        pvVar6 = (void *)((int)pvVar6 + 2);
      } while ((int)pvVar6 <= local_4);
    }
    param_1._0_2_ = uVar4 | 0x200;
  }
  if (in_EAX == (code *)0xffffffff) {
    this_00 = pvVar6;
    if (((ushort)param_1 & 0x200) != 0) {
      this_00 = (void *)((param_2 != '\x01') + 1 + (int)pvVar6);
    }
    if (local_4 < (int)pvVar6) {
      return 0x12;
    }
    bVar1 = FUN_00414b80(this_00,unaff_EBX);
    if (CONCAT31(extraout_var,bVar1) != 0) {
      return 7;
    }
    puVar7 = *(undefined4 **)(unaff_EBX + 0x14);
    for (uVar5 = (uint)this_00 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar7 = *(undefined4 *)this;
      this = (undefined4 *)((int)this + 4);
      puVar7 = puVar7 + 1;
    }
    for (uVar5 = (uint)this_00 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)this;
      this = (undefined4 *)((int)this + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
  }
  else {
    FUN_0040d250(unaff_EBX);
    *(void **)(unaff_EBX + 0x14) = this;
    if (in_EAX == FUN_00408130) {
      *(void **)(unaff_EBX + 0x24) = this;
      *(undefined4 *)(unaff_EBX + 0x20) = 0;
    }
    else {
      *(code **)(unaff_EBX + 0x20) = in_EAX;
      param_1._0_2_ = (ushort)param_1 | (-(ushort)(in_EAX != (code *)0x0) & 0xfc00) + 0x800;
    }
  }
  *(ushort *)(unaff_EBX + 0x1c) = (ushort)param_1;
  *(void **)(unaff_EBX + 0x18) = pvVar6;
  cVar2 = '\x01';
  if (param_2 != '\0') {
    cVar2 = param_2;
  }
  *(char *)(unaff_EBX + 0x1f) = cVar2;
  *(char *)(unaff_EBX + 0x1e) = (param_2 == '\0') + '\x03';
  if ((cVar2 != '\x01') && (iVar3 = FUN_0041dfb0(), iVar3 != 0)) {
    return 7;
  }
  return ((int)pvVar6 <= local_4) - 1U & 0x12;
}


/* END FUNCTION 0x0042e460 */
