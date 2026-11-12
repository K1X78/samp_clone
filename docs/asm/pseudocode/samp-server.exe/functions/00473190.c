/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00473190
 * Name: FUN_00473190
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void __cdecl FUN_00473190(int *param_1,uint *param_2)

{
  int iVar1;
  uint *puVar2;
  char *pcVar3;
  int local_8;
  
  puVar2 = param_2;
  FUN_00403100(param_1,param_2[1],(int *)&param_2);
  FUN_004031d0(param_2,&local_8);
  if (0 < local_8) {
    iVar1 = -(local_8 + 4U & 0xfffffffc);
    pcVar3 = &stack0xffffffec;
    if (&stack0x00000000 != (undefined1 *)0x14) {
      *(int *)(&stack0xffffffe8 + iVar1) = local_8 + 1;
      *(undefined4 *)(&stack0xffffffe4 + iVar1) = 0;
      *(uint **)(&stack0xffffffe0 + iVar1) = param_2;
      *(undefined1 **)(&stack0xffffffdc + iVar1) = &stack0xffffffec;
      *(undefined4 *)(&stack0xffffffd8 + iVar1) = 0x4731e5;
      FUN_00403350(*(int *)(&stack0xffffffdc + iVar1),*(uint **)(&stack0xffffffe0 + iVar1),
                   *(int *)(&stack0xffffffe4 + iVar1),*(uint *)(&stack0xffffffe8 + iVar1));
      goto LAB_004731ec;
    }
  }
  pcVar3 = (char *)0x0;
LAB_004731ec:
  FUN_00482f40(*(void **)(DAT_004fc438 + 0x3c),pcVar3,puVar2[2],puVar2[3],param_1);
  return;
}


/* END FUNCTION 0x00473190 */
