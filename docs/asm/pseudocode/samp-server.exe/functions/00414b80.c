/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00414b80
 * Name: FUN_00414b80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


byte __thiscall FUN_00414b80(void *this,int param_1)

{
  int iVar1;
  int in_EAX;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 extraout_ECX;
  uint uVar4;
  undefined4 *puVar5;
  
  if ((int)this < 0x20) {
    this = (void *)0x20;
  }
  uVar2 = FUN_004080b0(*(int *)(param_1 + 0x10));
  if ((int)uVar2 < (int)this) {
    if ((in_EAX == 0) || (*(int *)(param_1 + 0x14) != *(int *)(param_1 + 0x24))) {
      FUN_00408130(*(int *)(param_1 + 0x10));
      puVar3 = FUN_00412930((int)this);
    }
    else {
      puVar3 = FUN_00412a50(extraout_ECX,(int)this);
      *(undefined4 **)(param_1 + 0x14) = puVar3;
      in_EAX = 0;
    }
    *(undefined4 **)(param_1 + 0x24) = puVar3;
  }
  puVar3 = *(undefined4 **)(param_1 + 0x14);
  if ((((puVar3 != (undefined4 *)0x0) && (in_EAX != 0)) &&
      (puVar5 = *(undefined4 **)(param_1 + 0x24), puVar5 != (undefined4 *)0x0)) &&
     (puVar3 != puVar5)) {
    uVar2 = *(uint *)(param_1 + 0x18);
    for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
  }
  if (((*(byte *)(param_1 + 0x1d) & 4) != 0) && (*(code **)(param_1 + 0x20) != (code *)0x0)) {
    (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x14));
  }
  iVar1 = *(int *)(param_1 + 0x24);
  *(int *)(param_1 + 0x14) = iVar1;
  if (iVar1 == 0) {
    *(undefined2 *)(param_1 + 0x1c) = 1;
  }
  else {
    *(byte *)(param_1 + 0x1d) = *(byte *)(param_1 + 0x1d) & 0xe7;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  return (iVar1 != 0) - 1U & 7;
}


/* END FUNCTION 0x00414b80 */
