/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0047b810
 * Name: FUN_0047b810
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

bool __cdecl FUN_0047b810(int *param_1,uint *param_2)

{
  byte bVar1;
  uint *puVar2;
  int iVar3;
  byte *pbVar4;
  uint *puVar5;
  byte *pbVar6;
  undefined4 local_12c [69];
  int local_18;
  uint *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar5 = param_2;
  local_8 = 0xffffffff;
  puStack_c = &LAB_004b165b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00403100(param_1,param_2[1],(int *)&param_2);
  FUN_004031d0(param_2,&local_18);
  if (0 < local_18) {
    iVar3 = -(local_18 + 4U & 0xfffffffc);
    pbVar6 = &stack0xfffffec8;
    if (&stack0x00000000 != (undefined1 *)0x138) {
      *(int *)((int)local_12c + iVar3 + -0x10) = local_18 + 1;
      *(undefined4 *)((int)local_12c + iVar3 + -0x14) = 0;
      *(uint **)((int)local_12c + iVar3 + -0x18) = param_2;
      *(undefined1 **)((int)local_12c + iVar3 + -0x1c) = &stack0xfffffec8;
      *(undefined4 *)((int)local_12c + iVar3 + -0x20) = 0x47b87f;
      FUN_00403350(*(int *)((int)local_12c + iVar3 + -0x1c),
                   *(uint **)((int)local_12c + iVar3 + -0x18),
                   *(int *)((int)local_12c + iVar3 + -0x14),
                   *(uint *)((int)local_12c + iVar3 + -0x10));
      goto LAB_0047b886;
    }
  }
  pbVar6 = (byte *)0x0;
LAB_0047b886:
  puVar2 = (uint *)puVar5[3];
  local_14 = (uint *)puVar5[2];
  if (pbVar6 == (byte *)0x0) {
    pbVar6 = &DAT_004fc400;
  }
  pbVar4 = pbVar6;
  do {
    bVar1 = *pbVar4;
    pbVar4 = pbVar4 + 1;
  } while (bVar1 != 0);
  puVar5 = (uint *)(pbVar4 + -(int)(pbVar6 + 1));
  if (puVar5 != (uint *)0x0) {
    FUN_0044d8a0(local_12c);
    local_8 = 0;
    param_2 = puVar2;
    FUN_0044df40(local_12c,(byte *)&param_2,0x20,'\x01');
    param_2 = local_14;
    FUN_0044df40(local_12c,(byte *)&param_2,0x20,'\x01');
    param_2 = puVar5;
    FUN_0044df40(local_12c,(byte *)&param_2,0x20,'\x01');
    FUN_0044dff0(local_12c,pbVar6,(uint)puVar5);
    FUN_00493960(DAT_004fc438,&DAT_004be8e8,local_12c,0xffff);
    local_8 = 0xffffffff;
    FUN_0044d9b0((int)local_12c);
  }
  ExceptionList = local_10;
  return puVar5 != (uint *)0x0;
}


/* END FUNCTION 0x0047b810 */
