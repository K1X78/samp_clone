/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00495860
 * Name: FUN_00495860
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00495860(void *this,ushort *param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  byte local_129;
  undefined4 local_128;
  undefined4 local_124;
  undefined1 local_120 [276];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b1b8b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0044d930(local_120,*(undefined4 **)(param_1 + 8),*(uint *)(param_1 + 4),'\0');
  iVar2 = *(int *)((int)this + 8);
  uVar1 = *param_1;
  local_4 = 0;
  FUN_0044da70(local_120,&local_129,8,'\x01');
  FUN_0044da70(local_120,(byte *)&local_128,0x20,'\x01');
  FUN_0044da70(local_120,(byte *)&local_124,0x20,'\x01');
  if (((iVar2 != 0) && (uVar1 < 1000)) &&
     (uVar3 = (uint)uVar1, *(int *)(iVar2 + 0x24de4 + uVar3 * 4) != 0)) {
    *(undefined4 *)(iVar2 + 0x2334 + uVar3 * 4) = local_128;
    *(undefined4 *)(iVar2 + 0x32d4 + uVar3 * 4) = local_124;
  }
  local_4 = 0xffffffff;
  FUN_0044d9b0((int)local_120);
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x00495860 */
