/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0047b180
 * Name: FUN_0047b180
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_0047b180(undefined4 param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  byte local_128 [4];
  uint local_124;
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b15db;
  local_c = ExceptionList;
  if ((*(int *)((int)DAT_004fc438 + 8) == 0) || (*(int *)((int)DAT_004fc438 + 0xc) == 0)) {
    return 0;
  }
  if ((((*(ushort *)(param_2 + 4) < 1000) &&
       (*(int *)(*(int *)((int)DAT_004fc438 + 8) + 0x24de4 + (uint)*(ushort *)(param_2 + 4) * 4) !=
        0)) && (*(ushort *)(param_2 + 8) < 2000)) &&
     (*(int *)(*(int *)((int)DAT_004fc438 + 0xc) + 0x2014 + (uint)*(ushort *)(param_2 + 8) * 4) != 0
     )) {
    ExceptionList = &local_c;
    FUN_0044d8a0(local_120);
    local_124 = (uint)*(ushort *)(param_2 + 8);
    local_4 = 0;
    FUN_0044df40(local_120,(byte *)&local_124,0x10,'\x01');
    local_128[0] = *(byte *)(param_2 + 0xc);
    FUN_0044df40(local_120,local_128,8,'\x01');
    pvVar3 = DAT_004fc438;
    uVar1 = *(ushort *)(param_2 + 8);
    iVar2 = FUN_00467470(*(void **)((int)DAT_004fc438 + 0xc),uVar1);
    pvVar3 = (void *)FUN_00463d80(*(void **)((int)pvVar3 + 8),*(ushort *)(param_2 + 4));
    if ((iVar2 == 0) || (pvVar3 == (void *)0x0)) {
      local_4 = 0xffffffff;
      FUN_0044d9b0((int)local_120);
      uVar4 = 0;
    }
    else {
      FUN_00483aa0(pvVar3,(uint)uVar1,'\0');
      if (*(short *)(param_2 + 0xc) == 0) {
        *(undefined2 *)(iVar2 + 0x6a) = *(undefined2 *)(param_2 + 4);
      }
      *(undefined2 *)((int)pvVar3 + 0x3022) = *(undefined2 *)(param_2 + 8);
      FUN_00486620(pvVar3,*(undefined4 *)(iVar2 + 0x3c),*(undefined4 *)(iVar2 + 0x40),
                   *(undefined4 *)(iVar2 + 0x44),'\x01');
      FUN_00483ee0(pvVar3,*(undefined4 *)(iVar2 + 0x3c),*(undefined4 *)(iVar2 + 0x40),
                   *(undefined4 *)(iVar2 + 0x44));
      FUN_00493c10(DAT_004fc438,&DAT_004be8dc,local_120,*(ushort *)(param_2 + 4),2);
      local_4 = 0xffffffff;
      FUN_0044d9b0((int)local_120);
      uVar4 = 1;
    }
    ExceptionList = local_c;
    return uVar4;
  }
  return 0;
}


/* END FUNCTION 0x0047b180 */
