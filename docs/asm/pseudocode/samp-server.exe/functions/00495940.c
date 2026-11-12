/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00495940
 * Name: FUN_00495940
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00495940(void *this,undefined2 *param_1)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  byte local_136;
  byte local_135;
  undefined2 local_134 [2];
  ushort local_130 [3];
  byte local_129;
  undefined2 local_128 [2];
  uint local_124;
  undefined1 local_120 [276];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b1b8b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0044d930(local_120,*(undefined4 **)(param_1 + 8),*(uint *)(param_1 + 4),'\0');
  iVar1 = *(int *)((int)this + 8);
  local_4 = 0;
  local_124 = CONCAT22(local_124._2_2_,*param_1);
  if (*(int *)((int)this + 0x5e) == 1) {
    bVar2 = 0;
    if (3 < *(uint *)(param_1 + 4)) {
      bVar2 = (byte)(*(uint *)(param_1 + 4) - 3 >> 2);
    }
    FUN_0044da70(local_120,&local_129,8,'\x01');
    if ((((iVar1 != 0) && ((ushort)local_124 < 1000)) &&
        (*(int *)(iVar1 + 0x24de4 + (local_124 & 0xffff) * 4) != 0)) &&
       (iVar1 = *(int *)(iVar1 + 0x25d84 + (local_124 & 0xffff) * 4), iVar1 != 0)) {
      FUN_0044da70(local_120,(byte *)local_134,0x10,'\x01');
      FUN_0044da70(local_120,(byte *)local_128,0x10,'\x01');
      *(undefined2 *)(iVar1 + 0x3076) = local_134[0];
      *(undefined2 *)(iVar1 + 0x3078) = local_128[0];
      if (bVar2 != 0) {
        uVar3 = (uint)bVar2;
        do {
          FUN_0044da70(local_120,&local_136,8,'\x01');
          FUN_0044da70(local_120,&local_135,8,'\x01');
          FUN_0044da70(local_120,(byte *)local_130,0x10,'\x01');
          if (local_136 < 0xd) {
            *(uint *)(iVar1 + 0x3034 + (uint)local_136 * 4) = (uint)local_130[0];
            *(byte *)(local_136 + 0x3068 + iVar1) = local_135;
          }
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
    }
    local_4 = 0xffffffff;
    FUN_0044d9b0((int)local_120);
  }
  else {
    local_4 = 0xffffffff;
    FUN_0044d9b0((int)local_120);
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x00495940 */
