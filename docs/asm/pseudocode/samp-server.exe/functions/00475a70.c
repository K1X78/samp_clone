/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00475a70
 * Name: FUN_00475a70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

uint __cdecl FUN_00475a70(int *param_1,int param_2)

{
  void *this;
  int iVar1;
  byte bVar2;
  char *pcVar3;
  int local_c;
  uint *local_8;
  
  this = *(void **)(DAT_004fc438 + 0x18);
  if (this == (void *)0x0) {
    return 0xffffffff;
  }
  FUN_00403100(param_1,*(int *)(param_2 + 4),(int *)&local_8);
  FUN_004031d0(local_8,&local_c);
  if (0 < local_c) {
    iVar1 = -(local_c + 4U & 0xfffffffc);
    pcVar3 = &stack0xffffffe4;
    if (&stack0x00000000 != (undefined1 *)0x1c) {
      *(int *)(&stack0xffffffe0 + iVar1) = local_c + 1;
      *(undefined4 *)(&stack0xffffffdc + iVar1) = 0;
      *(uint **)(&stack0xffffffd8 + iVar1) = local_8;
      *(undefined1 **)(&stack0xffffffd4 + iVar1) = &stack0xffffffe4;
      *(undefined4 *)(&stack0xffffffd0 + iVar1) = 0x475ad6;
      FUN_00403350(*(int *)(&stack0xffffffd4 + iVar1),*(uint **)(&stack0xffffffd8 + iVar1),
                   *(int *)(&stack0xffffffdc + iVar1),*(uint *)(&stack0xffffffe0 + iVar1));
      goto LAB_00475add;
    }
  }
  pcVar3 = (char *)0x0;
LAB_00475add:
  bVar2 = FUN_004651a0(this,pcVar3,*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x10),
                       *(char *)(param_2 + 8),*(undefined4 *)(param_2 + 0x14),
                       *(undefined4 *)(param_2 + 0x18));
  if (bVar2 == 0xff) {
    return 0xffffffff;
  }
  return (uint)bVar2;
}


/* END FUNCTION 0x00475a70 */
