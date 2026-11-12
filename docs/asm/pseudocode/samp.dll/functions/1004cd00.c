/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1004cd00
 * Name: FUN_1004cd00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1004cd00(int param_1,byte param_2)

{
  byte bVar1;
  byte bVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  int local_1c;
  int local_18;
  byte local_10 [16];
  
  local_1c = 0;
  if (param_2 != 0) {
    do {
      iVar8 = local_1c * 4;
      pbVar6 = local_10 + iVar8;
      uVar7 = 3;
      local_18 = 4;
      do {
        uVar4 = uVar7 - 2 & 0x80000003;
        if ((int)uVar4 < 0) {
          uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
        }
        bVar1 = FUN_1004cbb0(3,*(undefined1 *)(uVar4 + iVar8 + param_1));
        bVar2 = FUN_1004cbb0(2,pbVar6[param_1 - (int)local_10]);
        uVar4 = uVar7 - 1 & 0x80000003;
        if ((int)uVar4 < 0) {
          uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
        }
        uVar5 = uVar7 & 0x80000003;
        if ((int)uVar5 < 0) {
          uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
        }
        uVar7 = uVar7 + 1;
        *pbVar6 = bVar1 ^ bVar2 ^ *(byte *)(uVar4 + iVar8 + param_1) ^
                  *(byte *)(uVar5 + iVar8 + param_1);
        pbVar6 = pbVar6 + 1;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
      local_1c = local_1c + 1;
    } while (local_1c < (int)(uint)param_2);
  }
  iVar8 = 0;
  do {
    uVar7 = (uint)param_2;
    if (uVar7 != 0) {
      puVar3 = (undefined1 *)(iVar8 + param_1);
      do {
        *puVar3 = puVar3[(int)(local_10 + -param_1)];
        puVar3 = puVar3 + 4;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 4);
  return;
}


/* END FUNCTION 0x1004cd00 */
