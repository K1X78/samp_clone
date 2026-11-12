/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041f1c0
 * Name: FUN_0041f1c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_0041f1c0(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  undefined4 uVar6;
  int extraout_ECX;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int extraout_EDX;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  int local_18;
  
  iVar3 = FUN_0040b660();
  uVar1 = *(ushort *)(extraout_EDX + 0xc);
  iVar2 = *(int *)(extraout_EDX + 0x40);
  uVar12 = (uint)*(ushort *)(extraout_EDX + 0x10);
  uVar13 = (uint)*(ushort *)(extraout_ECX + 0x18);
  uVar4 = (uint)*(byte *)(extraout_EDX + 5);
  local_18 = 0;
  uVar8 = (uint)CONCAT11(*(undefined1 *)(uVar4 + 5 + iVar2),*(undefined1 *)(uVar4 + 6 + iVar2));
  puVar15 = (undefined4 *)(uVar8 + iVar2);
  puVar16 = (undefined4 *)(uVar8 + iVar3);
  for (uVar7 = uVar13 - uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar16 = *puVar15;
    puVar15 = puVar15 + 1;
    puVar16 = puVar16 + 1;
  }
  for (uVar8 = uVar13 - uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined1 *)puVar16 = *(undefined1 *)puVar15;
    puVar15 = (undefined4 *)((int)puVar15 + 1);
    puVar16 = (undefined4 *)((int)puVar16 + 1);
  }
  uVar8 = (uint)uVar1 + uVar12 * 2;
  iVar11 = extraout_EDX;
  uVar7 = uVar13;
  if (uVar12 != 0) {
    puVar14 = (undefined1 *)((uint)uVar1 + iVar2);
    do {
      uVar10 = (uint)CONCAT11(*puVar14,puVar14[1]);
      if ((uVar10 < uVar8) || ((int)(uVar13 - 4) < (int)uVar10)) {
        uVar6 = FUN_0041d790();
        return uVar6;
      }
      pbVar5 = FUN_0040c950(uVar10 + iVar3);
      uVar9 = (uint)pbVar5 & 0xffff;
      uVar7 = uVar7 - uVar9;
      if (((int)uVar7 < (int)uVar8) || (uVar13 < uVar9 + uVar10)) {
        uVar6 = FUN_0041d790();
        return uVar6;
      }
      puVar15 = (undefined4 *)(uVar10 + iVar3);
      puVar16 = (undefined4 *)(uVar7 + iVar2);
      for (uVar9 = uVar9 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar16 = *puVar15;
        puVar15 = puVar15 + 1;
        puVar16 = puVar16 + 1;
      }
      for (uVar10 = (uint)pbVar5 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined1 *)puVar16 = *(undefined1 *)puVar15;
        puVar15 = (undefined4 *)((int)puVar15 + 1);
        puVar16 = (undefined4 *)((int)puVar16 + 1);
      }
      *puVar14 = (char)(uVar7 >> 8);
      puVar14[1] = (char)uVar7;
      puVar14 = puVar14 + 2;
      local_18 = local_18 + 1;
      iVar11 = param_1;
    } while (local_18 < (int)uVar12);
  }
  *(char *)(uVar4 + 6 + iVar2) = (char)uVar7;
  *(char *)(uVar4 + 5 + iVar2) = (char)(uVar7 >> 8);
  uVar7 = uVar7 - uVar8;
  *(undefined1 *)(uVar4 + 1 + iVar2) = 0;
  *(undefined1 *)(uVar4 + 2 + iVar2) = 0;
  *(undefined1 *)(uVar4 + 7 + iVar2) = 0;
  puVar15 = (undefined4 *)(uVar8 + iVar2);
  for (uVar4 = uVar7 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar15 = 0;
    puVar15 = puVar15 + 1;
  }
  for (uVar4 = uVar7 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar15 = 0;
    puVar15 = (undefined4 *)((int)puVar15 + 1);
  }
  if (uVar7 == *(ushort *)(iVar11 + 0xe)) {
    return 0;
  }
  uVar6 = FUN_0041d790();
  return uVar6;
}


/* END FUNCTION 0x0041f1c0 */
