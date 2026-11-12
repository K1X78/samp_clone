/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004738d0
 * Name: FUN_004738d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


ulonglong __cdecl FUN_004738d0(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined2 unaff_SI;
  ulonglong uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined1 local_8 [8];
  
  piVar1 = *(int **)(DAT_004fc438 + 0x40);
  uVar6 = *(undefined4 *)(param_2 + 4);
  uVar5 = 0x47;
  (**(code **)(*piVar1 + 0xec))(local_8,uVar6);
  uVar4 = (**(code **)(*piVar1 + 0x90))(uVar6,CONCAT22(uVar5,unaff_SI));
  iVar2 = (int)uVar4;
  if ((iVar2 != 0) && (iVar2 != -0x2f8)) {
    uVar3 = *(int *)(iVar2 + 0x3bc) + (uint)(0xfffffff8 < *(uint *)(iVar2 + 0x3b8));
    return CONCAT44(uVar3 >> 3,*(uint *)(iVar2 + 0x3b8) + 7 >> 3 | uVar3 * 0x20000000);
  }
  return uVar4 & 0xffffffff00000000;
}


/* END FUNCTION 0x004738d0 */
