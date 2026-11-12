/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049b7c0
 * Name: FUN_0049b7c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0049b7c0(int param_1,int param_2,undefined4 *param_3,uint param_4,uint param_5,uint param_6
                 ,uint param_7)

{
  undefined4 *puVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  
  puVar1 = param_3;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  if (((param_5 != 0) && (param_7 != 0)) && (param_4 < param_5)) {
    puVar3 = (uint *)(param_1 + param_4 * 4);
    uVar2 = param_5;
    uVar5 = param_4;
    do {
      uVar4 = param_6;
      if (param_6 < param_7) {
        do {
          FUN_00497ec0(*puVar3,*(uint *)(param_2 + uVar4 * 4),&param_4,&param_3);
          FUN_0049b440((int)puVar1,param_4,param_4,(uint)param_3,uVar4 + uVar5);
          uVar4 = uVar4 + 1;
          uVar2 = param_5;
        } while (uVar4 < param_7);
      }
      uVar5 = uVar5 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar5 < uVar2);
  }
  return;
}


/* END FUNCTION 0x0049b7c0 */
