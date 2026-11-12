/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041f530
 * Name: FUN_0041f530
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_0041f530(undefined4 param_1,int param_2,uint param_3,uint param_4)

{
  char *pcVar1;
  undefined1 *puVar2;
  byte bVar3;
  undefined1 uVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  ushort uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  undefined4 *puVar16;
  
  iVar8 = *(int *)(param_3 + 0x40);
  if (*(char *)(*(int *)(param_3 + 0x3c) + 0x12) != '\0') {
    puVar16 = (undefined4 *)(iVar8 + param_2);
    for (uVar12 = param_4 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *puVar16 = 0;
      puVar16 = puVar16 + 1;
    }
    for (uVar12 = param_4 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined1 *)puVar16 = 0;
      puVar16 = (undefined4 *)((int)puVar16 + 1);
    }
  }
  uVar15 = (uint)*(byte *)(param_3 + 5);
  uVar9 = CONCAT11(*(undefined1 *)(uVar15 + 1 + iVar8),*(undefined1 *)(uVar15 + 2 + iVar8));
  uVar12 = uVar15 + 1;
  while ((uVar13 = (uint)uVar9, uVar10 = uVar13, (int)uVar13 < param_2 && (uVar10 = 0, uVar13 != 0))
        ) {
    if (uVar13 < uVar12 + 4) {
      uVar11 = FUN_0041d790();
      return uVar11;
    }
    uVar12 = uVar13;
    uVar9 = CONCAT11(*(undefined1 *)(uVar13 + iVar8),*(undefined1 *)(uVar13 + 1 + iVar8));
  }
  if ((int)uVar10 <= (int)(*(ushort *)(*(int *)(param_3 + 0x3c) + 0x18) - 4)) {
    *(char *)(uVar12 + iVar8) = (char)((uint)param_2 >> 8);
    *(char *)(uVar12 + 1 + iVar8) = (char)param_2;
    *(char *)(iVar8 + 1 + param_2) = (char)uVar10;
    *(char *)(iVar8 + param_2) = (char)(uVar10 >> 8);
    *(char *)(iVar8 + 3 + param_2) = (char)param_4;
    *(char *)(iVar8 + 2 + param_2) = (char)(param_4 >> 8);
    *(short *)(param_3 + 0xe) = *(short *)(param_3 + 0xe) + (short)param_4;
    uVar9 = CONCAT11(*(undefined1 *)(uVar15 + 1 + iVar8),*(undefined1 *)(uVar15 + 2 + iVar8));
    uVar12 = uVar15 + 1;
    do {
      param_3 = (uint)uVar9;
      if (param_3 == 0) {
        pcVar1 = (char *)(uVar15 + 1 + iVar8);
        puVar2 = (undefined1 *)(uVar15 + 5 + iVar8);
        cVar5 = *pcVar1;
        if (cVar5 == *(char *)(uVar15 + 5 + iVar8)) {
          cVar6 = *(char *)(uVar15 + 6 + iVar8);
          cVar7 = *(char *)(uVar15 + 2 + iVar8);
          if (cVar7 == cVar6) {
            uVar12 = (uint)CONCAT11(cVar5,cVar7);
            *(undefined2 *)pcVar1 = *(undefined2 *)(uVar12 + iVar8);
            iVar14 = (uint)CONCAT11(*puVar2,cVar6) +
                     (uint)CONCAT11(*(undefined1 *)(uVar12 + 2 + iVar8),
                                    *(undefined1 *)(uVar12 + 3 + iVar8));
            *puVar2 = (char)((uint)iVar14 >> 8);
            *(char *)(uVar15 + 6 + iVar8) = (char)iVar14;
          }
        }
        return 0;
      }
      uVar10 = (uint)CONCAT11(*(undefined1 *)(param_3 + iVar8),*(undefined1 *)(iVar8 + 1 + param_3))
      ;
      uVar13 = (uint)CONCAT11(*(undefined1 *)(iVar8 + 2 + param_3),
                              *(undefined1 *)(iVar8 + 3 + param_3));
      if ((uVar10 <= uVar13 + 3 + param_3) && (uVar10 != 0)) {
        iVar14 = (uVar10 - uVar13) - param_3;
        if ((iVar14 < 0) || (bVar3 = *(byte *)(uVar15 + 7 + iVar8), (int)(uint)bVar3 < iVar14)) {
          uVar11 = FUN_0041d790();
          return uVar11;
        }
        *(byte *)(uVar15 + 7 + iVar8) = bVar3 - (char)iVar14;
        uVar4 = *(undefined1 *)(uVar10 + iVar8);
        *(undefined1 *)(iVar8 + 1 + param_3) = *(undefined1 *)(iVar8 + 1 + uVar10);
        *(undefined1 *)(param_3 + iVar8) = uVar4;
        iVar14 = (CONCAT11(*(undefined1 *)(iVar8 + 2 + uVar10),*(undefined1 *)(iVar8 + 3 + uVar10))
                 - param_3) + uVar10;
        *(char *)(iVar8 + 2 + param_3) = (char)((uint)iVar14 >> 8);
        *(char *)(iVar8 + 3 + param_3) = (char)iVar14;
        param_3 = uVar12;
      }
      uVar9 = CONCAT11(*(undefined1 *)(param_3 + iVar8),*(undefined1 *)(iVar8 + 1 + param_3));
      uVar12 = param_3;
    } while( true );
  }
  uVar11 = FUN_0041d790();
  return uVar11;
}


/* END FUNCTION 0x0041f530 */
