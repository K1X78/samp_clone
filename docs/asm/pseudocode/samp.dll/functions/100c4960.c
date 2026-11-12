/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c4960
 * Name: FUN_100c4960
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100c4960(int param_1)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  FUN_100c1fb0();
  puVar3 = (undefined2 *)(param_1 + 0x32595);
  puVar1 = (undefined2 *)(param_1 + 0x325dd);
  iVar6 = 0xc;
  do {
    iVar5 = 0x10;
    do {
      puVar1[-0xf0] = 0x400;
      *puVar1 = 0x400;
      puVar1 = puVar1 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    puVar3[-0xc] = 0x400;
    *puVar3 = 0x400;
    puVar3[0xc] = 0x400;
    puVar3[0x18] = 0x400;
    puVar3 = puVar3 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  uVar2 = 0x300 << ((char)*(undefined4 *)(param_1 + 0x48) + (char)*(undefined4 *)(param_1 + 0x4c) &
                   0x1fU);
  if (uVar2 != 0) {
    puVar7 = *(undefined4 **)(param_1 + 0x60);
    for (uVar4 = uVar2 >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = 0x4000400;
      puVar7 = puVar7 + 1;
    }
    for (uVar2 = (uint)((uVar2 & 1) != 0); uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined2 *)puVar7 = 0x400;
      puVar7 = (undefined4 *)((int)puVar7 + 2);
    }
  }
  puVar7 = (undefined4 *)(param_1 + 0x3275d);
  for (iVar6 = 0x80; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = 0x4000400;
    puVar7 = puVar7 + 1;
  }
  puVar7 = (undefined4 *)(param_1 + 0x3295d);
  for (iVar6 = 0x39; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = 0x4000400;
    puVar7 = puVar7 + 1;
  }
  FUN_100c2440();
  FUN_100c2440();
  *(undefined4 *)(param_1 + 0x32a41) = 0x4000400;
  *(undefined4 *)(param_1 + 0x32a45) = 0x4000400;
  *(undefined4 *)(param_1 + 0x32a49) = 0x4000400;
  *(undefined4 *)(param_1 + 0x32a4d) = 0x4000400;
  *(undefined4 *)(param_1 + 0x32a51) = 0x4000400;
  *(undefined4 *)(param_1 + 0x32a55) = 0x4000400;
  *(undefined4 *)(param_1 + 0x32a59) = 0x4000400;
  *(undefined4 *)(param_1 + 0x32a5d) = 0x4000400;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(int *)(param_1 + 0x58) = (1 << ((byte)*(undefined4 *)(param_1 + 0x50) & 0x1f)) + -1;
  *(int *)(param_1 + 0x54) = (1 << ((byte)*(undefined4 *)(param_1 + 0x4c) & 0x1f)) + -1;
  return;
}


/* END FUNCTION 0x100c4960 */
