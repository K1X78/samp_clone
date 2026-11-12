/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0047b970
 * Name: FUN_0047b970
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 __cdecl FUN_0047b970(int *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  undefined4 local_134 [69];
  int local_20;
  uint *local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004b167b;
  local_10 = ExceptionList;
  if (*(int *)((int)DAT_004fc438 + 8) == 0) {
    return 0;
  }
  if (999 < *(ushort *)(param_2 + 4)) {
    return 0;
  }
  if (*(int *)(*(int *)((int)DAT_004fc438 + 8) + 0x24de4 + (uint)*(ushort *)(param_2 + 4) * 4) == 0)
  {
    return 0;
  }
  ExceptionList = &local_10;
  FUN_00403100(param_1,*(int *)(param_2 + 8),(int *)&local_1c);
  FUN_004031d0(local_1c,&local_20);
  if (0 < local_20) {
    iVar2 = -(local_20 + 4U & 0xfffffffc);
    pbVar5 = &stack0xfffffec0;
    if (&stack0x00000000 != (undefined1 *)0x140) {
      *(int *)((int)local_134 + iVar2 + -0x10) = local_20 + 1;
      *(undefined4 *)((int)local_134 + iVar2 + -0x14) = 0;
      *(uint **)((int)local_134 + iVar2 + -0x18) = local_1c;
      *(undefined1 **)((int)local_134 + iVar2 + -0x1c) = &stack0xfffffec0;
      *(undefined4 *)((int)local_134 + iVar2 + -0x20) = 0x47ba0f;
      FUN_00403350(*(int *)((int)local_134 + iVar2 + -0x1c),
                   *(uint **)((int)local_134 + iVar2 + -0x18),
                   *(int *)((int)local_134 + iVar2 + -0x14),
                   *(uint *)((int)local_134 + iVar2 + -0x10));
      goto LAB_0047ba16;
    }
  }
  pbVar5 = (byte *)0x0;
LAB_0047ba16:
  local_14 = *(uint *)(param_2 + 0xc);
  local_18 = *(undefined4 *)(param_2 + 0x10);
  if (pbVar5 == (byte *)0x0) {
    pbVar5 = &DAT_004fc400;
  }
  pbVar3 = pbVar5;
  do {
    bVar1 = *pbVar3;
    pbVar3 = pbVar3 + 1;
  } while (bVar1 != 0);
  uVar4 = (int)pbVar3 - (int)(pbVar5 + 1);
  if (uVar4 == 0) {
    ExceptionList = local_10;
    return 0;
  }
  FUN_0044d8a0(local_134);
  local_8 = 0;
  FUN_0044df40(local_134,(byte *)&local_18,0x20,'\x01');
  FUN_0044df40(local_134,(byte *)&local_14,0x20,'\x01');
  local_14 = uVar4;
  FUN_0044df40(local_134,(byte *)&local_14,0x20,'\x01');
  FUN_0044dff0(local_134,pbVar5,uVar4);
  FUN_00493c10(DAT_004fc438,&DAT_004be8e8,local_134,*(ushort *)(param_2 + 4),3);
  local_8 = 0xffffffff;
  FUN_0044d9b0((int)local_134);
  ExceptionList = local_10;
  return 1;
}


/* END FUNCTION 0x0047b970 */
