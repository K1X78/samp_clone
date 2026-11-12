/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10059ef0
 * Name: FUN_10059ef0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10059ef0(int param_1,int param_2,undefined4 *param_3,uint param_4,uint param_5,uint param_6
                 ,uint param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  uVar3 = param_7;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  if (((param_5 != 0) && (param_7 != 0)) && (param_4 < param_5)) {
    puVar4 = (undefined4 *)(param_1 + param_4 * 4);
    uVar1 = param_5;
    uVar2 = param_6;
    uVar5 = param_4;
    do {
      for (; uVar2 < uVar3; uVar2 = uVar2 + 1) {
        FUN_100574b0(*puVar4,*(undefined4 *)(param_2 + uVar2 * 4),&param_4,&param_7);
        FUN_10059270(param_4,param_7,uVar2 + uVar5);
        uVar1 = param_5;
      }
      uVar5 = uVar5 + 1;
      puVar4 = puVar4 + 1;
      uVar2 = param_6;
    } while (uVar5 < uVar1);
  }
  return;
}


/* END FUNCTION 0x10059ef0 */
