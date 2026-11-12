/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10026db0
 * Name: FUN_10026db0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10026db0(undefined1 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  
  if (param_2 != (undefined4 *)0x0) {
    puVar1 = operator_new(param_3);
    *(uint *)(param_1 + 1) = param_3;
    *(undefined4 **)(param_1 + 5) = puVar1;
    for (uVar2 = param_3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar1 = *param_2;
      param_2 = param_2 + 1;
      puVar1 = puVar1 + 1;
    }
    for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
      *(undefined1 *)puVar1 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      puVar1 = (undefined4 *)((int)puVar1 + 1);
    }
    *param_1 = 0;
    return;
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = 0;
  return;
}


/* END FUNCTION 0x10026db0 */
