/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00477dd0
 * Name: FUN_00477dd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 __cdecl FUN_00477dd0(int *param_1,int param_2)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar6;
  char *pcVar7;
  uint local_c;
  uint *local_8;
  undefined2 uVar5;
  
  iVar6 = *(int *)(DAT_004fc438 + 8);
  if (iVar6 == 0) {
    return 0;
  }
  uVar2 = *(ushort *)(param_2 + 4);
  if (999 < uVar2) {
    return 0;
  }
  if (*(int *)(iVar6 + 0x24de4 + (uint)uVar2 * 4) == 0) {
    return 0;
  }
  if (uVar2 < 1000) {
    iVar6 = *(int *)(iVar6 + 0x25d84 + (uint)uVar2 * 4);
  }
  else {
    iVar6 = 0;
  }
  FUN_00403100(param_1,*(int *)(param_2 + 0x10),(int *)&local_8);
  FUN_004031d0(local_8,(int *)&local_c);
  if (0 < (int)local_c) {
    iVar1 = local_c + 1;
    local_c = local_c + 4 & 0xfffffffc;
    iVar3 = -local_c;
    pcVar7 = &stack0xffffffe8;
    if (&stack0x00000000 != (undefined1 *)0x18) {
      *(int *)(&stack0xffffffe4 + iVar3) = iVar1;
      *(undefined4 *)(&stack0xffffffe0 + iVar3) = 0;
      *(uint **)(&stack0xffffffdc + iVar3) = local_8;
      *(undefined1 **)(&stack0xffffffd8 + iVar3) = &stack0xffffffe8;
      *(undefined4 *)(&stack0xffffffd4 + iVar3) = 0x477e6b;
      uVar4 = FUN_00403350(*(int *)(&stack0xffffffd8 + iVar3),*(uint **)(&stack0xffffffdc + iVar3),
                           *(int *)(&stack0xffffffe0 + iVar3),*(uint *)(&stack0xffffffe4 + iVar3));
      uVar5 = (undefined2)((uint)uVar4 >> 0x10);
      goto LAB_00477e7b;
    }
  }
  uVar5 = (undefined2)(local_c >> 0x10);
  pcVar7 = &DAT_004fc400;
LAB_00477e7b:
  if (iVar6 != 0) {
    uVar2 = *(ushort *)(param_2 + 8);
    if ((uVar2 < 0x400) &&
       (*(int *)((int)*(void **)(iVar6 + 0x2d4f) + (uint)uVar2 * 4 + 0x8400) != 0)) {
      FUN_00487fe0(*(void **)(iVar6 + 0x2d4f),CONCAT22(uVar5,uVar2),*(undefined4 *)(param_2 + 0xc),
                   pcVar7);
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x00477dd0 */
