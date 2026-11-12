/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f0ea0
 * Name: FUN_100f0ea0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100f0ea0(int param_1,undefined4 *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (((((param_1 != 0) && (*(int *)(param_1 + 0x20) != 0)) && (*(int *)(param_1 + 0x24) != 0)) &&
      ((piVar1 = *(int **)(param_1 + 0x1c), piVar1 != (int *)0x0 && (*piVar1 == param_1)))) &&
     ((0x3f33 < piVar1[1] && (piVar1[1] < 0x3f54)))) {
    if ((piVar1[0xc] != 0) && (param_2 != (undefined4 *)0x0)) {
      uVar2 = piVar1[0xc] - piVar1[0xd];
      puVar4 = (undefined4 *)(piVar1[0xe] + piVar1[0xd]);
      puVar5 = param_2;
      for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      uVar3 = piVar1[0xd];
      puVar4 = (undefined4 *)piVar1[0xe];
      puVar5 = (undefined4 *)((piVar1[0xc] - uVar3) + (int)param_2);
      for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
    }
    if (param_3 != (int *)0x0) {
      *param_3 = piVar1[0xc];
    }
    return 0;
  }
  return 0xfffffffe;
}


/* END FUNCTION 0x100f0ea0 */
