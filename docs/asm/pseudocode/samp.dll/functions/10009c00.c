/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10009c00
 * Name: FUN_10009c00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10009c00(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  char local_139;
  ushort local_138 [2];
  int local_134;
  int local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  int local_120;
  uint local_118;
  int local_114;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10112bbb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f300(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 8),0);
  local_4 = 0;
  if (*(int *)(param_1 + 0x3cd) != 5) {
    local_4 = 0xffffffff;
    FUN_1001f390();
    ExceptionList = local_c;
    return;
  }
  local_139 = '\0';
  local_134 = 0;
  iVar2 = *(int *)(*(int *)(param_1 + 0x3de) + 8);
  local_130 = 0;
  FUN_1001f470(&local_139,8,1);
  FUN_1001f470(&local_134,0x20,1);
  cVar4 = local_139;
  if (local_134 != 0) {
    do {
      FUN_1001f470(local_138,0x10,1);
      uVar1 = local_118 + 1;
      if (local_120 < (int)uVar1) {
        if (cVar4 != '\0') goto LAB_10009d25;
      }
      else {
        uVar3 = local_118 & 0x80000007;
        if ((int)uVar3 < 0) {
          uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
        }
        if ((*(byte *)(((int)local_118 >> 3) + local_114) & (byte)(0x80 >> ((byte)uVar3 & 0x1f))) ==
            0) {
          cVar4 = '\0';
          local_118 = uVar1;
        }
        else {
          cVar4 = '\x01';
          local_118 = uVar1;
LAB_10009d25:
          FUN_1001f470(&local_128,0x10,1);
          FUN_1001f470(&local_12c,0x10,1);
          FUN_1001f470(&local_124,0x10,1);
        }
      }
      if ((local_138[0] < 0x3ec) && (*(int *)(iVar2 + (uint)local_138[0] * 4 + 0xfd6) != 0)) {
        if (cVar4 == '\0') {
          FUN_10014390(0);
        }
        else {
          FUN_100143d0(local_128,local_12c,local_124);
        }
      }
      local_130 = local_130 + 1;
    } while (local_130 != local_134);
  }
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10009c00 */
