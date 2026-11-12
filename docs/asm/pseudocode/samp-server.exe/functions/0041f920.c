/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041f920
 * Name: FUN_0041f920
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0041f920(uint param_1)

{
  short sVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *unaff_ESI;
  undefined4 *puVar8;
  
  iVar3 = *(int *)(unaff_ESI + 0x40);
  bVar2 = unaff_ESI[5];
  iVar4 = *(int *)(unaff_ESI + 0x3c);
  if (*(char *)(iVar4 + 0x12) != '\0') {
    uVar6 = (uint)*(ushort *)(iVar4 + 0x18) - (uint)bVar2;
    puVar8 = (undefined4 *)((uint)bVar2 + iVar3);
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar8 = 0;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
  }
  puVar5 = (undefined1 *)((uint)bVar2 + iVar3);
  *puVar5 = (char)param_1;
  *(undefined4 *)(puVar5 + 1) = 0;
  puVar5[7] = 0;
  sVar1 = bVar2 + 8 + ((byte)~(byte)(param_1 >> 3) & 1) * 4;
  puVar5[5] = *(undefined1 *)(iVar4 + 0x19);
  puVar5[6] = *(undefined1 *)(iVar4 + 0x18);
  *(short *)(unaff_ESI + 0xe) = *(short *)(iVar4 + 0x18) - sVar1;
  FUN_0041f710(param_1);
  unaff_ESI[5] = bVar2;
  *(short *)(unaff_ESI + 0xc) = sVar1;
  unaff_ESI[1] = 0;
  *(short *)(unaff_ESI + 0x12) = *(short *)(iVar4 + 0x16) + -1;
  *(undefined2 *)(unaff_ESI + 0x10) = 0;
  *unaff_ESI = 1;
  return;
}


/* END FUNCTION 0x0041f920 */
