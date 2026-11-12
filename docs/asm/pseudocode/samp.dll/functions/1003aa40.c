/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003aa40
 * Name: FUN_1003aa40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1003aa40(undefined4 *param_1,int param_2,int param_3,int param_4,undefined1 param_5,
                 undefined4 param_6,undefined2 param_7,undefined1 param_8,int param_9)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  piVar1 = (int *)FUN_10038f00();
  uVar4 = param_2 + 7 >> 3;
  puVar2 = operator_new(uVar4);
  *(undefined4 **)((int)piVar1 + 0x21) = puVar2;
  for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar2 = *(undefined1 *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  *piVar1 = param_2;
  piVar1[1] = param_3;
  piVar1[2] = param_4;
  *(undefined1 *)(piVar1 + 3) = param_5;
  *(undefined4 *)((int)piVar1 + 0xd) = param_6;
  *(undefined2 *)((int)piVar1 + 0x11) = param_7;
  *(undefined1 *)((int)piVar1 + 0x13) = param_8;
  piVar1[5] = param_9;
  *(undefined4 *)((int)piVar1 + 0x25) = 0;
  FUN_10038f40();
  return;
}


/* END FUNCTION 0x1003aa40 */
