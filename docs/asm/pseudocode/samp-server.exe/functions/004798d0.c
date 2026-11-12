/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004798d0
 * Name: FUN_004798d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 __cdecl FUN_004798d0(int *param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  void *pvVar3;
  char *pcVar4;
  char *pcVar5;
  int local_10;
  uint *local_c;
  char *local_8;
  
  pvVar3 = *(void **)(DAT_004fc438 + 0x28);
  if (pvVar3 == (void *)0x0) {
    return 0;
  }
  if (999 < *(ushort *)(param_2 + 4)) {
    return 0;
  }
  if (*(int *)((int)pvVar3 + (uint)*(ushort *)(param_2 + 4) * 4 + 4000) == 0) {
    return 0;
  }
  FUN_00403100(param_1,*(int *)(param_2 + 8),(int *)&local_c);
  FUN_004031d0(local_c,&local_10);
  puVar2 = local_c;
  if (local_10 < 1) {
LAB_00479962:
    local_8 = (char *)0x0;
    pcVar4 = (char *)0x0;
  }
  else {
    iVar1 = -(local_10 + 4U & 0xfffffffc);
    pcVar4 = &stack0xffffffe0;
    local_8 = &stack0xffffffe0;
    if (&stack0x00000000 == (undefined1 *)0x20) goto LAB_00479962;
    *(int *)(&stack0xffffffdc + iVar1) = local_10 + 1;
    *(undefined4 *)(&stack0xffffffd8 + iVar1) = 0;
    *(uint **)(&stack0xffffffd4 + iVar1) = puVar2;
    *(undefined1 **)(&stack0xffffffd0 + iVar1) = &stack0xffffffe0;
    *(undefined4 *)(&stack0xffffffcc + iVar1) = 0x47995d;
    FUN_00403350(*(int *)(&stack0xffffffd0 + iVar1),*(uint **)(&stack0xffffffd4 + iVar1),
                 *(int *)(&stack0xffffffd8 + iVar1),*(uint *)(&stack0xffffffdc + iVar1));
  }
  FUN_00403100(param_1,*(int *)(param_2 + 0xc),(int *)&local_c);
  FUN_004031d0(local_c,&local_10);
  if (0 < local_10) {
    pcVar5 = &stack0xffffffe0;
    pcVar4 = local_8;
    if (&stack0x00000000 != (undefined1 *)0x20) {
      FUN_00403350((int)&stack0xffffffe0,local_c,0,local_10 + 1);
      pcVar4 = local_8;
      goto LAB_004799c4;
    }
  }
  pcVar5 = (char *)0x0;
LAB_004799c4:
  if (((pcVar4 != (char *)0x0) && (pcVar5 != (char *)0x0)) &&
     (pvVar3 = (void *)FUN_0046fe10(pvVar3,*(ushort *)(param_2 + 4)), pvVar3 != (void *)0x0)) {
    FUN_0048f710(pvVar3,pcVar4,pcVar5,*(undefined4 *)(param_2 + 0x10),*(int *)(param_2 + 0x14) != 0,
                 *(int *)(param_2 + 0x18) != 0,*(int *)(param_2 + 0x1c) != 0,
                 *(int *)(param_2 + 0x20) != 0,*(undefined4 *)(param_2 + 0x24));
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x004798d0 */
