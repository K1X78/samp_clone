/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00478240
 * Name: FUN_00478240
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 __cdecl FUN_00478240(int *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined4 local_14c [69];
  byte local_38 [32];
  int local_18;
  uint *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004b15fb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0044d8a0(local_14c);
  local_8 = 0;
  if (((*(int *)((int)DAT_004fc438 + 8) == 0) || (999 < *(ushort *)(param_2 + 4))) ||
     (*(int *)(*(int *)((int)DAT_004fc438 + 8) + 0x25d84 + (uint)*(ushort *)(param_2 + 4) * 4) == 0)
     ) goto LAB_00478306;
  FUN_00403100(param_1,*(int *)(param_2 + 8),(int *)&local_14);
  FUN_004031d0(local_14,&local_18);
  if (local_18 < 1) {
LAB_004782ee:
    pbVar4 = &DAT_004fc400;
  }
  else {
    iVar2 = -(local_18 + 4U & 0xfffffffc);
    pbVar4 = &stack0xfffffea8;
    if (&stack0x00000000 == (undefined1 *)0x158) goto LAB_004782ee;
    *(int *)((int)local_14c + iVar2 + -0x10) = local_18 + 1;
    *(undefined4 *)((int)local_14c + iVar2 + -0x14) = 0;
    *(uint **)((int)local_14c + iVar2 + -0x18) = local_14;
    *(undefined1 **)((int)local_14c + iVar2 + -0x1c) = &stack0xfffffea8;
    *(undefined4 *)((int)local_14c + iVar2 + -0x20) = 0x4782e9;
    FUN_00403350(*(int *)((int)local_14c + iVar2 + -0x1c),*(uint **)((int)local_14c + iVar2 + -0x18)
                 ,*(int *)((int)local_14c + iVar2 + -0x14),*(uint *)((int)local_14c + iVar2 + -0x10)
                );
  }
  pbVar3 = pbVar4;
  do {
    bVar1 = *pbVar3;
    pbVar3 = pbVar3 + 1;
  } while (bVar1 != 0);
  if ((uint)((int)pbVar3 - (int)(pbVar4 + 1)) < 0x20) {
    pbVar3 = pbVar4;
    do {
      bVar1 = *pbVar3;
      pbVar3[(int)(local_38 + -(int)pbVar4)] = bVar1;
      pbVar3 = pbVar3 + 1;
    } while (bVar1 != 0);
    FUN_0044dff0(local_14c,pbVar4,0x20);
    FUN_00493c10(DAT_004fc438,&DAT_004be878,local_14c,*(ushort *)(param_2 + 4),2);
    local_8 = 0xffffffff;
    FUN_0044d9b0((int)local_14c);
    ExceptionList = local_10;
    return 1;
  }
LAB_00478306:
  local_8 = 0xffffffff;
  FUN_0044d9b0((int)local_14c);
  ExceptionList = local_10;
  return 0;
}


/* END FUNCTION 0x00478240 */
