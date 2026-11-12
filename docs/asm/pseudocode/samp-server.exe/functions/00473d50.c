/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00473d50
 * Name: FUN_00473d50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 __cdecl FUN_00473d50(int *param_1,uint *param_2)

{
  int iVar1;
  short *psVar2;
  int local_8;
  
  FUN_00403100(param_1,param_2[1],(int *)&param_2);
  FUN_004031d0(param_2,&local_8);
  if (0 < local_8) {
    iVar1 = -(local_8 + 4U & 0xfffffffc);
    psVar2 = (short *)&stack0xfffffff0;
    if (&stack0x00000000 != (undefined1 *)0x10) {
      *(int *)(&stack0xffffffec + iVar1) = local_8 + 1;
      *(undefined4 *)(&stack0xffffffe8 + iVar1) = 0;
      *(uint **)(&stack0xffffffe4 + iVar1) = param_2;
      *(undefined1 **)(&stack0xffffffe0 + iVar1) = &stack0xfffffff0;
      *(undefined4 *)(&stack0xffffffdc + iVar1) = 0x473da4;
      FUN_00403350(*(int *)(&stack0xffffffe0 + iVar1),*(uint **)(&stack0xffffffe4 + iVar1),
                   *(int *)(&stack0xffffffe8 + iVar1),*(uint *)(&stack0xffffffec + iVar1));
      goto LAB_00473dab;
    }
  }
  psVar2 = (short *)0x0;
LAB_00473dab:
  FUN_00490ce0(DAT_004fc43c,psVar2);
  return 1;
}


/* END FUNCTION 0x00473d50 */
