/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00471c40
 * Name: FUN_00471c40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 __cdecl FUN_00471c40(int *param_1,uint *param_2)

{
  int iVar1;
  uint *puVar2;
  char *pcVar3;
  int local_8;
  
  puVar2 = param_2;
  FUN_00403100(param_1,param_2[2],(int *)&param_2);
  FUN_004031d0(param_2,&local_8);
  if (0 < local_8) {
    iVar1 = -(local_8 + 4U & 0xfffffffc);
    pcVar3 = &stack0xffffffec;
    if (&stack0x00000000 != (undefined1 *)0x14) {
      *(int *)(&stack0xffffffe8 + iVar1) = local_8 + 1;
      *(undefined4 *)(&stack0xffffffe4 + iVar1) = 0;
      *(uint **)(&stack0xffffffe0 + iVar1) = param_2;
      *(undefined1 **)(&stack0xffffffdc + iVar1) = &stack0xffffffec;
      *(undefined4 *)(&stack0xffffffd8 + iVar1) = 0x471c95;
      FUN_00403350(*(int *)(&stack0xffffffdc + iVar1),*(uint **)(&stack0xffffffe0 + iVar1),
                   *(int *)(&stack0xffffffe4 + iVar1),*(uint *)(&stack0xffffffe8 + iVar1));
      goto LAB_00471c9f;
    }
  }
  pcVar3 = &DAT_004fc400;
LAB_00471c9f:
  FUN_00495cc0(DAT_004fc438,puVar2[1],pcVar3);
  return 1;
}


/* END FUNCTION 0x00471c40 */
