/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10045570
 * Name: FUN_10045570
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined2 *
FUN_10045570(undefined2 *param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined2 *)FUN_10044ec0();
  if ((int)param_3 < 1) {
    *(undefined4 *)((int)puVar1 + 0x2f) = 0;
  }
  else {
    puVar2 = operator_new(param_3);
    *(undefined4 **)((int)puVar1 + 0x2f) = puVar2;
    puVar4 = (undefined4 *)(*(int *)((int)param_1 + 0x2f) + param_2);
    for (uVar3 = param_3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar2 = puVar2 + 1;
    }
    for (uVar3 = param_3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar2 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
  }
  *(uint *)((int)puVar1 + 0x2b) = param_3 * 8;
  *(undefined4 *)((int)puVar1 + 0x23) = 0;
  *(undefined4 *)((int)puVar1 + 0x27) = 0;
  *(undefined4 *)((int)puVar1 + 0x1b) = param_4;
  *(undefined4 *)((int)puVar1 + 0x1f) = param_5;
  *(undefined2 *)((int)puVar1 + 0xf) = *(undefined2 *)((int)param_1 + 0xf);
  *(undefined1 *)(puVar1 + 7) = *(undefined1 *)(param_1 + 7);
  *puVar1 = *param_1;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 3);
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 5);
  return puVar1;
}


/* END FUNCTION 0x10045570 */
