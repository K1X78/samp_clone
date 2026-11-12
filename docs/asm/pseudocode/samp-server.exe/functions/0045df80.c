/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045df80
 * Name: FUN_0045df80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int * __thiscall FUN_0045df80(void *this,char param_1)

{
  int *piVar1;
  void *this_00;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = *(uint *)((int)this + 0x6c);
  if (*(uint *)((int)this + 0x70) < uVar6) {
    iVar3 = *(int *)((int)this + 0x74) - uVar6;
  }
  else {
    iVar3 = -uVar6;
  }
  piVar1 = (int *)((int)this + 0x2e8);
  *piVar1 = *(uint *)((int)this + 0x70) + iVar3;
  uVar6 = *(uint *)((int)this + 0x7c);
  if (*(uint *)((int)this + 0x80) < uVar6) {
    iVar3 = *(int *)((int)this + 0x84) - uVar6;
  }
  else {
    iVar3 = -uVar6;
  }
  *(uint *)((int)this + 0x2ec) = *(uint *)((int)this + 0x80) + iVar3;
  uVar6 = *(uint *)((int)this + 0x8c);
  if (*(uint *)((int)this + 0x90) < uVar6) {
    iVar3 = *(int *)((int)this + 0x94) - uVar6;
  }
  else {
    iVar3 = -uVar6;
  }
  *(uint *)((int)this + 0x2f0) = *(uint *)((int)this + 0x90) + iVar3;
  uVar6 = *(uint *)((int)this + 0x9c);
  if (*(uint *)((int)this + 0xa0) < uVar6) {
    iVar3 = *(int *)((int)this + 0xa4) - uVar6;
  }
  else {
    iVar3 = -uVar6;
  }
  *(uint *)((int)this + 0x2f4) = *(uint *)((int)this + 0xa0) + iVar3;
  uVar2 = thunk_FUN_0045b300((int)this + 0x1c);
  this_00 = (void *)((int)this + 0xa8);
  *(undefined4 *)((int)this + 0x360) = uVar2;
  *(undefined4 *)((int)this + 0x3ec) = 0;
  uVar6 = 0;
  iVar3 = FUN_0045b300((int)this_00);
  if (iVar3 != 0) {
    do {
      piVar4 = (int *)FUN_0045b2f0(this_00,uVar6);
      iVar3 = FUN_0045b300(*piVar4 + 8);
      *(int *)((int)this + 0x3ec) = *(int *)((int)this + 0x3ec) + iVar3;
      uVar6 = uVar6 + 1;
      uVar5 = FUN_0045b300((int)this_00);
    } while (uVar6 < uVar5);
  }
  uVar6 = *(uint *)((int)this + 0x10);
  if (*(uint *)((int)this + 0x14) < uVar6) {
    iVar3 = *(int *)((int)this + 0x18) - uVar6;
  }
  else {
    iVar3 = -uVar6;
  }
  *(uint *)((int)this + 0x3f0) = *(uint *)((int)this + 0x14) + iVar3;
  *(undefined8 *)((int)this + 0x3f8) = *(undefined8 *)((int)this + 0x470);
  if (param_1 == '\0') {
    uVar2 = FUN_0045d500((int)this);
    *(undefined4 *)((int)this + 0x388) = uVar2;
    return piVar1;
  }
  *(undefined4 *)((int)this + 0x388) = 0;
  return piVar1;
}


/* END FUNCTION 0x0045df80 */
