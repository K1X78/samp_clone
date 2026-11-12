/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1008c050
 * Name: FUN_1008c050
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1008c050(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((DAT_10180610 != 0) && (*(int *)(DAT_10180610 + 0x18) == param_1)) {
    DAT_10180610 = 0;
  }
  if ((DAT_10180614 != 0) && (*(int *)(DAT_10180614 + 0x18) == param_1)) {
    DAT_10180614 = 0;
  }
  iVar2 = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (0 < *(int *)(param_1 + 0x162)) {
    do {
      puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x15e) + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x162));
  }
  thunk_FUN_10086410(0);
  return;
}


/* END FUNCTION 0x1008c050 */
