/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10054960
 * Name: FUN_10054960
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10054960(int *param_1)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint local_8;
  
  uVar2 = param_1[1];
  local_8 = 0;
  if (uVar2 != 0) {
    iVar7 = 0;
    do {
      uVar5 = FUN_100436c0();
      uVar5 = uVar5 % (uVar2 - local_8) + local_8;
      if (uVar5 != local_8) {
        iVar3 = *param_1;
        uVar4 = *(undefined4 *)(iVar7 + iVar3);
        uVar1 = *(undefined2 *)(iVar7 + 4 + iVar3);
        iVar6 = uVar5 * 6;
        *(undefined4 *)(iVar7 + iVar3) = *(undefined4 *)(iVar6 + iVar3);
        *(undefined2 *)(iVar7 + 4 + iVar3) = *(undefined2 *)(iVar6 + 4 + iVar3);
        iVar3 = *param_1;
        *(undefined4 *)(iVar3 + iVar6) = uVar4;
        *(undefined2 *)((undefined4 *)(iVar3 + iVar6) + 1) = uVar1;
      }
      local_8 = local_8 + 1;
      iVar7 = iVar7 + 6;
    } while (local_8 < uVar2);
  }
  return;
}


/* END FUNCTION 0x10054960 */
