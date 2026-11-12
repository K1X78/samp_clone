/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10021330
 * Name: FUN_10021330
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10021330(int param_1,int *param_2,undefined4 param_3,undefined2 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined1 local_124 [4];
  undefined1 local_120 [248];
  void *pvStack_28;
  undefined4 uStack_20;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10113f5b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_1001f1f0();
  local_4 = 0;
  local_124[0] = 0x39;
  FUN_1001faa0(local_124,8,1);
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar4 = 0;
  puVar3 = local_120;
  uVar2 = 0x100;
  FUN_100536f0(uVar1,0x100,puVar3,0);
  FUN_10053c60(uVar1,uVar2,puVar3,uVar4);
  (**(code **)(*param_2 + 0x30))(local_120,3,9,0x1f,param_3,param_4,0);
  uStack_20 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = pvStack_28;
  return;
}


/* END FUNCTION 0x10021330 */
