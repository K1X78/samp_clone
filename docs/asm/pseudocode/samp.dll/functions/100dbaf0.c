/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100dbaf0
 * Name: FUN_100dbaf0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100dbaf0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  
  puVar2 = (undefined4 *)((int)param_1 + 0x10a);
  puVar4 = (undefined4 *)(*param_1 + 0x4b80);
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)puVar2;
  piVar3 = param_1 + 0x4f;
  piVar5 = (int *)(*param_1 + 0x4bb4);
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar5 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar5 = piVar5 + 1;
  }
  *(short *)piVar5 = (short)*piVar3;
  *(undefined4 *)(*param_1 + 0x4be8) = *(undefined4 *)param_1[200];
  *(undefined4 *)(*param_1 + 0x4bec) = *(undefined4 *)(param_1[200] + 0x40);
  *(int *)(*param_1 + 0x4bb0) = param_1[0x4e];
  *(int *)(*param_1 + 0x4be4) = param_1[0x5b];
  return;
}


/* END FUNCTION 0x100dbaf0 */
