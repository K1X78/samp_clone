/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100af1d0
 * Name: FUN_100af1d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


ushort __thiscall FUN_100af1d0(int param_1,undefined2 *param_2,undefined2 *param_3)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  undefined2 *puVar4;
  ushort uVar5;
  
  puVar4 = (undefined2 *)FUN_100a70f0();
  *param_2 = *puVar4;
  *param_3 = puVar4[1];
  uVar5 = (ushort)(0 < (short)puVar4[2]) << 1;
  if ((short)puVar4[2] < 0) {
    uVar5 = uVar5 | 1;
  }
  uVar5 = uVar5 << 1;
  if (0 < (short)puVar4[3]) {
    uVar5 = uVar5 | 1;
  }
  uVar5 = uVar5 << 1;
  if ((short)puVar4[3] < 0) {
    uVar5 = uVar5 | 1;
  }
  uVar5 = uVar5 << 1;
  if (puVar4[0x15] != 0) {
    uVar5 = uVar5 | 1;
  }
  uVar5 = uVar5 << 1;
  if (puVar4[0x13] != 0) {
    uVar5 = uVar5 | 1;
  }
  iVar2 = *(int *)(param_1 + 0x2a4);
  uVar5 = uVar5 << 1;
  if (((iVar2 != 0) && ((*(uint *)(iVar2 + 0x46c) & 0x100) != 0)) && (puVar4[5] != 0)) {
    uVar5 = uVar5 | 1;
  }
  uVar5 = uVar5 << 1;
  if (puVar4[6] != 0) {
    uVar5 = uVar5 | 1;
  }
  uVar5 = uVar5 << 1;
  if (((iVar2 != 0) && ((*(uint *)(iVar2 + 0x46c) & 0x100) != 0)) && (puVar4[7] != 0)) {
    uVar5 = uVar5 | 1;
  }
  uVar5 = uVar5 << 1;
  if (puVar4[0xe] != 0) {
    uVar5 = uVar5 | 1;
  }
  uVar5 = uVar5 << 1;
  if ((((iVar2 == 0) || ((*(uint *)(iVar2 + 0x46c) & 0x100) != 0)) ||
      ((piVar3 = *(int **)(*(int *)(iVar2 + 0x47c) + 0x10), piVar3 == (int *)0x0 ||
       (*piVar3 != 0x8705c4)))) && (puVar4[0xf] != 0)) {
    uVar5 = uVar5 | 1;
  }
  uVar5 = uVar5 << 1;
  if (puVar4[0x10] != 0) {
    uVar5 = uVar5 | 1;
  }
  uVar5 = uVar5 << 1;
  if (((((iVar2 == 0) ||
        (puVar1 = (uint *)((uint)*(byte *)(*(int *)(param_1 + 0x2a4) + 0x718) * 0x1c + 0x5a0 +
                          *(int *)(param_1 + 0x2a4)), puVar1 == (uint *)0x0)) || (*puVar1 < 0x10))
      || ((*puVar1 == 0x2e || (puVar1[3] != 0)))) && (puVar4[0x11] != 0)) {
    uVar5 = uVar5 | 1;
  }
  uVar5 = uVar5 << 1;
  if (puVar4[0x12] != 0) {
    uVar5 = uVar5 | 1;
  }
  uVar5 = uVar5 << 1;
  if (puVar4[4] != 0) {
    uVar5 = uVar5 | 1;
  }
  return uVar5;
}


/* END FUNCTION 0x100af1d0 */
