/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006e760
 * Name: FUN_1006e760
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1006e760(int *param_1)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  ushort *puVar6;
  ushort uVar7;
  int iVar8;
  int iVar9;
  size_t _Count;
  undefined4 *_Memory;
  undefined4 uVar10;
  int iVar11;
  char *pcVar12;
  byte *pbVar13;
  int iVar14;
  char *pcVar15;
  ushort *puVar16;
  char *pcVar17;
  undefined4 *puVar18;
  byte *pbVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  uint uVar22;
  undefined4 *puVar23;
  bool bVar24;
  int local_154;
  int local_150;
  undefined4 local_134 [12];
  char local_104 [260];
  
  if ((((DAT_102aca24 != 0) && (*(int *)(*(int *)(DAT_102aca24 + 0x3de) + 8) != 0)) &&
      (*param_1 != 0)) && (param_1[0xd] != 0)) {
    iVar8 = FUN_100888f0(0xffffffff);
    iVar4 = param_1[0xe];
    uVar5 = *(undefined4 *)(iVar4 + 0xeb);
    FUN_1008c270();
    puVar6 = *(ushort **)(*(int *)(DAT_102aca24 + 0x3de) + 8);
    iVar9 = FUN_100138c0(0);
    uVar3 = *puVar6;
    _Count = iVar9 + 1;
    _Memory = _calloc(_Count,0x2d);
    if (*(uint *)(puVar6 + 0xd) < 0x10) {
      puVar16 = puVar6 + 3;
    }
    else {
      puVar16 = *(ushort **)(puVar6 + 3);
    }
    pcVar15 = (char *)(_Memory + 1);
    do {
      uVar7 = *puVar16;
      puVar16 = (ushort *)((int)puVar16 + 1);
      *pcVar15 = (char)uVar7;
      pcVar15 = pcVar15 + 1;
    } while ((char)uVar7 != '\0');
    uVar10 = FUN_10003e20();
    *_Memory = uVar10;
    *(undefined4 *)((int)_Memory + 0x25) = *(undefined4 *)(puVar6 + 0x179d);
    *(undefined4 *)((int)_Memory + 0x29) = *(undefined4 *)(puVar6 + 0x179b);
    *(uint *)((int)_Memory + 0x21) = (uint)*puVar6;
    uVar22 = 0;
    pcVar15 = (char *)((int)_Memory + 0x31);
    do {
      if ((((ushort)uVar22 < 0x3ec) && (*(int *)(puVar6 + (uVar22 & 0xffff) * 2 + 0x7eb) == 1)) &&
         ((uVar22 != uVar3 && (iVar11 = FUN_1000e300(uVar22), iVar11 == 0)))) {
        uVar10 = FUN_1006e2b0(uVar22);
        *(undefined4 *)(pcVar15 + 0x25) = uVar10;
        pcVar12 = (char *)FUN_100170d0(uVar22);
        pcVar17 = pcVar15;
        do {
          cVar1 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          *pcVar17 = cVar1;
          pcVar17 = pcVar17 + 1;
        } while (cVar1 != '\0');
        uVar10 = FUN_1006e290(uVar22);
        *(undefined4 *)(pcVar15 + 0x21) = uVar10;
        FUN_100010f0(uVar22);
        uVar10 = FUN_10015e30();
        *(undefined4 *)(pcVar15 + -4) = uVar10;
        *(uint *)(pcVar15 + 0x1d) = uVar22;
        pcVar15 = pcVar15 + 0x2d;
      }
      uVar22 = uVar22 + 1;
    } while ((int)uVar22 < 0x3ec);
    if (param_1[0x10] == 1) {
      local_154 = iVar9;
      if (0 < iVar9) {
        do {
          iVar11 = iVar9;
          puVar21 = _Memory;
          if (0 < iVar9) {
            do {
              puVar18 = (undefined4 *)((int)puVar21 + 0x2d);
              pbVar13 = (byte *)((int)puVar21 + 0x31);
              pbVar19 = (byte *)(puVar21 + 1);
              do {
                bVar2 = *pbVar13;
                bVar24 = bVar2 < *pbVar19;
                if (bVar2 != *pbVar19) {
LAB_1006e91a:
                  iVar14 = (1 - (uint)bVar24) - (uint)(bVar24 != 0);
                  goto LAB_1006e91f;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar13[1];
                bVar24 = bVar2 < pbVar19[1];
                if (bVar2 != pbVar19[1]) goto LAB_1006e91a;
                pbVar13 = pbVar13 + 2;
                pbVar19 = pbVar19 + 2;
              } while (bVar2 != 0);
              iVar14 = 0;
LAB_1006e91f:
              if (iVar14 < 0) {
                puVar20 = puVar21;
                puVar23 = local_134;
                for (iVar14 = 0xb; iVar14 != 0; iVar14 = iVar14 + -1) {
                  *puVar23 = *puVar20;
                  puVar20 = puVar20 + 1;
                  puVar23 = puVar23 + 1;
                }
                *(undefined1 *)puVar23 = *(undefined1 *)puVar20;
                puVar20 = puVar18;
                for (iVar14 = 0xb; iVar14 != 0; iVar14 = iVar14 + -1) {
                  *puVar21 = *puVar20;
                  puVar20 = puVar20 + 1;
                  puVar21 = puVar21 + 1;
                }
                *(undefined1 *)puVar21 = *(undefined1 *)puVar20;
                puVar21 = local_134;
                puVar20 = puVar18;
                for (iVar14 = 0xb; iVar14 != 0; iVar14 = iVar14 + -1) {
                  *puVar20 = *puVar21;
                  puVar21 = puVar21 + 1;
                  puVar20 = puVar20 + 1;
                }
                *(undefined1 *)puVar20 = *(undefined1 *)puVar21;
              }
              iVar11 = iVar11 + -1;
              puVar21 = puVar18;
            } while (iVar11 != 0);
          }
          iVar9 = iVar9 + -1;
          local_154 = local_154 + -1;
        } while (local_154 != 0);
      }
    }
    else if ((param_1[0x10] == 2) && (local_150 = iVar9, 0 < iVar9)) {
      do {
        iVar11 = iVar9;
        puVar21 = _Memory;
        if (0 < iVar9) {
          do {
            puVar18 = (undefined4 *)((int)puVar21 + 0x2d);
            if (*(int *)((int)puVar21 + 0x25) < *(int *)((int)puVar21 + 0x52)) {
              puVar20 = puVar21;
              puVar23 = local_134;
              for (iVar14 = 0xb; iVar14 != 0; iVar14 = iVar14 + -1) {
                *puVar23 = *puVar20;
                puVar20 = puVar20 + 1;
                puVar23 = puVar23 + 1;
              }
              *(undefined1 *)puVar23 = *(undefined1 *)puVar20;
              puVar20 = puVar18;
              for (iVar14 = 0xb; iVar14 != 0; iVar14 = iVar14 + -1) {
                *puVar21 = *puVar20;
                puVar20 = puVar20 + 1;
                puVar21 = puVar21 + 1;
              }
              *(undefined1 *)puVar21 = *(undefined1 *)puVar20;
              puVar21 = local_134;
              puVar20 = puVar18;
              for (iVar14 = 0xb; iVar14 != 0; iVar14 = iVar14 + -1) {
                *puVar20 = *puVar21;
                puVar21 = puVar21 + 1;
                puVar20 = puVar20 + 1;
              }
              *(undefined1 *)puVar20 = *(undefined1 *)puVar21;
            }
            iVar11 = iVar11 + -1;
            puVar21 = puVar18;
          } while (iVar11 != 0);
        }
        iVar9 = iVar9 + -1;
        local_150 = local_150 + -1;
      } while (local_150 != 0);
    }
    iVar9 = 0;
    if (0 < (int)_Count) {
      pcVar15 = (char *)(_Memory + 1);
      do {
        _sprintf(local_104,"%u",*(undefined4 *)(pcVar15 + 0x1d));
        FUN_1008a270(local_104,*(undefined4 *)(pcVar15 + 0x1d),*(undefined4 *)(pcVar15 + -4));
        iVar11 = FUN_1008a440(iVar9);
        if ((iVar11 != 0) && (*pcVar15 != '\0')) {
          FUN_10088880(iVar9,0,pcVar15);
          _sprintf(local_104,"%d",*(undefined4 *)(pcVar15 + 0x21));
          FUN_10088880(iVar9,1,local_104);
          _sprintf(local_104,"%u",*(undefined4 *)(pcVar15 + 0x25));
          FUN_10088880(iVar9,2,local_104);
        }
        iVar9 = iVar9 + 1;
        pcVar15 = pcVar15 + 0x2d;
      } while (iVar9 < (int)_Count);
    }
    if (iVar8 < 0) {
      iVar8 = -1;
    }
    FUN_1008a470(iVar8);
    _free(_Memory);
    *(undefined4 *)(iVar4 + 0xeb) = uVar5;
    FUN_10084e80();
    FUN_10084da0();
  }
  return;
}


/* END FUNCTION 0x1006e760 */
