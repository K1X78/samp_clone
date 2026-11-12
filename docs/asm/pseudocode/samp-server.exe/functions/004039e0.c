/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004039e0
 * Name: FUN_004039e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined1 * __fastcall FUN_004039e0(int param_1,int param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  uint in_EAX;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  
  puVar1 = param_3;
  puVar8 = (undefined1 *)0x0;
  iVar7 = 0;
  param_3 = (undefined1 *)0x0;
  if (param_1 == 0) {
    if ((int)in_EAX < 0) {
      iVar7 = 1;
      puVar8 = (undefined1 *)0x1;
      *puVar1 = 0x2d;
      param_3 = (undefined1 *)0x1;
      in_EAX = -in_EAX;
    }
    do {
      uVar5 = (int)in_EAX / 10;
      puVar1[iVar7] = (char)((int)in_EAX % 10) + '0';
      iVar7 = iVar7 + 1;
      in_EAX = uVar5;
    } while (0 < (int)uVar5);
  }
  else {
    do {
      bVar2 = (byte)in_EAX & 0xf;
      bVar3 = bVar2 + 0x30;
      puVar1[iVar7] = bVar3;
      if (0x39 < bVar3) {
        puVar1[iVar7] = bVar2 + 0x37;
      }
      in_EAX = in_EAX >> 4;
      iVar7 = iVar7 + 1;
    } while (in_EAX != 0);
  }
  if (param_2 < 0) {
    uVar4 = 0x30;
    param_2 = -param_2;
  }
  else {
    uVar4 = 0x20;
  }
  if (iVar7 < param_2) {
    uVar6 = param_2 - iVar7;
    puVar9 = (undefined4 *)(puVar1 + iVar7);
    for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar9 = CONCAT22(CONCAT11(uVar4,uVar4),CONCAT11(uVar4,uVar4));
      puVar9 = puVar9 + 1;
    }
    for (uVar5 = uVar6 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar9 = uVar4;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    iVar7 = iVar7 + uVar6;
    puVar8 = param_3;
  }
  puVar1[iVar7] = 0;
  FUN_004039b0(iVar7 - (int)puVar8);
  return puVar1;
}


/* END FUNCTION 0x004039e0 */
