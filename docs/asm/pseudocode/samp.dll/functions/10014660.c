/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10014660
 * Name: FUN_10014660
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10014660(int param_1)

{
  ushort uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  byte bVar6;
  
  iVar2 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0xc);
  if ((((*(int *)(param_1 + 4) != 0) && (iVar4 = FUN_100aba90(), iVar4 == 0)) &&
      (uVar1 = *(ushort *)(param_1 + 2), uVar1 < 2000)) &&
     ((*(int *)(iVar2 + 0x3074 + (uint)uVar1 * 4) != 0 &&
      (*(int *)(iVar2 + 0x1134 + (uint)uVar1 * 4) != 0)))) {
    if (*(char *)(param_1 + 0x1b) == '\0') {
      bVar6 = *(byte *)(param_1 + 0xb6);
    }
    else {
      bVar6 = *(byte *)(param_1 + 0x27);
    }
    bVar6 = bVar6 & 0x3f;
    bVar3 = FUN_100ab870();
    if (bVar3 != bVar6) {
      FUN_100abc80(bVar6,0);
      bVar3 = FUN_100ab870();
      if (bVar3 != bVar6) {
        FUN_100af390(bVar6,9999);
        FUN_100abc80(bVar6,0);
      }
    }
    uVar5 = FUN_1001e680(*(undefined2 *)(param_1 + 2));
    FUN_100abeb0(uVar5,*(undefined1 *)(param_1 + 0x1b));
  }
  return;
}


/* END FUNCTION 0x10014660 */
