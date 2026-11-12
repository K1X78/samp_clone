/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10005f40
 * Name: FUN_10005f40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10005f40(int param_1)

{
  int *piVar1;
  SHORT SVar2;
  int iVar3;
  DWORD DVar4;
  uint uVar5;
  tagRECT local_10;
  
  iVar3 = FUN_100a0760();
  if (iVar3 == 0) {
    FUN_100a1bd0(0);
    FUN_100a0530(2,0);
  }
  if ((DAT_102ac9e0 == 0) || (*(int *)(DAT_102ac9e0 + 0x28) == 0)) {
    if (*(int *)(param_1 + 0x30a) == 0) {
      *(undefined1 *)(DAT_102acabc + 0x13) = 1;
      GetClientRect(_DAT_00c97c1c,&local_10);
      iVar3 = DAT_102acabc;
      piVar1 = (int *)(DAT_102acabc + 0x11e);
      *(LONG *)(DAT_102acabc + 0x11a) = (local_10.bottom - *(int *)(DAT_102acabc + 0x122)) + -0x32;
      *(int *)(iVar3 + 0x116) = local_10.right / 2 - *piVar1 / 2;
      *(undefined4 *)(param_1 + 0x30a) = 1;
      FUN_10005720(*(undefined4 *)(param_1 + 0x302));
      return;
    }
    DVar4 = GetTickCount();
    if (1999 < DVar4 - *(int *)(param_1 + 0x14b)) {
      if (*(int *)(param_1 + 0x306) == 0) {
        if (*(int *)(param_1 + 0x143) == 0) {
          return;
        }
        SVar2 = GetAsyncKeyState(0x10);
        if ((SVar2 < 0) && (*(int *)(DAT_102aca14 + 0x14e0) == 0)) {
          FUN_10003f40();
          return;
        }
      }
      if (*(int *)(param_1 + 0x143) != 0) {
        DVar4 = GetTickCount();
        uVar5 = DVar4 - *(int *)(param_1 + 0x147);
        SVar2 = GetAsyncKeyState(0x25);
        if ((SVar2 < 0) && (0xfa < uVar5)) {
          DVar4 = GetTickCount();
          *(DWORD *)(param_1 + 0x147) = DVar4;
          FUN_10005ec0();
          return;
        }
        SVar2 = GetAsyncKeyState(0x27);
        if ((SVar2 < 0) && (0xfa < uVar5)) {
          DVar4 = GetTickCount();
          *(DWORD *)(param_1 + 0x147) = DVar4;
          FUN_10005e30();
        }
      }
    }
  }
  return;
}


/* END FUNCTION 0x10005f40 */
