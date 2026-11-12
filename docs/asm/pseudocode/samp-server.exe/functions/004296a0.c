/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004296a0
 * Name: FUN_004296a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_004296a0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_EAX;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *unaff_EBX;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  if (*param_1 == 0) {
    iVar4 = *(int *)(unaff_EBX + 0x40);
    iVar1 = *(int *)(unaff_EBX + 0x48);
    iVar2 = *(int *)(in_EAX + 0x40);
    puVar8 = (undefined4 *)((uint)*(byte *)(in_EAX + 5) + iVar2);
    iVar3 = *(int *)(in_EAX + 0x3c);
    uVar7 = (uint)CONCAT11(*(undefined1 *)(*(byte *)(in_EAX + 5) + 5 + iVar2),
                           *(undefined1 *)((int)puVar8 + 6));
    uVar5 = *(ushort *)(iVar3 + 0x18) - uVar7;
    puVar9 = (undefined4 *)(iVar2 + uVar7);
    puVar10 = (undefined4 *)(iVar4 + uVar7);
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    uVar6 = (uint)*(ushort *)(in_EAX + 0xc) + (uint)*(ushort *)(in_EAX + 0x10) * 2;
    puVar9 = (undefined4 *)(((iVar1 != 1) - 1 & 100) + iVar4);
    for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    *unaff_EBX = 0;
    iVar4 = FUN_0041f780();
    if (iVar4 == 0) {
      if (*(char *)(iVar3 + 0x14) == '\0') {
        return;
      }
      iVar4 = FUN_00427f70();
    }
    *param_1 = iVar4;
  }
  return;
}


/* END FUNCTION 0x004296a0 */
