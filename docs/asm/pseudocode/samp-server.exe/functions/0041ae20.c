/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041ae20
 * Name: FUN_0041ae20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0041ae20(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  
  iVar2 = param_1[0x80];
  iVar3 = *param_1;
  if (iVar2 != 0) {
    if (*(int *)(iVar3 + 0x50) < *(int *)(iVar2 + 0xc) + 1) {
      FUN_00418b00((undefined **)"too many columns on %s");
      return;
    }
    pbVar4 = (byte *)FUN_00416430();
    if (pbVar4 != (byte *)0x0) {
      iVar7 = 0;
      if (0 < *(int *)(iVar2 + 0xc)) {
        cVar1 = (&DAT_004b28c8)[*pbVar4];
        puVar6 = *(undefined4 **)(iVar2 + 0x10);
        do {
          if ((cVar1 == (&DAT_004b28c8)[*(byte *)*puVar6]) &&
             (iVar5 = FUN_00408450(pbVar4 + 1,(byte *)*puVar6 + 1), iVar5 == 0)) {
            FUN_00418b00((undefined **)"duplicate column name: %s");
            FUN_00408130(iVar3);
            return;
          }
          iVar7 = iVar7 + 1;
          puVar6 = puVar6 + 6;
        } while (iVar7 < *(int *)(iVar2 + 0xc));
      }
      if ((*(uint *)(iVar2 + 0xc) & 7) == 0) {
        puVar6 = FUN_004129a0(*(undefined4 *)(iVar2 + 0x10),(*(uint *)(iVar2 + 0xc) * 3 + 0x18) * 8,
                              iVar3,(undefined4 *)*(undefined4 *)(iVar2 + 0x10));
        if (puVar6 == (undefined4 *)0x0) {
          FUN_00408130(iVar3);
          return;
        }
        *(undefined4 **)(iVar2 + 0x10) = puVar6;
      }
      puVar6 = (undefined4 *)(*(int *)(iVar2 + 0x10) + *(int *)(iVar2 + 0xc) * 0x18);
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      puVar6[4] = 0;
      puVar6[5] = 0;
      *puVar6 = pbVar4;
      *(undefined1 *)((int)puVar6 + 0x16) = 0x62;
      *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + 1;
    }
  }
  return;
}


/* END FUNCTION 0x0041ae20 */
