/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041db80
 * Name: FUN_0041db80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_0041db80(int param_1,char param_2)

{
  undefined1 uVar1;
  ushort uVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte bVar9;
  undefined1 *puVar10;
  byte bVar11;
  ushort *puVar12;
  ushort *puVar13;
  ushort *puVar14;
  
  if (*(char *)(param_1 + 0x1f) == '\x01') {
    if (param_2 == '\x01') goto LAB_0041dbd8;
    iVar3 = *(int *)(param_1 + 0x18) * 2 + 2;
  }
  else {
    if (param_2 != '\x01') {
      iVar3 = FUN_004196b0();
      if (iVar3 != 0) {
        return 7;
      }
      puVar4 = *(undefined1 **)(param_1 + 0x14);
      puVar10 = puVar4 + (*(uint *)(param_1 + 0x18) & 0xfffffffe);
      for (; puVar4 < puVar10; puVar4 = puVar4 + 2) {
        uVar1 = *puVar4;
        *puVar4 = puVar4[1];
        puVar4[1] = uVar1;
      }
      *(char *)(param_1 + 0x1f) = param_2;
      return 0;
    }
LAB_0041dbd8:
    uVar5 = *(uint *)(param_1 + 0x18) & 0xfffffffe;
    *(uint *)(param_1 + 0x18) = uVar5;
    iVar3 = uVar5 * 2 + 1;
  }
  puVar13 = *(ushort **)(param_1 + 0x14);
  puVar12 = (ushort *)(*(int *)(param_1 + 0x18) + (int)puVar13);
  pbVar6 = (byte *)FUN_00412930(iVar3);
  if (pbVar6 == (byte *)0x0) {
    return 7;
  }
  if (*(char *)(param_1 + 0x1f) == '\x01') {
    pbVar8 = pbVar6;
    if (param_2 == '\x02') {
      pbVar7 = pbVar6;
      if (puVar13 < puVar12) {
        do {
          pbVar8 = pbVar7;
          uVar5 = (uint)(byte)*puVar13;
          puVar13 = (ushort *)((int)puVar13 + 1);
          if (uVar5 < 0xc0) {
LAB_0041dca2:
            bVar9 = (byte)(uVar5 >> 8);
            if (uVar5 < 0x10000) {
              *pbVar8 = (byte)uVar5;
            }
            else {
              bVar11 = (byte)(uVar5 - 0x10000 >> 10);
              *pbVar8 = ((byte)(uVar5 >> 10) ^ bVar11) & 0x3f ^ bVar11;
              pbVar8[1] = ((byte)(uVar5 - 0x10000 >> 0x12) & 3) - 0x28;
              pbVar8 = pbVar8 + 2;
              *pbVar8 = (byte)uVar5;
              bVar9 = (bVar9 & 3) - 0x24;
            }
          }
          else {
            uVar5 = (uint)(byte)(&DAT_004b2c00)[uVar5];
            for (; (puVar13 != puVar12 && (((byte)*puVar13 & 0xc0) == 0x80));
                puVar13 = (ushort *)((int)puVar13 + 1)) {
              uVar5 = ((byte)*puVar13 & 0x3f) + uVar5 * 0x40;
            }
            if (((0x7f < uVar5) && ((uVar5 & 0xfffff800) != 0xd800)) &&
               ((uVar5 & 0xfffffffe) != 0xfffe)) goto LAB_0041dca2;
            *pbVar8 = 0xfd;
            bVar9 = 0xff;
          }
          pbVar8[1] = bVar9;
          pbVar7 = pbVar8 + 2;
        } while (puVar13 < puVar12);
        *(int *)(param_1 + 0x18) = (int)pbVar7 - (int)pbVar6;
        *pbVar7 = 0;
        pbVar8 = pbVar8 + 3;
        goto LAB_0041df6c;
      }
    }
    else {
      while (puVar13 < puVar12) {
        uVar5 = (uint)(byte)*puVar13;
        puVar13 = (ushort *)((int)puVar13 + 1);
        if (uVar5 < 0xc0) {
LAB_0041dd79:
          bVar9 = (byte)(uVar5 >> 8);
          if (0xffff < uVar5) {
            *pbVar8 = ((byte)(uVar5 - 0x10000 >> 0x12) & 3) - 0x28;
            bVar11 = (byte)(uVar5 - 0x10000 >> 10);
            pbVar8[1] = ((byte)(uVar5 >> 10) ^ bVar11) & 0x3f ^ bVar11;
            pbVar8 = pbVar8 + 2;
            bVar9 = (bVar9 & 3) - 0x24;
          }
        }
        else {
          uVar5 = (uint)(byte)(&DAT_004b2c00)[uVar5];
          for (; (puVar13 != puVar12 && (((byte)*puVar13 & 0xc0) == 0x80));
              puVar13 = (ushort *)((int)puVar13 + 1)) {
            uVar5 = ((byte)*puVar13 & 0x3f) + uVar5 * 0x40;
          }
          if (((0x7f < uVar5) && ((uVar5 & 0xfffff800) != 0xd800)) &&
             ((uVar5 & 0xfffffffe) != 0xfffe)) goto LAB_0041dd79;
          uVar5 = 0xfffd;
          bVar9 = 0xff;
        }
        *pbVar8 = bVar9;
        pbVar8[1] = (byte)uVar5;
        pbVar8 = pbVar8 + 2;
      }
    }
    *(int *)(param_1 + 0x18) = (int)pbVar8 - (int)pbVar6;
    *pbVar8 = 0;
    pbVar8 = pbVar8 + 1;
  }
  else {
    pbVar8 = pbVar6;
    if (*(char *)(param_1 + 0x1f) == '\x02') {
      while (puVar13 < puVar12) {
        uVar5 = (uint)*puVar13;
        puVar14 = puVar13 + 1;
        if (((0xd7ff < uVar5) && (uVar5 < 0xe000)) && (puVar14 < puVar12)) {
          uVar2 = *puVar14;
          puVar14 = puVar13 + 2;
          uVar5 = ((uVar5 & 0x3c0) + 0x40 + (uVar5 & 0x3f)) * 0x400 + (uVar2 & 0x3ff);
        }
        if (0x7f < uVar5) {
          if (uVar5 < 0x800) {
            bVar9 = ((byte)(uVar5 >> 6) & 0x1f) - 0x40;
          }
          else {
            if (uVar5 < 0x10000) {
              bVar9 = ((byte)(uVar5 >> 0xc) & 0xf) - 0x20;
            }
            else {
              *pbVar8 = (char)(uVar5 >> 0x12) - 0x10;
              pbVar8 = pbVar8 + 1;
              bVar9 = ((byte)(uVar5 >> 0xc) & 0x3f) + 0x80;
            }
            *pbVar8 = bVar9;
            pbVar8 = pbVar8 + 1;
            bVar9 = ((byte)(uVar5 >> 6) & 0x3f) + 0x80;
          }
          *pbVar8 = bVar9;
          pbVar8 = pbVar8 + 1;
          uVar5 = (uint)(byte)(((byte)uVar5 & 0x3f) + 0x80);
        }
        *pbVar8 = (byte)uVar5;
        puVar13 = puVar14;
        pbVar8 = pbVar8 + 1;
      }
    }
    else {
      while (puVar13 < puVar12) {
        uVar5 = (uint)(byte)*puVar13 * 0x100 + (uint)*(byte *)((int)puVar13 + 1);
        puVar14 = puVar13 + 1;
        if (((0xd7ff < uVar5) && (uVar5 < 0xe000)) && (puVar14 < puVar12)) {
          uVar2 = *puVar14;
          puVar14 = puVar13 + 2;
          uVar5 = ((uVar5 & 0x3c0) + 0x40 + (uVar5 & 0x3f)) * 0x400 +
                  ((uint)(byte)uVar2 * 0x100 + (uint)*(byte *)((int)puVar13 + 3) & 0x3ff);
        }
        if (0x7f < uVar5) {
          if (uVar5 < 0x800) {
            bVar9 = ((byte)(uVar5 >> 6) & 0x1f) - 0x40;
          }
          else {
            if (uVar5 < 0x10000) {
              bVar9 = ((byte)(uVar5 >> 0xc) & 0xf) - 0x20;
            }
            else {
              *pbVar8 = (char)(uVar5 >> 0x12) - 0x10;
              pbVar8 = pbVar8 + 1;
              bVar9 = ((byte)(uVar5 >> 0xc) & 0x3f) + 0x80;
            }
            *pbVar8 = bVar9;
            pbVar8 = pbVar8 + 1;
            bVar9 = ((byte)(uVar5 >> 6) & 0x3f) + 0x80;
          }
          *pbVar8 = bVar9;
          pbVar8 = pbVar8 + 1;
          uVar5 = (uint)(byte)(((byte)uVar5 & 0x3f) + 0x80);
        }
        *pbVar8 = (byte)uVar5;
        puVar13 = puVar14;
        pbVar8 = pbVar8 + 1;
      }
    }
    *(int *)(param_1 + 0x18) = (int)pbVar8 - (int)pbVar6;
  }
LAB_0041df6c:
  *pbVar8 = 0;
  FUN_0040d250(param_1);
  *(byte **)(param_1 + 0x14) = pbVar6;
  *(byte **)(param_1 + 0x24) = pbVar6;
  *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0xe7ff | 0x600;
  *(char *)(param_1 + 0x1f) = param_2;
  return 0;
}


/* END FUNCTION 0x0041db80 */
