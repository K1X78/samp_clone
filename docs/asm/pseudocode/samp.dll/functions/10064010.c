/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10064010
 * Name: FUN_10064010
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10064010(int param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  if (*(uint *)(param_1 + 0xc) < iVar1 + param_3) {
    param_3 = *(uint *)(param_1 + 0xc) - iVar1;
  }
  puVar3 = (undefined4 *)(*(int *)(param_1 + 4) + iVar1);
  for (uVar2 = param_3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *param_2 = *puVar3;
    puVar3 = puVar3 + 1;
    param_2 = param_2 + 1;
  }
  for (uVar2 = param_3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)param_2 = *(undefined1 *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    param_2 = (undefined4 *)((int)param_2 + 1);
  }
  *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3;
  return;
}


/* END FUNCTION 0x10064010 */
