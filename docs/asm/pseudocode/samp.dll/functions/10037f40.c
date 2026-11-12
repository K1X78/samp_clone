/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10037f40
 * Name: FUN_10037f40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10037f40(int param_1,undefined4 *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x333);
  if (param_2 == (undefined4 *)0x0) {
    *param_3 = uVar1;
    return;
  }
  if ((int)uVar1 < (int)*param_3) {
    *param_3 = uVar1;
  }
  uVar1 = *param_3;
  if (0 < (int)uVar1) {
    puVar3 = (undefined4 *)(param_1 + 0x233);
    for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *param_2 = *puVar3;
      puVar3 = puVar3 + 1;
      param_2 = param_2 + 1;
    }
    for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined1 *)param_2 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      param_2 = (undefined4 *)((int)param_2 + 1);
    }
  }
  return;
}


/* END FUNCTION 0x10037f40 */
