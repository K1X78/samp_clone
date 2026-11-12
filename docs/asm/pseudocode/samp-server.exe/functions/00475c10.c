/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00475c10
 * Name: FUN_00475c10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 __cdecl FUN_00475c10(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *this;
  char *pcVar3;
  int local_c;
  uint *local_8;
  
  iVar1 = *(int *)(DAT_004fc438 + 0x18);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00403100(param_1,*(int *)(param_2 + 0xc),(int *)&local_8);
  FUN_004031d0(local_8,&local_c);
  if (0 < local_c) {
    iVar2 = -(local_c + 4U & 0xfffffffc);
    pcVar3 = &stack0xffffffe4;
    if (&stack0x00000000 != (undefined1 *)0x1c) {
      *(int *)(&stack0xffffffe0 + iVar2) = local_c + 1;
      *(undefined4 *)(&stack0xffffffdc + iVar2) = 0;
      *(uint **)(&stack0xffffffd8 + iVar2) = local_8;
      *(undefined1 **)(&stack0xffffffd4 + iVar2) = &stack0xffffffe4;
      *(undefined4 *)(&stack0xffffffd0 + iVar2) = 0x475c80;
      FUN_00403350(*(int *)(&stack0xffffffd4 + iVar2),*(uint **)(&stack0xffffffd8 + iVar2),
                   *(int *)(&stack0xffffffdc + iVar2),*(uint *)(&stack0xffffffe0 + iVar2));
      goto LAB_00475c87;
    }
  }
  pcVar3 = (char *)0x0;
LAB_00475c87:
  if (*(byte *)(param_2 + 4) < 0x80) {
    this = *(void **)(iVar1 + (uint)*(byte *)(param_2 + 4) * 4);
  }
  else {
    this = (void *)0x0;
  }
  FUN_00492e40(this,*(byte *)(param_2 + 8),pcVar3);
  return 1;
}


/* END FUNCTION 0x00475c10 */
