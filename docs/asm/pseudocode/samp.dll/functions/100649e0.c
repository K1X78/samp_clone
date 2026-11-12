/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100649e0
 * Name: FUN_100649e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_100649e0(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  uint unaff_EBX;
  uint uVar5;
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10115fa8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_100654e0();
  uVar5 = ((uint *)*param_2)[1];
  iVar1 = param_2[3];
  uVar5 = ((uVar5 ^ 0x3d3e7) << 0xd | (uVar5 ^ 0xc107ffff) >> 0x13) ^
          *(uint *)*param_2 & *(uint *)(param_1 + 0x92d);
  local_4 = 0;
  if (iVar1 != 0) {
    local_4 = 0xffffffff;
    FUN_10065530();
    ExceptionList = local_c;
    return iVar1;
  }
  uVar2 = uVar5 >> 8;
  uVar3 = uVar2;
  if ((uVar2 & 0x7ff) != 0) {
    uVar3 = uVar2 + (0x800 - (uVar2 & 0x7ff));
  }
  pvVar4 = operator_new(uVar3);
  param_2[3] = (int)pvVar4;
  iVar1 = *(int *)(param_1 + 0x119) * 2 + 0x10;
  while ((uVar5 & 0xff) != (*(uint *)(param_1 + 0x115) >> 5 & 0xff)) {
    uVar3 = *(uint *)(param_1 + 0x121 + (uVar5 & 0xff) * 8);
    uVar5 = ((uVar3 ^ 0x3d3e7) << 0xd | (uVar3 ^ 0xc107ffff) >> 0x13) ^
            *(uint *)(param_1 + 0x92d) & *(uint *)(param_1 + 0x11d + (uVar5 & 0xff) * 8);
    uVar3 = uVar5 >> 8;
    if ((uVar3 & 0x7ff) != 0) {
      uVar3 = uVar3 + (0x800 - (uVar3 & 0x7ff));
    }
    iVar1 = iVar1 + uVar3;
  }
  (**(code **)(**(int **)(param_1 + 0x14) + 0x14))(iVar1);
  FUN_10065540(uVar2 % (*(int *)(param_1 + 0x931) * 8 - 0x10U) + 0x11d + param_1,0);
  if (unaff_EBX != 0) {
    uVar5 = 0;
    do {
      (**(code **)(**(int **)(param_1 + 0x14) + 8))(param_2[3] + uVar5,0x800);
      FUN_10065640(0x800,param_2[3] + uVar5);
      uVar5 = uVar5 + 0x800;
    } while (uVar5 < unaff_EBX);
  }
  iVar1 = param_2[3];
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_10065530();
  ExceptionList = pvStack_10;
  return iVar1;
}


/* END FUNCTION 0x100649e0 */
