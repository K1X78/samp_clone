/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004737d0
 * Name: FUN_004737d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


ulonglong __cdecl FUN_004737d0(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined2 unaff_SI;
  ulonglong uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  undefined1 local_8 [8];
  
  piVar1 = *(int **)(DAT_004fc438 + 0x40);
  uVar7 = *(undefined4 *)(param_2 + 4);
  uVar6 = 0x47;
  (**(code **)(*piVar1 + 0xec))(local_8,uVar7);
  uVar5 = (**(code **)(*piVar1 + 0x90))(uVar7,CONCAT22(uVar6,unaff_SI));
  iVar2 = (int)uVar5;
  if ((iVar2 != 0) && (iVar2 != -0x2f8)) {
    uVar3 = *(uint *)(iVar2 + 0x3e0) + *(uint *)(iVar2 + 0x3d8);
    uVar4 = *(int *)(iVar2 + 0x3e4) + *(int *)(iVar2 + 0x3dc) +
            (uint)CARRY4(*(uint *)(iVar2 + 0x3e0),*(uint *)(iVar2 + 0x3d8)) +
            (uint)(0xfffffff8 < uVar3);
    return CONCAT44(uVar4 >> 3,uVar3 + 7 >> 3 | uVar4 * 0x20000000);
  }
  return uVar5 & 0xffffffff00000000;
}


/* END FUNCTION 0x004737d0 */
