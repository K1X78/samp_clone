/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00478c10
 * Name: FUN_00478c10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

bool __cdecl FUN_00478c10(int *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined4 uStackY_2c;
  int local_8;
  
  puVar3 = param_2;
  FUN_00403100(param_1,param_2[1],(int *)&param_2);
  uStackY_2c = 0x478c38;
  FUN_004031d0(param_2,&local_8);
  if (local_8 < 1) {
    return false;
  }
  puVar4 = (undefined1 *)(local_8 + 4U & 0xfffffffc);
  iVar6 = -(int)puVar4;
  if (&stack0xffffffec == puVar4) {
    return false;
  }
  *(int *)(&stack0xffffffe8 + iVar6) = local_8 + 1;
  *(undefined4 *)(&stack0xffffffe4 + iVar6) = 0;
  *(uint **)(&stack0xffffffe0 + iVar6) = param_2;
  *(undefined1 **)(&stack0xffffffdc + iVar6) = &stack0xffffffec + iVar6;
  *(undefined4 *)(&stack0xffffffd8 + iVar6) = 0x478c63;
  FUN_00403350(*(int *)(&stack0xffffffdc + iVar6),*(uint **)(&stack0xffffffe0 + iVar6),
               *(int *)(&stack0xffffffe4 + iVar6),*(uint *)(&stack0xffffffe8 + iVar6));
  uVar1 = puVar3[2];
  *(uint ***)(&stack0xffffffe8 + iVar6) = &param_2;
  *(uint *)(&stack0xffffffe4 + iVar6) = uVar1;
  *(int **)(&stack0xffffffe0 + iVar6) = param_1;
  *(undefined4 *)(&stack0xffffffdc + iVar6) = 0x478c77;
  FUN_00403100(*(int **)(&stack0xffffffe0 + iVar6),*(int *)(&stack0xffffffe4 + iVar6),
               *(int **)(&stack0xffffffe8 + iVar6));
  *(int **)(&stack0xffffffdc + iVar6) = &local_8;
  *(uint **)(&stack0xffffffd8 + iVar6) = param_2;
  *(undefined4 *)((int)&uStackY_2c + iVar6) = 0x478c84;
  FUN_004031d0(*(uint **)(&stack0xffffffd8 + iVar6),*(int **)(&stack0xffffffdc + iVar6));
  puVar4 = &stack0xffffffec + iVar6;
  if (0 < local_8) {
    puVar5 = (undefined1 *)(local_8 + 4U & 0xfffffffc);
    *(undefined4 *)(&stack0xffffffe8 + iVar6) = 0x478c9e;
    iVar2 = -(int)puVar5;
    puVar8 = &stack0xffffffec + iVar2 + iVar6;
    puVar7 = &stack0xffffffec + iVar2 + iVar6;
    puVar4 = &stack0xffffffec + iVar2 + iVar6;
    if (&stack0xffffffec + iVar6 != puVar5) {
      *(int *)(&stack0xffffffe8 + iVar2 + iVar6) = local_8 + 1;
      *(undefined4 *)(&stack0xffffffe4 + iVar2 + iVar6) = 0;
      *(uint **)(&stack0xffffffe0 + iVar2 + iVar6) = param_2;
      *(undefined1 **)(&stack0xffffffdc + iVar2 + iVar6) = &stack0xffffffec + iVar2 + iVar6;
      *(undefined4 *)(&stack0xffffffd8 + iVar2 + iVar6) = 0x478cb1;
      FUN_00403350(*(int *)(&stack0xffffffdc + iVar2 + iVar6),
                   *(uint **)(&stack0xffffffe0 + iVar2 + iVar6),
                   *(int *)(&stack0xffffffe4 + iVar2 + iVar6),
                   *(uint *)(&stack0xffffffe8 + iVar2 + iVar6));
      goto LAB_00478cc7;
    }
  }
  puVar7 = puVar4;
  puVar8 = &DAT_004fc400;
LAB_00478cc7:
  *(undefined4 *)(puVar7 + -4) = 0;
  *(undefined1 **)(puVar7 + -8) = puVar8;
  *(undefined1 **)(puVar7 + -0xc) = &stack0xffffffec + iVar6;
  *(undefined4 *)(puVar7 + -0x10) = 0x478cd5;
  iVar6 = FUN_0049ef10(&DAT_004fc480,*(byte **)(puVar7 + -0xc),*(char **)(puVar7 + -8),
                       *(int *)(puVar7 + -4));
  return iVar6 != 0;
}


/* END FUNCTION 0x00478c10 */
