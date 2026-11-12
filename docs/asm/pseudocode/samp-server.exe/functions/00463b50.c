/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00463b50
 * Name: FUN_00463b50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00463b50(void *this,byte *param_1,uint param_2,byte *param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  byte local_11;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined4 local_4;
  
  uVar1 = param_2 + 2;
  local_4 = 0;
  local_c = 0xd971;
  local_a = 0xce6d;
  local_8 = 0x58bf;
  local_11 = 0;
  if ((uVar1 & 7) != 0) {
    local_11 = 8 - ((byte)uVar1 & 7);
  }
  uVar2 = (uint)local_11;
  *param_4 = uVar1 + uVar2;
  uVar1 = FUN_0045af90();
  if (param_1 == param_3) {
    _memmove(param_3 + uVar2 + 2,param_1,param_2);
  }
  else {
    pbVar5 = param_3 + uVar2 + 2;
    for (uVar3 = param_2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pbVar5 = *(undefined4 *)param_1;
      param_1 = param_1 + 4;
      pbVar5 = pbVar5 + 4;
    }
    for (uVar3 = param_2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pbVar5 = *param_1;
      param_1 = param_1 + 1;
      pbVar5 = pbVar5 + 1;
    }
  }
  uVar3 = 0;
  param_3[1] = (char)uVar1 << 4 | local_11;
  if (uVar2 != 0) {
    do {
      uVar1 = FUN_0045af90();
      param_3[uVar3 + 2] = (byte)uVar1;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  FUN_0044e170(&local_c,(int)(param_3 + 1),uVar2 + 1 + param_2);
  *param_3 = (byte)local_4 << 4 ^ (byte)local_4;
  iVar4 = 0;
  if (0 < *param_4) {
    do {
      FUN_00463840(this,(uint *)(param_3 + iVar4),(uint *)(param_3 + iVar4 + 4));
      iVar4 = iVar4 + 8;
    } while (iVar4 < *param_4);
  }
  return;
}


/* END FUNCTION 0x00463b50 */
