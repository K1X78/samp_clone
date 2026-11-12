/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00487550
 * Name: FUN_00487550
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00487550(void *this,ushort *param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  byte bVar5;
  
  iVar2 = *(int *)(DAT_004fc438 + 0xc);
  uVar1 = *param_1;
  *(ushort *)((int)this + 0x3022) = uVar1;
  if (iVar2 == 0) {
    return;
  }
  if (1999 < uVar1) {
    return;
  }
  if (*(int *)(iVar2 + 0x2014 + (uint)uVar1 * 4) == 0) {
    return;
  }
  *(undefined4 *)((int)this + 0x66) = *(undefined4 *)param_1;
  *(undefined4 *)((int)this + 0x6a) = *(undefined4 *)(param_1 + 2);
  *(undefined4 *)((int)this + 0x6e) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 0x72) = *(undefined4 *)(param_1 + 6);
  *(undefined4 *)((int)this + 0x76) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0x7a) = *(undefined4 *)(param_1 + 10);
  if ((*(ushort *)((int)this + 0x3022) < 2000) &&
     (puVar3 = *(undefined4 **)(iVar2 + 0x3f54 + (uint)*(ushort *)((int)this + 0x3022) * 4),
     puVar3 != (undefined4 *)0x0)) {
    FUN_00486620(this,*puVar3,puVar3[1],puVar3[2],'\0');
    FUN_00489ae0((int)puVar3);
  }
  *(float *)((int)this + 0x2d09) = (float)*(byte *)((int)this + 0x6a);
  *(float *)((int)this + 0x2d0d) = (float)*(byte *)((int)this + 0x6b);
  FUN_00484290(*(byte *)((int)this + 0x69) & 0x3f);
  *(undefined4 *)((int)this + 0x2d55) = 3;
  *(byte *)((int)this + 0x3021) = (byte)param_1[1] & 0x3f;
  *(undefined2 *)((int)this + 0x2d33) = *(undefined2 *)((int)this + 0x6e);
  uVar4 = (uint)*(ushort *)((int)this + 0x70);
  bVar5 = *(byte *)((int)this + 0x69) >> 6;
  *(undefined2 *)((int)this + 0x2d31) = *(undefined2 *)((int)this + 0x6c);
  *(uint *)((int)this + 0x2d35) = uVar4;
  if (bVar5 == 1) {
    uVar4 = uVar4 | 0x10000;
  }
  else if (bVar5 == 2) {
    uVar4 = uVar4 | 0x20000;
  }
  else {
    if (bVar5 != 3) goto LAB_00487687;
    uVar4 = uVar4 | 0x40000;
  }
  *(uint *)((int)this + 0x2d35) = uVar4;
LAB_00487687:
  FUN_00484080((int)this);
  FUN_00483630(this,3);
  return;
}


/* END FUNCTION 0x00487550 */
