/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00478b80
 * Name: FUN_00478b80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

bool __cdecl FUN_00478b80(int *param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined1 *puVar3;
  int iVar4;
  int local_8;
  
  puVar2 = param_2;
  FUN_00403100(param_1,param_2[1],(int *)&param_2);
  FUN_004031d0(param_2,&local_8);
  if (0 < local_8) {
    puVar3 = (undefined1 *)(local_8 + 4U & 0xfffffffc);
    iVar4 = -(int)puVar3;
    if (&stack0xffffffec != puVar3) {
      *(int *)(&stack0xffffffe8 + iVar4) = local_8 + 1;
      *(undefined4 *)(&stack0xffffffe4 + iVar4) = 0;
      *(uint **)(&stack0xffffffe0 + iVar4) = param_2;
      *(undefined1 **)(&stack0xffffffdc + iVar4) = &stack0xffffffec + iVar4;
      *(undefined4 *)(&stack0xffffffd8 + iVar4) = 0x478bd5;
      FUN_00403350(*(int *)(&stack0xffffffdc + iVar4),*(uint **)(&stack0xffffffe0 + iVar4),
                   *(int *)(&stack0xffffffe4 + iVar4),*(uint *)(&stack0xffffffe8 + iVar4));
      uVar1 = puVar2[2];
      *(undefined4 *)(&stack0xffffffe8 + iVar4) = 0;
      *(uint *)(&stack0xffffffe4 + iVar4) = uVar1;
      *(undefined1 **)(&stack0xffffffe0 + iVar4) = &stack0xffffffec + iVar4;
      *(undefined4 *)(&stack0xffffffdc + iVar4) = 0x478be9;
      iVar4 = FUN_0049eeb0(&DAT_004fc480,*(byte **)(&stack0xffffffe0 + iVar4),
                           *(undefined4 *)(&stack0xffffffe4 + iVar4),
                           *(int *)(&stack0xffffffe8 + iVar4));
      return iVar4 != 0;
    }
  }
  return false;
}


/* END FUNCTION 0x00478b80 */
