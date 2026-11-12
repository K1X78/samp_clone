/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0047b370
 * Name: FUN_0047b370
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 __cdecl FUN_0047b370(int *param_1,uint *param_2)

{
  byte bVar1;
  int iVar2;
  uint *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined4 local_128 [69];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar3 = param_2;
  local_8 = 0xffffffff;
  puStack_c = &LAB_004b163b;
  local_10 = ExceptionList;
  if ((((999 < (ushort)param_2[1]) ||
       (*(int *)(*(int *)((int)DAT_004fc438 + 8) + 0x24de4 + (uint)(ushort)param_2[1] * 4) == 0)) ||
      (999 < (ushort)param_2[2])) ||
     (*(int *)(*(int *)((int)DAT_004fc438 + 8) + 0x24de4 + (uint)(ushort)param_2[2] * 4) == 0)) {
    return 0;
  }
  ExceptionList = &local_10;
  FUN_00403100(param_1,param_2[3],(int *)&param_2);
  FUN_004031d0(param_2,&local_14);
  if (0 < local_14) {
    iVar2 = -(local_14 + 4U & 0xfffffffc);
    pbVar5 = &stack0xfffffecc;
    if (&stack0x00000000 != (undefined1 *)0x134) {
      *(int *)((int)local_128 + iVar2 + -0x10) = local_14 + 1;
      *(undefined4 *)((int)local_128 + iVar2 + -0x14) = 0;
      *(uint **)((int)local_128 + iVar2 + -0x18) = param_2;
      *(undefined1 **)((int)local_128 + iVar2 + -0x1c) = &stack0xfffffecc;
      *(undefined4 *)((int)local_128 + iVar2 + -0x20) = 0x47b425;
      FUN_00403350(*(int *)((int)local_128 + iVar2 + -0x1c),
                   *(uint **)((int)local_128 + iVar2 + -0x18),
                   *(int *)((int)local_128 + iVar2 + -0x14),
                   *(uint *)((int)local_128 + iVar2 + -0x10));
      goto LAB_0047b42f;
    }
  }
  pbVar5 = &DAT_004fc400;
LAB_0047b42f:
  pbVar4 = pbVar5;
  do {
    bVar1 = *pbVar4;
    pbVar4 = pbVar4 + 1;
  } while (bVar1 != 0);
  FUN_0044d8a0(local_128);
  param_2 = (uint *)(uint)(ushort)puVar3[2];
  local_8 = 0;
  FUN_0044df40(local_128,(byte *)&param_2,0x10,'\x01');
  param_2 = (uint *)CONCAT13((char)((int)pbVar4 - (int)(pbVar5 + 1)),param_2._0_3_);
  FUN_0044df40(local_128,(byte *)((int)&param_2 + 3),8,'\x01');
  FUN_0044dff0(local_128,pbVar5,(int)pbVar4 - (int)(pbVar5 + 1) & 0xff);
  FUN_00493c10(DAT_004fc438,&DAT_004be8e0,local_128,(ushort)puVar3[1],3);
  local_8 = 0xffffffff;
  FUN_0044d9b0((int)local_128);
  ExceptionList = local_10;
  return 1;
}


/* END FUNCTION 0x0047b370 */
