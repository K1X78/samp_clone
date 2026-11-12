/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10046a00
 * Name: FUN_10046a00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_10046a00(int *param_1,int param_2,char param_3)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  int local_12c;
  uint local_128;
  uint local_124;
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011544b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f1f0();
  uVar10 = 0;
  local_4 = 0;
  local_128 = 0;
  iVar2 = FUN_10045850();
  iVar4 = 0;
  if (iVar2 != 0) {
    local_12c = 0x31;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      if (param_2 < local_12c) break;
      psVar3 = (short *)FUN_10045840(uVar10);
      iVar4 = FUN_10045840(uVar10);
      if (*psVar3 == *(short *)(iVar4 + 2)) {
        FUN_1001f9f0();
      }
      else {
        FUN_1001f9d0();
      }
      puVar5 = (ushort *)FUN_10045840(uVar10);
      local_124 = (uint)*puVar5;
      FUN_1001faa0(&local_124,0x10,1);
      iVar4 = iVar2 + 0x11;
      psVar3 = (short *)FUN_10045840(uVar10);
      iVar6 = FUN_10045840(uVar10);
      iVar1 = local_12c + 0x11;
      if (*psVar3 != *(short *)(iVar6 + 2)) {
        iVar4 = FUN_10045840(uVar10);
        local_124 = (uint)*(ushort *)(iVar4 + 2);
        FUN_1001faa0(&local_124,0x10,1);
        iVar4 = iVar2 + 0x21;
        iVar1 = local_12c + 0x21;
      }
      local_12c = iVar1;
      local_128 = local_128 + 1;
      uVar10 = uVar10 + 1;
      uVar7 = FUN_10045850();
      iVar2 = iVar4;
    } while (uVar10 < uVar7);
  }
  iVar2 = *param_1;
  local_124 = local_128;
  FUN_1001fbf0(&local_124,0x10,1);
  iVar1 = *param_1;
  FUN_1001f880(local_120,local_120[0]);
  if ((param_3 != '\0') && ((short)local_128 != 0)) {
    uVar10 = FUN_10045850();
    local_128 = local_128 & 0xffff;
    uVar7 = 0;
    if (uVar10 != local_128) {
      do {
        puVar8 = (undefined4 *)FUN_10045840(local_128 + uVar7);
        puVar9 = (undefined4 *)FUN_10045840(uVar7);
        uVar7 = uVar7 + 1;
        *puVar9 = *puVar8;
      } while (uVar7 < uVar10 - local_128);
    }
    FUN_10045af0(local_128);
  }
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return iVar4 + (iVar1 - iVar2);
}


/* END FUNCTION 0x10046a00 */
