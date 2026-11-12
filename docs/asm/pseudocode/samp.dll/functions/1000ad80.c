/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000ad80
 * Name: FUN_1000ad80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_1000ad80(int param_1,uint param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (*(uint *)(param_1 + 0x14) < param_2) {
    FUN_100f8215();
  }
  uVar2 = *(int *)(param_1 + 0x14) - param_2;
  if (uVar2 < param_3) {
    param_3 = uVar2;
  }
  if (param_3 != 0) {
    puVar5 = (undefined4 *)(param_1 + 4);
    puVar4 = puVar5;
    puVar1 = puVar5;
    if (0xf < *(uint *)(param_1 + 0x18)) {
      puVar4 = (undefined4 *)*puVar5;
      puVar1 = (undefined4 *)*puVar5;
    }
    _memmove((void *)((int)puVar4 + param_2),(void *)((int)puVar1 + param_3 + param_2),
             uVar2 - param_3);
    iVar3 = *(int *)(param_1 + 0x14) - param_3;
    *(int *)(param_1 + 0x14) = iVar3;
    if (0xf < *(uint *)(param_1 + 0x18)) {
      puVar5 = (undefined4 *)*puVar5;
    }
    *(undefined1 *)((int)puVar5 + iVar3) = 0;
  }
  return param_1;
}


/* END FUNCTION 0x1000ad80 */
