/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00404060
 * Name: FUN_00404060
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

int __cdecl FUN_00404060(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int aiStack_40 [9];
  undefined4 local_10;
  undefined1 *local_c;
  int local_8;
  
  aiStack_40[8] = 0x40406e;
  FUN_00403990();
  iVar7 = *(int *)(param_2 + 8);
  if (iVar7 < 1) {
    return 0;
  }
  if (*(int *)(param_2 + 0xc) != 0) {
    iVar7 = iVar7 * 4;
  }
  puVar3 = (undefined1 *)(iVar7 + 3U & 0xfffffffc);
  iVar5 = 0;
  aiStack_40[8] = 0x4040a9;
  iVar2 = -(int)puVar3;
  local_c = &stack0xffffffe4 + iVar2;
  if (&stack0xffffffe4 != puVar3) {
    local_8 = iVar7;
    *(undefined4 *)((int)aiStack_40 + iVar2 + 0x20) = 0x4040bb;
    iVar4 = __getch();
    while (iVar4 != -1) {
      if (iVar4 == 0xd) goto LAB_00404106;
      iVar6 = iVar7 + -1;
      iVar7 = local_8;
      if (iVar6 <= iVar5) break;
      local_c[iVar5] = (char)iVar4;
      *(int *)((int)aiStack_40 + iVar2 + 0x20) = (int)(char)iVar4;
      iVar5 = iVar5 + 1;
      *(undefined4 *)((int)aiStack_40 + iVar2 + 0x1c) = 0x4040e1;
      __fputchar(*(int *)((int)aiStack_40 + iVar2 + 0x20));
      *(undefined4 **)((int)aiStack_40 + iVar2 + 0x1c) = &DAT_004ebe38;
      *(undefined4 *)((int)aiStack_40 + iVar2 + 0x18) = 0x4040eb;
      _fflush(*(FILE **)((int)aiStack_40 + iVar2 + 0x1c));
      iVar7 = local_8;
      if (iVar5 < iVar6) {
        *(undefined4 *)((int)aiStack_40 + iVar2 + 0x20) = 0x4040f7;
        iVar4 = __getch();
        iVar7 = local_8;
      }
    }
    if (iVar4 == 0xd) {
LAB_00404106:
      *(undefined4 *)((int)aiStack_40 + iVar2 + 0x20) = 10;
      *(undefined4 *)((int)aiStack_40 + iVar2 + 0x1c) = 0x40410d;
      __fputchar(*(int *)((int)aiStack_40 + iVar2 + 0x20));
    }
    puVar3 = local_c;
    *(undefined4 **)((int)aiStack_40 + iVar2 + 0x20) = &local_10;
    puVar3[iVar5] = 0;
    *(undefined4 *)((int)aiStack_40 + iVar2 + 0x1c) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)((int)aiStack_40 + iVar2 + 0x18) = param_1;
    *(undefined4 *)((int)aiStack_40 + iVar2 + 0x14) = 0x40412b;
    FUN_00403100(*(int **)((int)aiStack_40 + iVar2 + 0x18),*(int *)((int)aiStack_40 + iVar2 + 0x1c),
                 *(int **)((int)aiStack_40 + iVar2 + 0x20));
    uVar1 = *(undefined4 *)(param_2 + 0xc);
    *(int *)((int)aiStack_40 + iVar2 + 0x14) = iVar7;
    *(undefined4 *)((int)aiStack_40 + iVar2 + 0x10) = 0;
    *(undefined4 *)((int)aiStack_40 + iVar2 + 0xc) = uVar1;
    *(undefined1 **)((int)aiStack_40 + iVar2 + 8) = puVar3;
    *(undefined4 *)((int)aiStack_40 + iVar2 + 4) = local_10;
    *(undefined4 *)((int)aiStack_40 + iVar2) = 0x40413f;
    FUN_00403250(*(undefined4 **)((int)aiStack_40 + iVar2 + 4),
                 *(short **)((int)aiStack_40 + iVar2 + 8),*(int *)((int)aiStack_40 + iVar2 + 0xc),
                 *(int *)((int)aiStack_40 + iVar2 + 0x10),*(uint *)((int)aiStack_40 + iVar2 + 0x14))
    ;
  }
  return iVar5;
}


/* END FUNCTION 0x00404060 */
