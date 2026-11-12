/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00480d70
 * Name: FUN_00480d70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00480d70(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b15db;
  local_c = ExceptionList;
  if ((((DAT_004fc438 != (void *)0x0) && (*(int *)((int)DAT_004fc438 + 8) != 0)) &&
      (*(ushort *)(param_2 + 4) < 1000)) &&
     (*(int *)(*(int *)((int)DAT_004fc438 + 8) + 0x24de4 + (uint)*(ushort *)(param_2 + 4) * 4) != 0)
     ) {
    uVar1 = *(undefined4 *)(param_2 + 8);
    ExceptionList = &local_c;
    FUN_0044d8a0(local_120);
    local_134 = *(undefined4 *)(param_2 + 0x10);
    local_12c = *(undefined4 *)(param_2 + 0xc);
    local_130 = *(undefined4 *)(param_2 + 0x14);
    local_128 = *(undefined4 *)(param_2 + 0x18);
    local_4 = 0;
    local_124 = uVar1;
    FUN_0044df40(local_120,(byte *)&local_124,0x20,'\x01');
    FUN_0044df40(local_120,(byte *)&local_12c,0x20,'\x01');
    FUN_0044df40(local_120,(byte *)&local_134,0x20,'\x01');
    FUN_0044df40(local_120,(byte *)&local_130,0x20,'\x01');
    FUN_0044df40(local_120,(byte *)&local_128,0x20,'\x01');
    FUN_00493c10(DAT_004fc438,&DAT_004be99c,local_120,*(ushort *)(param_2 + 4),2);
    local_4 = 0xffffffff;
    FUN_0044d9b0((int)local_120);
  }
  ExceptionList = local_c;
  return 0;
}


/* END FUNCTION 0x00480d70 */
