/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10088700
 * Name: FUN_10088700
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10088700(int param_1)

{
  LPRECT lprc;
  undefined4 uVar1;
  int iVar2;
  
  FUN_100848a0();
  lprc = (LPRECT)(param_1 + 0x11f);
  lprc->left = *(LONG *)(param_1 + 0x3d);
  *(undefined4 *)(param_1 + 0x123) = *(undefined4 *)(param_1 + 0x41);
  *(undefined4 *)(param_1 + 0x127) = *(undefined4 *)(param_1 + 0x45);
  *(undefined4 *)(param_1 + 299) = *(undefined4 *)(param_1 + 0x49);
  *(int *)(param_1 + 0x127) = *(int *)(param_1 + 0x127) - *(int *)(param_1 + 0x12f);
  InflateRect(lprc,-*(int *)(param_1 + 0x133),-*(int *)(param_1 + 0x133));
  uVar1 = *(undefined4 *)(param_1 + 0x123);
  ((LPRECT)(param_1 + 0x10f))->left = lprc->left;
  *(undefined4 *)(param_1 + 0x113) = uVar1;
  *(undefined4 *)(param_1 + 0x117) = *(undefined4 *)(param_1 + 0x127);
  *(undefined4 *)(param_1 + 0x11b) = *(undefined4 *)(param_1 + 299);
  InflateRect((LPRECT)(param_1 + 0x10f),-*(int *)(param_1 + 0x137),0);
  *(int *)(param_1 + 0x65) = *(int *)(param_1 + 0x45) - *(int *)(param_1 + 0x12f);
  *(undefined4 *)(param_1 + 0x69) = *(undefined4 *)(param_1 + 0x41);
  (**(code **)(*(int *)(param_1 + 0x5d) + 0x4c))();
  *(undefined4 *)(param_1 + 0x6d) = *(undefined4 *)(param_1 + 0x12f);
  *(undefined4 *)(param_1 + 0x71) = *(undefined4 *)(param_1 + 0x14);
  (**(code **)(*(int *)(param_1 + 0x5d) + 0x4c))();
  iVar2 = FUN_10086b40(*(undefined4 *)(**(int **)(param_1 + 0x20) + 4));
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x108) != 0)) {
    *(int *)(param_1 + 0xef) =
         (*(int *)(param_1 + 0x11b) - *(int *)(param_1 + 0x113)) / *(int *)(iVar2 + 0x108);
    FUN_10084e80();
    FUN_10084da0();
    FUN_10084e30(*(undefined4 *)(param_1 + 0x143));
  }
  return;
}


/* END FUNCTION 0x10088700 */
