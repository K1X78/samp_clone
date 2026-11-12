/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100595c0
 * Name: FUN_100595c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100595c0(int param_1,int param_2,undefined4 *param_3,uint param_4,uint param_5,uint param_6
                 ,uint param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  uVar3 = param_7;
  for (iVar4 = 200; iVar4 != 0; iVar4 = iVar4 + -1) {
    *param_3 = 0;
    param_3 = param_3 + 1;
  }
  if (((param_5 != 0) && (param_7 != 0)) && (param_4 < param_5)) {
    puVar5 = (undefined4 *)(param_1 + param_4 * 4);
    uVar1 = param_5;
    uVar2 = param_6;
    uVar6 = param_4;
    do {
      for (; uVar2 < uVar3; uVar2 = uVar2 + 1) {
        FUN_100574b0(*puVar5,*(undefined4 *)(param_2 + uVar2 * 4),&param_4,&param_7);
        FUN_10058680(param_4,param_7,uVar2 + uVar6);
        uVar1 = param_5;
      }
      uVar6 = uVar6 + 1;
      puVar5 = puVar5 + 1;
      uVar2 = param_6;
    } while (uVar6 < uVar1);
  }
  return;
}


/* END FUNCTION 0x100595c0 */
