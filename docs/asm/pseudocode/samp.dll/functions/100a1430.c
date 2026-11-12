/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a1430
 * Name: FUN_100a1430
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100a1430(int param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  int local_350 [212];
  
  puVar9 = (undefined4 *)(param_1 + 0x6e);
  for (iVar7 = 0x35; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  iVar7 = 400;
  do {
    if (iVar7 < 0) {
      if (((DAT_102aca28 != 0) && (cVar4 = FUN_1000ccc0(iVar7), cVar4 != '\0')) &&
         (cVar4 = FUN_100b3930(iVar7), cVar4 == '\0')) {
        FUN_1000cd40(iVar7);
      }
    }
    else if (iVar7 < 20000) {
      iVar5 = FUN_100b1f10(&DAT_1011e6a0,iVar7);
      if (iVar5 != 0) {
        FUN_100b1f10(&DAT_1011e7a4,iVar7);
      }
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 != 0x264);
  iVar7 = 0;
  do {
    local_350[iVar7] = iVar7 + 400;
    iVar7 = iVar7 + 1;
  } while (iVar7 != 0xd4);
  iVar7 = 0xd3;
  do {
    piVar6 = local_350;
    iVar5 = iVar7;
    pbVar3 = param_2;
    do {
      piVar6 = piVar6 + 1;
      pbVar8 = pbVar3 + 1;
      bVar1 = *pbVar3;
      if (bVar1 < *pbVar8) {
        iVar2 = piVar6[-1];
        *pbVar3 = *pbVar8;
        piVar6[-1] = *piVar6;
        *pbVar8 = bVar1;
        *piVar6 = iVar2;
      }
      iVar5 = iVar5 + -1;
      pbVar3 = pbVar8;
    } while (iVar5 != 0);
    iVar7 = iVar7 + -1;
  } while (0 < iVar7);
  iVar7 = 0;
  do {
    if (param_2[iVar7] != 0) {
      iVar5 = local_350[iVar7];
      FUN_100b1f10(&DAT_1011e664,iVar5);
      FUN_100b1f10(&DAT_1011e678);
      *(undefined1 *)(iVar5 + -0x122 + param_1) = 1;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 != 0x50);
  return;
}


/* END FUNCTION 0x100a1430 */
