/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b85a0
 * Name: FUN_100b85a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100b85a0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x4c);
  if (iVar2 != 0) {
    if (param_2 == 0) {
      *(byte *)(iVar2 + 0x428) = *(byte *)(iVar2 + 0x428) & 0xef;
      if (*(int *)(param_1 + 0x4c) != 0) {
        iVar2 = FUN_100b5d20(*(int *)(param_1 + 0x4c));
        uVar1 = _DAT_00b6b990;
        if ((iVar2 == 3) && (*(int *)(param_1 + 0x75) != 0)) {
          if ((*(int *)(param_1 + 0x4c) != 0) &&
             (0.0 < *(float *)(*(int *)(param_1 + 0x4c) + 0x4c0))) {
            (*(code *)0x4fcf40)();
          }
          _DAT_00b6b990 = uVar1;
          *(undefined4 *)(param_1 + 0x75) = 0;
          return;
        }
      }
    }
    else {
      *(byte *)(iVar2 + 0x428) = *(byte *)(iVar2 + 0x428) | 0x10;
      if (*(int *)(param_1 + 0x4c) != 0) {
        iVar2 = FUN_100b5d20(*(int *)(param_1 + 0x4c));
        if (iVar2 == 3) {
          iVar2 = FUN_100b6c20();
          if (iVar2 != 0) {
            iVar2 = FUN_100b6f30();
            if (iVar2 == 0) {
              *(undefined4 *)(param_1 + 0x75) = 1;
            }
          }
        }
      }
    }
  }
  return;
}


/* END FUNCTION 0x100b85a0 */
