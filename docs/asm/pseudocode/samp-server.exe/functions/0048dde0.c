/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048dde0
 * Name: FUN_0048dde0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0048dde0(int param_1)

{
  byte bVar1;
  int iVar2;
  void *this;
  int *piVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined1 auStackY_31dc8 [203676];
  uint local_214;
  int local_208;
  int local_200 [4];
  int aiStack_1f0 [124];
  
  uVar7 = 4;
  do {
    bVar1 = *(byte *)(uVar7 + 0x30534 + param_1);
    this = (void *)((bVar1 >> 1) - 1);
    iVar2 = FUN_0048c1e0(this,param_1 + 0x32966 +
                              (((bVar1 & 1 | 2) << ((byte)this & 0x1f)) - (uint)bVar1) * 2,
                         param_1 + 0x30d34);
    local_200[uVar7] = iVar2;
    uVar7 = uVar7 + 1;
  } while (uVar7 < 0x80);
  puVar6 = (undefined4 *)(param_1 + 0x31bd0);
  puVar4 = auStackY_31dc8 + -param_1;
  puVar5 = (undefined4 *)(param_1 + 0x317c8);
  local_208 = 4;
  do {
    local_214 = 0;
    if (*(int *)(param_1 + 0x88) != 0) {
      do {
        iVar2 = FUN_0048c1a0(6,local_214);
        puVar5[local_214] = iVar2;
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
      iVar2 = uVar7 + 0x30534;
      uVar7 = uVar7 + 1;
      *piVar3 = puVar5[*(byte *)(iVar2 + param_1)] + *(int *)(puVar4 + (int)piVar3);
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


/* END FUNCTION 0x0048dde0 */
