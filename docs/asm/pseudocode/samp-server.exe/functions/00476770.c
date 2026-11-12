/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00476770
 * Name: FUN_00476770
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 __cdecl FUN_00476770(int *param_1,int param_2)

{
  ushort uVar1;
  void *this;
  int iVar2;
  char *pcVar3;
  int local_c;
  uint *local_8;
  
  if (((DAT_004fc438 == 0) || (uVar1 = *(ushort *)(param_2 + 4), 999 < uVar1)) ||
     (*(int *)(*(int *)(DAT_004fc438 + 8) + 0x24de4 + (uint)uVar1 * 4) == 0)) {
    return 0;
  }
  if (uVar1 < 1000) {
    iVar2 = *(int *)(*(int *)(DAT_004fc438 + 8) + 0x25d84 + (uint)uVar1 * 4);
  }
  else {
    iVar2 = 0;
  }
  this = *(void **)(iVar2 + 0x2d4b);
  if (this == (void *)0x0) {
    return 0;
  }
  if (0xff < *(ushort *)(param_2 + 8)) {
    return 0;
  }
  if (*(int *)((int)this + (uint)*(ushort *)(param_2 + 8) * 4) == 0) {
    return 0;
  }
  FUN_00403100(param_1,*(int *)(param_2 + 0xc),(int *)&local_8);
  FUN_004031d0(local_8,&local_c);
  if (0 < local_c) {
    iVar2 = -(local_c + 4U & 0xfffffffc);
    pcVar3 = &stack0xffffffe8;
    if (&stack0x00000000 != (undefined1 *)0x18) {
      *(int *)(&stack0xffffffe4 + iVar2) = local_c + 1;
      *(undefined4 *)(&stack0xffffffe0 + iVar2) = 0;
      *(uint **)(&stack0xffffffdc + iVar2) = local_8;
      *(undefined1 **)(&stack0xffffffd8 + iVar2) = &stack0xffffffe8;
      *(undefined4 *)(&stack0xffffffd4 + iVar2) = 0x476831;
      FUN_00403350(*(int *)(&stack0xffffffd8 + iVar2),*(uint **)(&stack0xffffffdc + iVar2),
                   *(int *)(&stack0xffffffe0 + iVar2),*(uint *)(&stack0xffffffe4 + iVar2));
      goto LAB_00476841;
    }
  }
  pcVar3 = &DAT_004fc400;
LAB_00476841:
  FUN_00488c10(this,(uint)*(ushort *)(param_2 + 8),pcVar3);
  return 1;
}


/* END FUNCTION 0x00476770 */
