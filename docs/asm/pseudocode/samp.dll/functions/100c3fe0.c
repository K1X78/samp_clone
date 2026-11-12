/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c3fe0
 * Name: FUN_100c3fe0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100c3fe0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined1 auStack_31dbd [203673];
  uint local_214;
  int local_208;
  undefined4 local_200 [4];
  undefined4 auStack_1f0 [124];
  
  uVar7 = 4;
  do {
    uVar2 = FUN_100c23f0();
    local_200[uVar7] = uVar2;
    uVar7 = uVar7 + 1;
  } while (uVar7 < 0x80);
  puVar6 = (undefined4 *)(param_1 + 0x31bc5);
  puVar4 = auStack_31dbd + -param_1;
  puVar5 = (undefined4 *)(param_1 + 0x317bd);
  local_208 = 4;
  do {
    local_214 = 0;
    if (*(int *)(param_1 + 0x88) != 0) {
      do {
        uVar2 = FUN_100c23b0();
        puVar5[local_214] = uVar2;
        local_214 = local_214 + 1;
      } while (local_214 < *(uint *)(param_1 + 0x88));
    }
    uVar7 = 0xe;
    if (0xe < *(uint *)(param_1 + 0x88)) {
      do {
        puVar5[uVar7] = puVar5[uVar7] + ((uVar7 >> 1) - 5) * 0x10;
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(param_1 + 0x88));
    }
    puVar6[-2] = *puVar5;
    puVar6[-1] = puVar5[1];
    *puVar6 = puVar5[2];
    puVar6[1] = puVar5[3];
    uVar7 = 4;
    piVar3 = puVar6 + 2;
    do {
      iVar1 = uVar7 + 0x30529;
      uVar7 = uVar7 + 1;
      *piVar3 = puVar5[*(byte *)(iVar1 + param_1)] + *(int *)(puVar4 + (int)piVar3);
      piVar3 = piVar3 + 1;
    } while (uVar7 < 0x80);
    puVar4 = puVar4 + -0x200;
    puVar6 = puVar6 + 0x80;
    puVar5 = puVar5 + 0x40;
    local_208 = local_208 + -1;
  } while (local_208 != 0);
  *(undefined4 *)(param_1 + 0x80) = 0;
  return;
}


/* END FUNCTION 0x100c3fe0 */
