/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009a810
 * Name: FUN_1009a810
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_1009a810(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  uint local_4;
  
  DAT_10181c24 = FUN_10099610();
  bVar6 = false;
  local_4 = local_4 & 0xffffff00;
  iVar1 = FUN_10099550();
  if (iVar1 != 0) {
    iVar5 = *(int *)(iVar1 + 0x13c);
    if (0 < iVar5) {
      piVar2 = *(int **)(iVar1 + 0x138);
      do {
        if (*(int *)(*piVar2 + 0x10) == 0) {
          local_4 = CONCAT31(local_4._1_3_,1);
        }
        else {
          bVar6 = true;
        }
        piVar2 = piVar2 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    FUN_10089c90(5,bVar6);
    FUN_10089c90(6,local_4);
    if ((DAT_10181c50 == 0) || (!bVar6)) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    FUN_10099630(uVar3);
    uVar4 = FUN_1009a4a0();
    return uVar4 & (-1 < (int)uVar4) - 1;
  }
  return 0x80004005;
}


/* END FUNCTION 0x1009a810 */
