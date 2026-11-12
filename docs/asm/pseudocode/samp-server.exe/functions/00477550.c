/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00477550
 * Name: FUN_00477550
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void __cdecl FUN_00477550(int *param_1,uint *param_2)

{
  int iVar1;
  char *pcVar2;
  int local_8;
  
  FUN_00403100(param_1,param_2[1],(int *)&param_2);
  FUN_004031d0(param_2,&local_8);
  if (0 < local_8) {
    iVar1 = -(local_8 + 4U & 0xfffffffc);
    pcVar2 = &stack0xfffffff0;
    if (&stack0x00000000 != (undefined1 *)0x10) {
      *(int *)(&stack0xffffffec + iVar1) = local_8 + 1;
      *(undefined4 *)(&stack0xffffffe8 + iVar1) = 0;
      *(uint **)(&stack0xffffffe4 + iVar1) = param_2;
      *(undefined1 **)(&stack0xffffffe0 + iVar1) = &stack0xfffffff0;
      *(undefined4 *)(&stack0xffffffdc + iVar1) = 0x4775a4;
      FUN_00403350(*(int *)(&stack0xffffffe0 + iVar1),*(uint **)(&stack0xffffffe4 + iVar1),
                   *(int *)(&stack0xffffffe8 + iVar1),*(uint *)(&stack0xffffffec + iVar1));
      goto LAB_004775ab;
    }
  }
  pcVar2 = (char *)0x0;
LAB_004775ab:
  FUN_00490c80(DAT_004fc43c,pcVar2);
  return;
}


/* END FUNCTION 0x00477550 */
