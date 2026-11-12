/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004784b0
 * Name: FUN_004784b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

bool __cdecl FUN_004784b0(int *param_1,int param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  void *this;
  int iVar3;
  uint *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined4 uStackY_34;
  int local_10;
  int local_c;
  uint *local_8;
  
  iVar7 = *(int *)(DAT_004fc438 + 8);
  if (iVar7 == 0) {
    return false;
  }
  uVar1 = *(ushort *)(param_2 + 4);
  if (999 < uVar1) {
    return false;
  }
  if (*(int *)(iVar7 + 0x24de4 + (uint)uVar1 * 4) == 0) {
    return false;
  }
  if (uVar1 < 1000) {
    local_c = *(int *)(iVar7 + 0x25d84 + (uint)uVar1 * 4);
  }
  else {
    local_c = 0;
  }
  FUN_00403100(param_1,*(int *)(param_2 + 8),(int *)&local_8);
  uStackY_34 = 0x478526;
  FUN_004031d0(local_8,&local_10);
  puVar4 = local_8;
  if (local_10 < 1) {
    return false;
  }
  puVar5 = (undefined1 *)(local_10 + 4U & 0xfffffffc);
  iVar7 = -(int)puVar5;
  if (&stack0xffffffe4 == puVar5) {
    return false;
  }
  *(int *)(&stack0xffffffe0 + iVar7) = local_10 + 1;
  *(undefined4 *)(&stack0xffffffdc + iVar7) = 0;
  *(uint **)(&stack0xffffffd8 + iVar7) = puVar4;
  *(undefined1 **)(&stack0xffffffd4 + iVar7) = &stack0xffffffe4 + iVar7;
  *(undefined4 *)(&stack0xffffffd0 + iVar7) = 0x478559;
  FUN_00403350(*(int *)(&stack0xffffffd4 + iVar7),*(uint **)(&stack0xffffffd8 + iVar7),
               *(int *)(&stack0xffffffdc + iVar7),*(uint *)(&stack0xffffffe0 + iVar7));
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  *(uint ***)(&stack0xffffffe0 + iVar7) = &local_8;
  *(undefined4 *)(&stack0xffffffdc + iVar7) = uVar2;
  *(int **)(&stack0xffffffd8 + iVar7) = param_1;
  *(undefined4 *)(&stack0xffffffd4 + iVar7) = 0x47856d;
  FUN_00403100(*(int **)(&stack0xffffffd8 + iVar7),*(int *)(&stack0xffffffdc + iVar7),
               *(int **)(&stack0xffffffe0 + iVar7));
  puVar4 = local_8;
  *(int **)(&stack0xffffffd4 + iVar7) = &local_10;
  *(uint **)(&stack0xffffffd0 + iVar7) = puVar4;
  *(undefined4 *)((int)&uStackY_34 + iVar7) = 0x47857a;
  FUN_004031d0(*(uint **)(&stack0xffffffd0 + iVar7),*(int **)(&stack0xffffffd4 + iVar7));
  puVar5 = &stack0xffffffe4 + iVar7;
  if (0 < local_10) {
    puVar6 = (undefined1 *)(local_10 + 4U & 0xfffffffc);
    *(undefined4 *)(&stack0xffffffe0 + iVar7) = 0x478594;
    iVar3 = -(int)puVar6;
    puVar9 = &stack0xffffffe4 + iVar3 + iVar7;
    puVar8 = &stack0xffffffe4 + iVar3 + iVar7;
    puVar5 = &stack0xffffffe4 + iVar3 + iVar7;
    if (&stack0xffffffe4 + iVar7 != puVar6) {
      *(int *)(&stack0xffffffe0 + iVar3 + iVar7) = local_10 + 1;
      *(undefined4 *)(&stack0xffffffdc + iVar3 + iVar7) = 0;
      *(uint **)(&stack0xffffffd8 + iVar3 + iVar7) = local_8;
      *(undefined1 **)(&stack0xffffffd4 + iVar3 + iVar7) = &stack0xffffffe4 + iVar3 + iVar7;
      *(undefined4 *)(&stack0xffffffd0 + iVar3 + iVar7) = 0x4785a7;
      FUN_00403350(*(int *)(&stack0xffffffd4 + iVar3 + iVar7),
                   *(uint **)(&stack0xffffffd8 + iVar3 + iVar7),
                   *(int *)(&stack0xffffffdc + iVar3 + iVar7),
                   *(uint *)(&stack0xffffffe0 + iVar3 + iVar7));
      goto LAB_004785b1;
    }
  }
  puVar8 = puVar5;
  puVar9 = &DAT_004fc400;
LAB_004785b1:
  this = *(void **)(local_c + 0x30cb);
  *(undefined4 *)(puVar8 + -4) = 0;
  *(undefined1 **)(puVar8 + -8) = puVar9;
  *(undefined1 **)(puVar8 + -0xc) = &stack0xffffffe4 + iVar7;
  *(undefined4 *)(puVar8 + -0x10) = 0x4785c3;
  iVar7 = FUN_00489050(this,*(byte **)(puVar8 + -0xc),*(char **)(puVar8 + -8),*(int *)(puVar8 + -4))
  ;
  return iVar7 != 0;
}


/* END FUNCTION 0x004784b0 */
