/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10059db0
 * Name: FUN_10059db0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10059db0(int param_1,int param_2,undefined4 *param_3,uint param_4,uint param_5,uint param_6
                 ,uint param_7)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  if (((param_5 != 0) && (param_7 != 0)) && (param_4 < param_5)) {
    puVar2 = (undefined4 *)(param_1 + param_4 * 4);
    uVar1 = param_5;
    uVar4 = param_4;
    do {
      uVar3 = param_6;
      if (param_6 < param_7) {
        do {
          FUN_100574b0(*puVar2,*(undefined4 *)(param_2 + uVar3 * 4),&param_4,&param_3);
          FUN_10058d90(param_4,param_3,uVar3 + uVar4);
          uVar3 = uVar3 + 1;
          uVar1 = param_5;
        } while (uVar3 < param_7);
      }
      uVar4 = uVar4 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar4 < uVar1);
  }
  return;
}


/* END FUNCTION 0x10059db0 */
