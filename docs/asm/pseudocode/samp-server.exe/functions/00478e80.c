/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00478e80
 * Name: FUN_00478e80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

int __cdecl FUN_00478e80(int *param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int local_8;
  
  puVar2 = param_2;
  FUN_00403100(param_1,param_2[1],(int *)&param_2);
  FUN_004031d0(param_2,&local_8);
  if (0 < local_8) {
    puVar3 = (undefined1 *)(local_8 + 4U & 0xfffffffc);
    iVar5 = -(int)puVar3;
    if (&stack0xffffffec != puVar3) {
      *(int *)(&stack0xffffffe8 + iVar5) = local_8 + 1;
      *(undefined4 *)(&stack0xffffffe4 + iVar5) = 0;
      *(uint **)(&stack0xffffffe0 + iVar5) = param_2;
      *(undefined1 **)(&stack0xffffffdc + iVar5) = &stack0xffffffec + iVar5;
      *(undefined4 *)(&stack0xffffffd8 + iVar5) = 0x478ed5;
      FUN_00403350(*(int *)(&stack0xffffffdc + iVar5),*(uint **)(&stack0xffffffe0 + iVar5),
                   *(int *)(&stack0xffffffe4 + iVar5),*(uint *)(&stack0xffffffe8 + iVar5));
      *(undefined1 **)(&stack0xffffffe8 + iVar5) = &stack0xffffffec + iVar5;
      *(undefined4 *)(&stack0xffffffe4 + iVar5) = 0x478ee3;
      iVar4 = FUN_0049f040(&DAT_004fc480,*(byte **)(&stack0xffffffe8 + iVar5));
      if (iVar4 != 0) {
        uVar1 = puVar2[2];
        *(uint *)(&stack0xffffffe8 + iVar5) = puVar2[3];
        *(int *)(&stack0xffffffe4 + iVar5) = iVar4;
        *(uint *)(&stack0xffffffe0 + iVar5) = uVar1;
        *(int **)(&stack0xffffffdc + iVar5) = param_1;
        *(undefined4 *)(&stack0xffffffd8 + iVar5) = 0x478f05;
        iVar5 = FUN_0046fcb0(*(int **)(&stack0xffffffdc + iVar5),*(int *)(&stack0xffffffe0 + iVar5),
                             *(char **)(&stack0xffffffe4 + iVar5),*(int *)(&stack0xffffffe8 + iVar5)
                            );
        return iVar5;
      }
    }
  }
  return 0;
}


/* END FUNCTION 0x00478e80 */
