/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004793f0
 * Name: FUN_004793f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 __cdecl FUN_004793f0(int *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  char *pcVar5;
  undefined4 uVar6;
  char *pcVar7;
  char *pcVar8;
  int local_14;
  uint local_10;
  char *local_c;
  uint *local_8;
  
  if (DAT_004fc438 == 0) {
    return 0;
  }
  uVar6 = *(undefined4 *)(param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 8);
  local_10 = local_10 & 0xffffff00;
  FUN_00403100(param_1,*(int *)(param_2 + 0xc),(int *)&local_8);
  FUN_004031d0(local_8,&local_14);
  puVar4 = local_8;
  if (local_14 < 1) {
LAB_0047946c:
    local_c = (char *)0x0;
  }
  else {
    iVar3 = -(local_14 + 4U & 0xfffffffc);
    local_c = &stack0xffffffd8;
    if (&stack0x00000000 == (undefined1 *)0x28) goto LAB_0047946c;
    *(int *)(&stack0xffffffd4 + iVar3) = local_14 + 1;
    *(undefined4 *)(&stack0xffffffd0 + iVar3) = 0;
    *(uint **)(&stack0xffffffcc + iVar3) = puVar4;
    *(undefined1 **)(&stack0xffffffc8 + iVar3) = &stack0xffffffd8;
    *(undefined4 *)(&stack0xffffffc4 + iVar3) = 0x479467;
    FUN_00403350(*(int *)(&stack0xffffffc8 + iVar3),*(uint **)(&stack0xffffffcc + iVar3),
                 *(int *)(&stack0xffffffd0 + iVar3),*(uint *)(&stack0xffffffd4 + iVar3));
  }
  FUN_00403100(param_1,*(int *)(param_2 + 0x10),(int *)&local_8);
  FUN_004031d0(local_8,&local_14);
  if (local_14 < 1) {
LAB_004794be:
    pcVar7 = (char *)0x0;
  }
  else {
    pcVar7 = &stack0xffffffd8;
    if (&stack0x00000000 == (undefined1 *)0x28) goto LAB_004794be;
    FUN_00403350((int)&stack0xffffffd8,local_8,0,local_14 + 1);
  }
  FUN_00403100(param_1,*(int *)(param_2 + 0x14),(int *)&local_8);
  FUN_004031d0(local_8,&local_14);
  if (local_14 < 1) {
LAB_00479510:
    pcVar8 = (char *)0x0;
  }
  else {
    pcVar8 = &stack0xffffffd8;
    if (&stack0x00000000 == (undefined1 *)0x28) goto LAB_00479510;
    FUN_00403350((int)&stack0xffffffd8,local_8,0,local_14 + 1);
  }
  if (local_c == (char *)0x0) {
    return 0;
  }
  if (pcVar8 != (char *)0x0) {
    pcVar5 = pcVar8;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    local_14 = (int)pcVar5 - (int)(pcVar8 + 1);
    if (local_14 != 0) goto LAB_00479542;
  }
  local_10 = CONCAT31(local_10._1_3_,1);
LAB_00479542:
  uVar6 = FUN_004816d0(*(void **)(DAT_004fc438 + 0x38),uVar6,uVar2,local_c,pcVar7,(char *)0x0,
                       (char)local_10,param_1,pcVar8);
  return uVar6;
}


/* END FUNCTION 0x004793f0 */
