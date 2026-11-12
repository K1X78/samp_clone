/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00487040
 * Name: FUN_00487040
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00487040(void *this,undefined4 *param_1,undefined4 param_2)

{
  undefined4 *_Str;
  ushort uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  float10 fVar7;
  undefined8 uVar8;
  float local_40 [4];
  float local_30;
  float local_2c;
  
  _Str = (undefined4 *)((int)this + 0x7e);
  *(undefined2 *)((int)this + 0x3022) = 0;
  puVar5 = param_1;
  puVar6 = _Str;
  for (iVar4 = 0x11; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined4 *)((int)this + 0x14d) = param_2;
  FUN_00486620(this,*(undefined4 *)((int)this + 0x84),*(undefined4 *)((int)this + 0x88),
               *(undefined4 *)((int)this + 0x8c),'\0');
  *(float *)((int)this + 0x2d11) = *(float *)((int)this + 0x90);
  *(undefined4 *)((int)this + 0x2d15) = *(undefined4 *)((int)this + 0x94);
  *(undefined4 *)((int)this + 0x2d19) = *(undefined4 *)((int)this + 0x98);
  *(undefined4 *)((int)this + 0x2d1d) = *(undefined4 *)((int)this + 0x9c);
  *(undefined4 *)((int)this + 0x2d55) = 1;
  FUN_0048f120((float *)((int)this + 0x2d11),local_40);
  fVar7 = (float10)fpatan(-(float10)local_30,(float10)local_2c);
  fVar7 = fVar7 * (float10)57.295776;
  *(float *)((int)this + 0x2d21) = (float)fVar7;
  if ((float10)0.0 <= fVar7) {
    if ((float10)360.0 <= fVar7) {
      *(float *)((int)this + 0x2d21) = (float)(fVar7 - (float10)360.0);
    }
  }
  else {
    *(float *)((int)this + 0x2d21) = (float)(fVar7 + (float10)360.0);
  }
  param_1 = (undefined4 *)(uint)*(byte *)((int)this + 0xa1);
  *(float *)((int)this + 0x2d09) = (float)*(byte *)((int)this + 0xa0);
  *(float *)((int)this + 0x2d0d) = (float)(int)param_1;
  FUN_00484290(*(byte *)((int)this + 0xa2) & 0x3f);
  *(undefined4 *)((int)this + 0x2d29) = *(undefined4 *)((int)this + 0xa8);
  *(undefined4 *)((int)this + 0x2d25) = *(undefined4 *)((int)this + 0xa4);
  *(undefined2 *)((int)this + 0x2d33) = *(undefined2 *)((int)this + 0x80);
  *(undefined2 *)((int)this + 0x2d31) = *(undefined2 *)_Str;
  uVar2 = (uint)*(ushort *)((int)this + 0x82);
  bVar3 = *(byte *)((int)this + 0xa2) >> 6;
  *(undefined4 *)((int)this + 0x2d2d) = *(undefined4 *)((int)this + 0xac);
  *(uint *)((int)this + 0x2d35) = uVar2;
  if (bVar3 == 1) {
    uVar2 = uVar2 | 0x10000;
  }
  else if (bVar3 == 2) {
    uVar2 = uVar2 | 0x20000;
  }
  else {
    if (bVar3 != 3) goto LAB_004871d1;
    uVar2 = uVar2 | 0x40000;
  }
  *(uint *)((int)this + 0x2d35) = uVar2;
LAB_004871d1:
  FUN_00484080((int)this);
  FUN_00483630(this,1);
  uVar1 = *(ushort *)((int)this + 0xbc);
  if (((((uVar1 != 0) && (uVar1 != 0xffff)) && (1999 < uVar1)) &&
      ((uVar1 < 4000 && (*(void **)(DAT_004fc438 + 0x14) != (void *)0x0)))) &&
     (iVar4 = FUN_00465300(*(void **)(DAT_004fc438 + 0x14),uVar1 - 2000), iVar4 == 0)) {
    *(undefined2 *)((int)this + 0xbc) = 0xffff;
    *(undefined4 *)((int)this + 0xb0) = 0;
    *(undefined4 *)((int)this + 0xb4) = 0;
    *(undefined4 *)((int)this + 0xb8) = 0;
  }
  if ((*(int *)((int)this + 0x30b6) == 2) && (*(int *)((int)this + 0x30ba) != 0)) {
    uVar8 = thunk_FUN_0044e910();
    param_1 = (undefined4 *)((int)uVar8 - *(int *)((int)this + 0x30be));
    _fwrite(&param_1,1,4,*(FILE **)((int)this + 0x30ba));
    _fwrite(_Str,1,0x44,*(FILE **)((int)this + 0x30ba));
  }
  return;
}


/* END FUNCTION 0x00487040 */
