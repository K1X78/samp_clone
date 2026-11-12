/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004138e0
 * Name: FUN_004138e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_004138e0(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int unaff_ESI;
  undefined4 *puVar8;
  longlong lVar9;
  int local_4;
  
  puVar8 = *(undefined4 **)(unaff_ESI + 0xa0);
  iVar6 = 0;
  local_4 = 0;
  uVar7 = *(uint *)(unaff_ESI + 0x84);
  if (*(uint *)(unaff_ESI + 0x78) < *(uint *)(unaff_ESI + 0x84)) {
    uVar7 = *(uint *)(unaff_ESI + 0x78);
  }
  if (0 < *(int *)(unaff_ESI + 100)) {
    iVar5 = 0;
    do {
      iVar2 = *(int *)(unaff_ESI + 0x60);
      puVar1 = (undefined4 *)(iVar2 + 8 + iVar5);
      if (*(int *)(iVar2 + 8 + iVar5) == 0 && *(int *)(iVar2 + 0xc + iVar5) == 0) {
        *puVar1 = *(undefined4 *)(unaff_ESI + 0x48);
        puVar1[1] = *(undefined4 *)(unaff_ESI + 0x4c);
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 0x30;
    } while (iVar6 < *(int *)(unaff_ESI + 100));
  }
  lVar9 = FUN_0040b200();
  *(longlong *)(unaff_ESI + 0x48) = lVar9;
  *(longlong *)(unaff_ESI + 0x50) = lVar9;
  if (((*(char *)(unaff_ESI + 8) == '\0') && (*(char *)(unaff_ESI + 5) != '\x04')) &&
     (uVar4 = FUN_00407bb0(), (uVar4 & 0x200) == 0)) {
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = 0;
  }
  else {
    *puVar8 = 0xf905d5d9;
    puVar8[1] = 0xd763a120;
    FUN_00408fa0((undefined1 *)(puVar8 + 2));
  }
  FUN_00412de0(4,(undefined1 *)(unaff_ESI + 0x2c));
  FUN_00408fa0((undefined1 *)(puVar8 + 3));
  FUN_00408fa0((undefined1 *)(puVar8 + 4));
  FUN_00408fa0((undefined1 *)(puVar8 + 5));
  FUN_00408fa0((undefined1 *)(puVar8 + 6));
  puVar8 = puVar8 + 7;
  for (uVar4 = uVar7 - 0x1c >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  for (uVar4 = uVar7 - 0x1c & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar8 = 0;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  uVar4 = 0;
  do {
    if (*(uint *)(unaff_ESI + 0x78) <= uVar4) {
      return local_4;
    }
    local_4 = FUN_00407af0();
    uVar3 = *(uint *)(unaff_ESI + 0x48);
    uVar4 = uVar4 + uVar7;
    *(uint *)(unaff_ESI + 0x48) = uVar3 + uVar7;
    *(uint *)(unaff_ESI + 0x4c) = *(int *)(unaff_ESI + 0x4c) + (uint)CARRY4(uVar3,uVar7);
  } while (local_4 == 0);
  return local_4;
}


/* END FUNCTION 0x004138e0 */
