/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001f170
 * Name: FUN_1001f170
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1001f170(undefined1 *param_1,undefined4 *param_2,uint *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  uVar1 = DAT_10156b90;
  uVar2 = FUN_1001f0f0(param_2,*param_3);
  *param_1 = uVar2;
  uVar4 = *param_3;
  puVar5 = (undefined4 *)(param_1 + 1);
  for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = *param_2;
    param_2 = param_2 + 1;
    puVar5 = puVar5 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar5 = *(undefined1 *)param_2;
    param_2 = (undefined4 *)((int)param_2 + 1);
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  FUN_1001f120(0,uVar1,param_1 + 1,*param_3);
  *param_3 = *param_3 + 1;
  return;
}


/* END FUNCTION 0x1001f170 */
