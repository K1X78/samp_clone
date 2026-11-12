/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049b690
 * Name: FUN_0049b690
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0049b690(int param_1,int param_2,undefined4 *param_3,uint param_4,uint param_5,uint param_6
                 ,uint param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  
  uVar3 = param_7;
  puVar6 = param_3;
  for (iVar4 = 200; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  if (((param_5 != 0) && (param_7 != 0)) && (param_4 < param_5)) {
    puVar5 = (uint *)(param_1 + param_4 * 4);
    uVar1 = param_5;
    uVar2 = param_6;
    uVar7 = param_4;
    do {
      for (; uVar2 < uVar3; uVar2 = uVar2 + 1) {
        FUN_00497ec0(*puVar5,*(uint *)(param_2 + uVar2 * 4),&param_4,&param_7);
        FUN_0049b240((int)param_3,param_7,param_4,param_7,uVar2 + uVar7);
        uVar1 = param_5;
      }
      uVar7 = uVar7 + 1;
      puVar5 = puVar5 + 1;
      uVar2 = param_6;
    } while (uVar7 < uVar1);
  }
  return;
}


/* END FUNCTION 0x0049b690 */
