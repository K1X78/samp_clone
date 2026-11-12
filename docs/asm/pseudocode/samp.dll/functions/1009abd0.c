/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009abd0
 * Name: FUN_1009abd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_1009abd0(void)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  int local_1c;
  
  iVar3 = FUN_100996f0();
  DAT_10181c28 = iVar3;
  FUN_10086cf0(9,4);
  FUN_1008c210();
  iVar4 = FUN_10099530();
  if (iVar4 == 0) {
    return -0x7fffbffb;
  }
  local_1c = 0;
  if (0 < *(int *)(iVar4 + 0x554)) {
    iVar7 = 0;
    do {
      puVar5 = (undefined4 *)(*(int *)(iVar4 + 0x550) + iVar7);
      if (puVar5[3] == iVar3) {
        FUN_1009a060(*puVar5,puVar5[1]);
      }
      local_1c = local_1c + 1;
      iVar7 = iVar7 + 0x10;
    } while (local_1c < *(int *)(iVar4 + 0x554));
  }
  FUN_10087e10(CONCAT22((undefined2)DAT_10181c34,(undefined2)DAT_10181c30));
  iVar3 = FUN_1009a2a0();
  if (-1 < iVar3) {
    FUN_10086cf0(0xd,4);
    FUN_1008c210();
    iVar3 = FUN_10099550();
    if (iVar3 == 0) {
      return -0x7fffbffb;
    }
    uVar6 = FUN_10099680();
    bVar1 = false;
    iVar4 = 0;
    bVar2 = false;
    if (0 < *(int *)(iVar3 + 0x13c)) {
      do {
        bVar1 = bVar2;
        iVar7 = *(int *)(*(int *)(iVar3 + 0x138) + iVar4 * 4);
        if ((*(uint *)(iVar7 + 0x10) == (uVar6 & 0xff)) && (*(int *)(iVar7 + 8) == DAT_10181c28)) {
          FUN_10099760(*(undefined4 *)(iVar7 + 0xc));
          bVar1 = true;
        }
        iVar4 = iVar4 + 1;
        bVar2 = bVar1;
      } while (iVar4 < *(int *)(iVar3 + 0x13c));
    }
    FUN_10087e10(DAT_10181c38);
    iVar3 = FUN_1009a8c0();
    if (-1 < iVar3) {
      if ((!bVar1) && (FUN_10089c90(5,0), DAT_10181c50 != 0)) {
        FUN_10099630(0);
        iVar3 = FUN_1009a4a0();
        if (iVar3 < 0) {
          return iVar3;
        }
      }
      iVar3 = 0;
    }
  }
  return iVar3;
}


/* END FUNCTION 0x1009abd0 */
