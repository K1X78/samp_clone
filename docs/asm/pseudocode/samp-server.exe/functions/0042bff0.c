/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042bff0
 * Name: FUN_0042bff0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_0042bff0(void *this,undefined4 param_1,uint param_2,int param_3,int *param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  void *this_00;
  void *this_01;
  int iVar7;
  int *piVar8;
  
  uVar5 = FUN_0040ca90();
  if (uVar5 < param_2) {
    uVar5 = FUN_0041d790();
    return uVar5;
  }
  uVar5 = FUN_0042a810();
  if (uVar5 != 0) {
    return uVar5;
  }
  iVar7 = 0;
  if (*(short *)((int)this + 0x10) != 0) {
    do {
      iVar4 = *(int *)((int)this + 0x40);
      iVar6 = (uint)*(ushort *)((int)this + 0xc) + iVar4;
      uVar1 = *(undefined1 *)(iVar6 + 1 + iVar7 * 2);
      uVar2 = *(undefined1 *)(iVar6 + iVar7 * 2);
      uVar3 = *(ushort *)((int)this + 0x12);
      if (*(char *)((int)this + 3) == '\0') {
        iVar6 = 1;
        piVar8 = param_4;
        uVar5 = FUN_00408f80();
        uVar5 = FUN_0042bff0(this_00,param_1,uVar5,iVar6,piVar8);
        if (uVar5 != 0) goto LAB_0042c134;
      }
      uVar5 = FUN_00428f70((uint)(CONCAT11(uVar2,uVar1) & uVar3) + iVar4);
      if (uVar5 != 0) goto LAB_0042c134;
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)(uint)*(ushort *)((int)this + 0x10));
  }
  if (*(char *)((int)this + 3) == '\0') {
    iVar7 = 1;
    uVar5 = FUN_00408f80();
    uVar5 = FUN_0042bff0(this_01,param_1,uVar5,iVar7,param_4);
    if (uVar5 != 0) goto LAB_0042c134;
  }
  else if (param_4 != (int *)0x0) {
    *param_4 = *param_4 + (uint)*(ushort *)((int)this + 0x10);
  }
  if (param_3 != 0) {
    FUN_00428f50();
    FUN_00427610();
    return 0;
  }
  uVar5 = FUN_00423650(*(int *)((int)this + 0x44));
  if (uVar5 == 0) {
    FUN_0041f920(**(byte **)((int)this + 0x40) | 8);
  }
LAB_0042c134:
  FUN_00427610();
  return uVar5;
}


/* END FUNCTION 0x0042bff0 */
