/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00478e00
 * Name: FUN_00478e00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

float __cdecl FUN_00478e00(int *param_1,uint *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  float10 fVar3;
  int local_8;
  
  FUN_00403100(param_1,param_2[1],(int *)&param_2);
  FUN_004031d0(param_2,&local_8);
  if (0 < local_8) {
    puVar2 = (undefined1 *)(local_8 + 4U & 0xfffffffc);
    iVar1 = -(int)puVar2;
    if (&stack0xfffffff0 != puVar2) {
      *(int *)(&stack0xffffffec + iVar1) = local_8 + 1;
      *(undefined4 *)(&stack0xffffffe8 + iVar1) = 0;
      *(uint **)(&stack0xffffffe4 + iVar1) = param_2;
      *(undefined1 **)(&stack0xffffffe0 + iVar1) = &stack0xfffffff0 + iVar1;
      *(undefined4 *)(&stack0xffffffdc + iVar1) = 0x478e54;
      FUN_00403350(*(int *)(&stack0xffffffe0 + iVar1),*(uint **)(&stack0xffffffe4 + iVar1),
                   *(int *)(&stack0xffffffe8 + iVar1),*(uint *)(&stack0xffffffec + iVar1));
      *(undefined1 **)(&stack0xffffffec + iVar1) = &stack0xfffffff0 + iVar1;
      *(undefined4 *)(&stack0xffffffe8 + iVar1) = 0x478e62;
      fVar3 = FUN_0049f070(&DAT_004fc480,*(byte **)(&stack0xffffffec + iVar1));
      return (float)fVar3;
    }
  }
  return 0.0;
}


/* END FUNCTION 0x00478e00 */
