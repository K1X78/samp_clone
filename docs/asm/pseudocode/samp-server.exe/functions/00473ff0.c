/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00473ff0
 * Name: FUN_00473ff0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void __cdecl FUN_00473ff0(int *param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char local_50 [68];
  int local_c;
  uint *local_8;
  
  FUN_00403100(param_1,*(int *)(param_2 + 4),(int *)&local_8);
  FUN_004031d0(local_8,&local_c);
  puVar2 = local_8;
  if (local_c < 1) {
LAB_0047404c:
    pcVar6 = (char *)0x0;
  }
  else {
    iVar1 = -(local_c + 4U & 0xfffffffc);
    pcVar6 = &stack0xffffffa4;
    if (&stack0x00000000 == (undefined1 *)0x5c) goto LAB_0047404c;
    *(int *)(local_50 + iVar1 + -0x10) = local_c + 1;
    pcVar3 = local_50 + iVar1 + -0x14;
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    *(uint **)(local_50 + iVar1 + -0x18) = puVar2;
    *(undefined1 **)(local_50 + iVar1 + -0x1c) = &stack0xffffffa4;
    pcVar4 = local_50 + iVar1 + -0x20;
    pcVar4[0] = 'G';
    pcVar4[1] = '@';
    pcVar4[2] = 'G';
    pcVar4[3] = '\0';
    FUN_00403350(*(int *)(local_50 + iVar1 + -0x1c),*(uint **)(local_50 + iVar1 + -0x18),
                 *(int *)(local_50 + iVar1 + -0x14),*(uint *)(local_50 + iVar1 + -0x10));
  }
  FUN_00403100(param_1,*(int *)(param_2 + 8),(int *)&local_8);
  FUN_004031d0(local_8,&local_c);
  if (0 < local_c) {
    pcVar5 = &stack0xffffffa4;
    if (&stack0x00000000 != (undefined1 *)0x5c) {
      FUN_00403350((int)&stack0xffffffa4,local_8,0,local_c + 1);
      goto LAB_004740a6;
    }
  }
  pcVar5 = (char *)0x0;
LAB_004740a6:
  if (pcVar6 == (char *)0x0) {
    pcVar6 = &DAT_004fc400;
  }
  if (pcVar5 == (char *)0x0) {
    pcVar5 = &DAT_004fc400;
  }
  FUN_004697f0(pcVar6,pcVar5,local_50,0x41);
  FUN_0046fcb0(param_1,*(int *)(param_2 + 0xc),local_50,*(int *)(param_2 + 0x10));
  return;
}


/* END FUNCTION 0x00473ff0 */
