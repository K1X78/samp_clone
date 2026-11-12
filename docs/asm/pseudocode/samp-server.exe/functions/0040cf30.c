/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040cf30
 * Name: FUN_0040cf30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0040cf30(int param_1,int param_2,int param_3,int param_4)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  
  uVar1 = *(ushort *)(*(int *)(param_1 + 0x3c) + 0x18);
  uVar6 = (uint)uVar1;
  iVar3 = *(int *)(param_1 + 0x40);
  uVar10 = (uint)*(byte *)(param_1 + 5);
  puVar4 = (undefined1 *)((uint)*(ushort *)(param_1 + 0xc) + iVar3 + param_2 * 2);
  iVar5 = param_2;
  while (iVar5 = iVar5 + -1, -1 < iVar5) {
    uVar6 = uVar6 - *(ushort *)(param_4 + iVar5 * 2);
    puVar8 = puVar4 + -2;
    *puVar8 = (char)(uVar6 >> 8);
    puVar4[-1] = (char)uVar6;
    uVar2 = *(ushort *)(param_4 + iVar5 * 2);
    puVar9 = *(undefined4 **)(param_3 + iVar5 * 4);
    puVar11 = (undefined4 *)(uVar6 + iVar3);
    for (uVar7 = (uint)(uVar2 >> 2); uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
    for (uVar7 = uVar2 & 3; puVar4 = puVar8, uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
      puVar11 = (undefined4 *)((int)puVar11 + 1);
    }
  }
  *(char *)(uVar10 + 3 + iVar3) = (char)((uint)param_2 >> 8);
  *(char *)(uVar10 + 5 + iVar3) = (char)(uVar6 >> 8);
  *(char *)(uVar10 + 6 + iVar3) = (char)uVar6;
  *(char *)(uVar10 + 4 + iVar3) = (char)param_2;
  *(short *)(param_1 + 0xe) =
       *(short *)(param_1 + 0xe) + (((short)uVar6 + (short)param_2 * -2) - uVar1);
  *(short *)(param_1 + 0x10) = (short)param_2;
  return;
}


/* END FUNCTION 0x0040cf30 */
