/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045c3d0
 * Name: FUN_0045c3d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined2 * __thiscall
FUN_0045c3d0(void *this,undefined2 *param_1,int param_2,uint param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  puVar1 = FUN_0045bd60((int *)((int)this + 0x728));
  if ((int)param_3 < 1) {
    *(undefined4 *)(puVar1 + 0x1a) = 0;
  }
  else {
    puVar2 = operator_new(param_3);
    *(undefined4 **)(puVar1 + 0x1a) = puVar2;
    puVar4 = (undefined4 *)(*(int *)(param_1 + 0x1a) + param_2);
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
  *(uint *)(puVar1 + 0x18) = param_3 * 8;
  *(undefined4 *)(puVar1 + 0x14) = 0;
  *(undefined4 *)(puVar1 + 0x16) = 0;
  *(undefined4 *)(puVar1 + 0x10) = param_4;
  *(undefined4 *)(puVar1 + 0x12) = param_5;
  puVar1[9] = param_1[9];
  *(undefined1 *)(puVar1 + 8) = *(undefined1 *)(param_1 + 8);
  *puVar1 = *param_1;
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(param_1 + 6);
  return puVar1;
}


/* END FUNCTION 0x0045c3d0 */
