/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b1f10
 * Name: FUN_100b1f10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100b1f10(ushort *param_1)

{
  double dVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int iVar4;
  undefined4 uVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  char *pcVar9;
  uint uVar10;
  undefined4 *puVar11;
  char *pcVar12;
  ushort uVar13;
  ushort uVar14;
  ushort *local_24;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  pvVar3 = ExceptionList;
  puStack_c = &DAT_1011f428;
  puStack_10 = &LAB_100f93a4;
  local_14 = ExceptionList;
  local_24 = param_1 + 1;
  _DAT_102a92f0 = *param_1;
  iVar4 = 2;
  uVar14 = 0;
  uVar13 = 0;
  iVar8 = 0x3c;
  ExceptionList = &local_14;
  do {
    *(undefined4 *)(iVar8 + DAT_102a93f0) = 0;
    iVar8 = iVar8 + 4;
  } while (iVar8 < 0x84);
  DAT_102a93f4 = (uint)*param_1;
  cVar6 = (char)*local_24;
  if (cVar6 != '\0') {
    puVar11 = &param_1;
    do {
      switch(cVar6) {
      case 'f':
        register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 8);
        puVar11 = puVar11 + 2;
        dVar1 = *(double *)register0x00000010;
        (&DAT_102a92f0)[iVar4] = 6;
        *(float *)(iVar4 + 0x102a92f1) = (float)dVar1;
        iVar4 = iVar4 + 5;
        break;
      default:
        ExceptionList = pvVar3;
        return 0;
      case 'i':
        register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4);
        puVar11 = puVar11 + 1;
        uVar5 = *puVar11;
        (&DAT_102a92f0)[iVar4] = 1;
        *(undefined4 *)(iVar4 + 0x102a92f1) = uVar5;
        iVar4 = iVar4 + 5;
        break;
      case 's':
        register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4);
        puVar11 = puVar11 + 1;
        pcVar12 = (char *)*puVar11;
        pcVar9 = pcVar12;
        do {
          cVar6 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar6 != '\0');
        bVar7 = (char)pcVar9 - ((char)pcVar12 + '\x01');
        (&DAT_102a92f0)[iVar4] = 0xe;
        *(byte *)(iVar4 + 0x102a92f1) = bVar7;
        pcVar9 = &DAT_102a92f2 + iVar4;
        for (uVar10 = (uint)(bVar7 >> 2); uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (uVar10 = bVar7 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar9 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar9 = pcVar9 + 1;
        }
        iVar4 = iVar4 + 2 + (uint)bVar7;
        uVar14 = uVar13;
        break;
      case 'v':
        register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4);
        puVar11 = puVar11 + 1;
        puVar2 = (undefined4 *)*puVar11;
        (&DAT_102a92f0)[iVar4] = 3;
        (&DAT_102a92a8)[uVar14] = puVar2;
        *(undefined4 *)(DAT_102a93f0 + 0x3c + (uint)uVar14 * 4) = *puVar2;
        *(ushort *)(iVar4 + 0x102a92f1) = uVar13;
        iVar4 = iVar4 + 3;
        uVar13 = uVar13 + 1;
        uVar14 = uVar13;
        break;
      case 'z':
        (&DAT_102a92f0)[iVar4] = 0;
        iVar4 = iVar4 + 1;
      }
      local_24 = (ushort *)((int)local_24 + 1);
      cVar6 = *(char *)local_24;
    } while (cVar6 != '\0');
  }
  local_8 = 0;
  uVar5 = FUN_100b1ed0();
  if (uVar14 != 0) {
    for (iVar4 = 0; iVar4 < (int)(uint)uVar14; iVar4 = iVar4 + 1) {
      *(undefined4 *)(&DAT_102a92a8)[iVar4] = *(undefined4 *)(DAT_102a93f0 + 0x3c + iVar4 * 4);
    }
  }
  ExceptionList = local_14;
  return uVar5;
}


/* END FUNCTION 0x100b1f10 */
