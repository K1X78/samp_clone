/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041f370
 * Name: FUN_0041f370
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_0041f370(int param_1,int *param_2)

{
  uint uVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  byte bVar5;
  uint uVar6;
  int in_EAX;
  int iVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  
  uVar10 = (uint)*(ushort *)(*(int *)(in_EAX + 0x3c) + 0x18);
  uVar9 = (uint)*(byte *)(in_EAX + 5);
  iVar7 = *(int *)(in_EAX + 0x40);
  pbVar2 = (byte *)(iVar7 + 7 + uVar9);
  bVar5 = *pbVar2;
  uVar1 = (uint)*(ushort *)(in_EAX + 0xc) + (uint)*(ushort *)(in_EAX + 0x10) * 2;
  puVar3 = (undefined1 *)(iVar7 + 5 + uVar9);
  puVar4 = (undefined1 *)(iVar7 + 6 + uVar9);
  uVar11 = (uint)CONCAT11(*(undefined1 *)(iVar7 + 5 + uVar9),*puVar4);
  if (uVar11 < uVar1) {
    iVar7 = FUN_0041d790();
    return iVar7;
  }
  if (bVar5 < 0x3c) {
    if (uVar1 + 2 <= uVar11) {
      uVar8 = CONCAT11(*(undefined1 *)(uVar9 + 1 + iVar7),*(undefined1 *)(uVar9 + 2 + iVar7));
      uVar9 = uVar9 + 1;
      while (uVar6 = (uint)uVar8, uVar6 != 0) {
        if (((int)(uVar10 - 4) < (int)uVar6) || (uVar6 < uVar9 + 4)) {
          iVar7 = FUN_0041d790();
          return iVar7;
        }
        uVar13 = (uint)CONCAT11(*(undefined1 *)(uVar6 + 2 + iVar7),
                                *(undefined1 *)(uVar6 + 3 + iVar7));
        if (param_1 <= (int)uVar13) {
          iVar12 = uVar13 - param_1;
          if (iVar12 < 4) {
            *(undefined2 *)(uVar9 + iVar7) = *(undefined2 *)(uVar6 + iVar7);
            *pbVar2 = bVar5 + (char)iVar12;
            *param_2 = iVar12 + uVar6;
            return 0;
          }
          if (uVar13 + uVar6 <= uVar10) {
            *(char *)(uVar6 + 3 + iVar7) = (char)iVar12;
            *(char *)(uVar6 + 2 + iVar7) = (char)((uint)iVar12 >> 8);
            *param_2 = iVar12 + uVar6;
            return 0;
          }
          iVar7 = FUN_0041d790();
          return iVar7;
        }
        uVar9 = uVar6;
        uVar8 = CONCAT11(*(undefined1 *)(uVar6 + iVar7),*(undefined1 *)(uVar6 + 1 + iVar7));
      }
    }
  }
  else {
    iVar7 = FUN_0041f1c0(in_EAX);
    if (iVar7 != 0) {
      return iVar7;
    }
    uVar11 = (uint)CONCAT11(*puVar3,*puVar4);
  }
  if ((int)uVar11 < (int)(uVar1 + 2 + param_1)) {
    iVar7 = FUN_0041f1c0(in_EAX);
    if (iVar7 != 0) {
      return iVar7;
    }
    uVar11 = (uint)CONCAT11(*puVar3,*puVar4);
  }
  iVar7 = uVar11 - param_1;
  *puVar3 = (char)((uint)iVar7 >> 8);
  *puVar4 = (char)iVar7;
  *param_2 = iVar7;
  return 0;
}


/* END FUNCTION 0x0041f370 */
