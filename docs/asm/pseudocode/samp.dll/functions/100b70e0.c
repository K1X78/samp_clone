/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b70e0
 * Name: FUN_100b70e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100b70e0(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar2 = FUN_100b5d20(*(int *)(param_1 + 0x4c));
    if (iVar2 == 5) {
      fVar1 = *(float *)(*(int *)(param_1 + 0x4c) + 0x9cc);
      if (param_2 == 1) {
        if (fVar1 == 0.0) {
          (*(code *)0x6cac20)();
          return;
        }
      }
      else if ((param_2 == 0) && (fVar1 == 1.0)) {
        (*(code *)0x6cac70)();
      }
    }
  }
  return;
}


/* END FUNCTION 0x100b70e0 */
