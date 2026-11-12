/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001f770
 * Name: FUN_1001f770
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_1001f770(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  puVar1 = operator_new(*param_1 + 7 >> 3);
  *param_2 = puVar1;
  uVar2 = *param_1 + 7 >> 3;
  puVar4 = (undefined4 *)param_1[3];
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar1 = puVar1 + 1;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar1 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    puVar1 = (undefined4 *)((int)puVar1 + 1);
  }
  return *param_1;
}


/* END FUNCTION 0x1001f770 */
