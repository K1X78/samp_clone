/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00477ac0
 * Name: FUN_00477ac0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

uint __cdecl FUN_00477ac0(int *param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  int local_c;
  uint *local_8;
  
  iVar2 = *(int *)(DAT_004fc438 + 8);
  if (iVar2 == 0) {
    return 0xffff;
  }
  uVar1 = *(ushort *)(param_2 + 4);
  if (999 < uVar1) {
    return 0xffff;
  }
  if (*(int *)(iVar2 + 0x24de4 + (uint)uVar1 * 4) == 0) {
    return 0xffff;
  }
  if (999 < uVar1) {
    return 0xffff;
  }
  iVar2 = *(int *)(iVar2 + 0x25d84 + (uint)uVar1 * 4);
  if (iVar2 == 0) {
    return 0xffff;
  }
  FUN_00403100(param_1,*(int *)(param_2 + 8),(int *)&local_8);
  FUN_004031d0(local_8,&local_c);
  if (0 < local_c) {
    iVar3 = -(local_c + 4U & 0xfffffffc);
    pcVar5 = &stack0xffffffe4;
    if (&stack0x00000000 != (undefined1 *)0x1c) {
      *(int *)(&stack0xffffffe0 + iVar3) = local_c + 1;
      *(undefined4 *)(&stack0xffffffdc + iVar3) = 0;
      *(uint **)(&stack0xffffffd8 + iVar3) = local_8;
      *(undefined1 **)(&stack0xffffffd4 + iVar3) = &stack0xffffffe4;
      *(undefined4 *)(&stack0xffffffd0 + iVar3) = 0x477b64;
      FUN_00403350(*(int *)(&stack0xffffffd4 + iVar3),*(uint **)(&stack0xffffffd8 + iVar3),
                   *(int *)(&stack0xffffffdc + iVar3),*(uint *)(&stack0xffffffe0 + iVar3));
      goto LAB_00477b6e;
    }
  }
  pcVar5 = &DAT_004fc400;
LAB_00477b6e:
  uVar4 = FUN_00487e90(*(void **)(iVar2 + 0x2d4f),pcVar5,*(undefined4 *)(param_2 + 0xc),
                       *(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),
                       *(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),
                       *(undefined2 *)(param_2 + 0x20),*(undefined2 *)(param_2 + 0x24),
                       *(undefined1 *)(param_2 + 0x28));
  return uVar4 & 0xffff;
}


/* END FUNCTION 0x00477ac0 */
