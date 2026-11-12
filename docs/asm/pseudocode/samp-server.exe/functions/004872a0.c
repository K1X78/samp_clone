/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004872a0
 * Name: FUN_004872a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_004872a0(void *this,ushort *param_1,uint param_2)

{
  void *pvVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  ushort *puVar7;
  undefined8 uVar8;
  float local_40 [12];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(int *)(DAT_004fc438 + 0xc) == 0) {
    return;
  }
  *(uint *)((int)this + 0x151) = param_2;
  uVar2 = *param_1;
  if ((1999 < uVar2) || (*(char *)(uVar2 + 0x53d + (int)this) == '\0')) {
    *(undefined4 *)((int)this + 0x2d55) = 0;
    return;
  }
  *(ushort *)((int)this + 0x3022) = uVar2;
  *(undefined1 *)((int)this + 0x3021) = 0;
  puVar7 = (ushort *)((int)this + 0x27);
  for (iVar6 = 0xf; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)puVar7 = *(undefined4 *)param_1;
    param_1 = param_1 + 2;
    puVar7 = puVar7 + 2;
  }
  *puVar7 = *param_1;
  *(char *)(puVar7 + 1) = (char)param_1[1];
  FUN_00486620(this,*(undefined4 *)((int)this + 0x3f),*(undefined4 *)((int)this + 0x43),
               *(undefined4 *)((int)this + 0x47),'\0');
  param_2 = (uint)*(byte *)((int)this + 0x5c);
  *(float *)((int)this + 0x2d09) = (float)*(byte *)((int)this + 0x5b);
  *(float *)((int)this + 0x2d0d) = (float)param_2;
  FUN_00484290(*(byte *)((int)this + 0x5d) & 0x3f);
  *(undefined4 *)((int)this + 0x2d55) = 2;
  if ((*(ushort *)((int)this + 0x3022) < 2000) &&
     (pvVar1 = *(void **)(*(int *)(DAT_004fc438 + 0xc) + 0x3f54 +
                         (uint)*(ushort *)((int)this + 0x3022) * 4), pvVar1 != (void *)0x0)) {
    param_2 = *(uint *)((int)this + 0x57);
    FUN_0048f120((float *)((int)this + 0x2f),local_40);
    uVar4 = param_2;
    local_10 = *(undefined4 *)((int)this + 0x3f);
    local_8 = *(undefined4 *)((int)this + 0x47);
    local_c = *(undefined4 *)((int)this + 0x43);
    FUN_00489560(pvVar1,*(ushort *)((int)this + 0x2d53),local_40,param_2,
                 *(ushort *)((int)this + 0x60),'\x01');
    *(undefined4 *)((int)pvVar1 + 0x4c) = *(undefined4 *)((int)this + 0x4b);
    *(undefined4 *)((int)pvVar1 + 0x50) = *(undefined4 *)((int)this + 0x4f);
    *(undefined4 *)((int)pvVar1 + 0x54) = *(undefined4 *)((int)this + 0x53);
    FUN_00489a70(pvVar1,*(ushort *)((int)this + 0x2d53),*(byte *)((int)this + 0x5e));
    FUN_00489ae0((int)pvVar1);
    uVar3 = FUN_00489770((int)pvVar1);
    if ((char)uVar3 != '\0') {
      iVar6 = 1;
      do {
        uVar2 = *(short *)((int)this + 0x3022) + (short)iVar6;
        if (((uVar2 < 2000) &&
            (pvVar1 = *(void **)(*(int *)(DAT_004fc438 + 0xc) + 0x3f54 + (uint)uVar2 * 4),
            pvVar1 != (void *)0x0)) && (uVar3 = FUN_00489740((int)pvVar1), (char)uVar3 != '\0')) {
          FUN_00489560(pvVar1,0xffff,local_40,uVar4,*(ushort *)((int)this + 0x60),'\x01');
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < 4);
    }
  }
  uVar4 = (uint)*(ushort *)((int)this + 0x2d);
  *(undefined2 *)((int)this + 0x2d31) = *(undefined2 *)((int)this + 0x29);
  bVar5 = *(byte *)((int)this + 0x5d) >> 6;
  *(undefined2 *)((int)this + 0x2d33) = *(undefined2 *)((int)this + 0x2b);
  *(uint *)((int)this + 0x2d35) = uVar4;
  if (bVar5 == 1) {
    uVar4 = uVar4 | 0x10000;
  }
  else if (bVar5 == 2) {
    uVar4 = uVar4 | 0x20000;
  }
  else {
    if (bVar5 != 3) goto LAB_004874c1;
    uVar4 = uVar4 | 0x40000;
  }
  *(uint *)((int)this + 0x2d35) = uVar4;
LAB_004874c1:
  FUN_00484080((int)this);
  FUN_00483630(this,2);
  if ((*(int *)((int)this + 0x30b6) == 1) && (*(int *)((int)this + 0x30ba) != 0)) {
    uVar8 = thunk_FUN_0044e910();
    param_2 = (int)uVar8 - *(int *)((int)this + 0x30be);
    _fwrite(&param_2,1,4,*(FILE **)((int)this + 0x30ba));
    _fwrite((ushort *)((int)this + 0x27),1,0x3f,*(FILE **)((int)this + 0x30ba));
  }
  return;
}


/* END FUNCTION 0x004872a0 */
