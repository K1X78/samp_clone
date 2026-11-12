/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100acca0
 * Name: FUN_100acca0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100acca0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x2a4) != 0) {
    iVar1 = FUN_100b3770(*(undefined4 *)(param_1 + 0x44));
    if (iVar1 != 0) {
      iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x2a4) + 0x47c) + 0x10);
      if (iVar1 != 0) {
        iVar1 = FUN_100b3ca0(iVar1);
        if (iVar1 == 0x3fe) {
          (*(code *)0x6275e0)(1);
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x2a4) + 0x47c) + 0x10) = 0;
        }
      }
    }
  }
  return;
}


/* END FUNCTION 0x100acca0 */
