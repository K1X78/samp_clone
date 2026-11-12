/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00471b70
 * Name: FUN_00471b70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 __cdecl FUN_00471b70(int *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  int local_c;
  uint *local_8;
  
  if (*(int *)((int)DAT_004fc438 + 8) == 0) {
    return 0;
  }
  if (999 < *(ushort *)(param_2 + 4)) {
    return 0;
  }
  if (*(int *)(*(int *)((int)DAT_004fc438 + 8) + 0x24de4 + (uint)*(ushort *)(param_2 + 4) * 4) == 0)
  {
    return 0;
  }
  FUN_00403100(param_1,*(int *)(param_2 + 0xc),(int *)&local_8);
  FUN_004031d0(local_8,&local_c);
  if (0 < local_c) {
    iVar1 = -(local_c + 4U & 0xfffffffc);
    pcVar2 = &stack0xffffffe8;
    if (&stack0x00000000 != (undefined1 *)0x18) {
      *(int *)(&stack0xffffffe4 + iVar1) = local_c + 1;
      *(undefined4 *)(&stack0xffffffe0 + iVar1) = 0;
      *(uint **)(&stack0xffffffdc + iVar1) = local_8;
      *(undefined1 **)(&stack0xffffffd8 + iVar1) = &stack0xffffffe8;
      *(undefined4 *)(&stack0xffffffd4 + iVar1) = 0x471bf3;
      FUN_00403350(*(int *)(&stack0xffffffd8 + iVar1),*(uint **)(&stack0xffffffdc + iVar1),
                   *(int *)(&stack0xffffffe0 + iVar1),*(uint *)(&stack0xffffffe4 + iVar1));
      goto LAB_00471bfd;
    }
  }
  pcVar2 = &DAT_004fc400;
LAB_00471bfd:
  FUN_00495ae0(DAT_004fc438,*(ushort *)(param_2 + 4),*(uint *)(param_2 + 8),pcVar2);
  return 1;
}


/* END FUNCTION 0x00471b70 */
