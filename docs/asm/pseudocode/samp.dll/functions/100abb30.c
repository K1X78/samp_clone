/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100abb30
 * Name: FUN_100abb30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100abb30(int param_1,undefined4 param_2)

{
  int iVar1;
  float10 fVar2;
  
  if (*(int *)(param_1 + 0x2a4) != 0) {
    iVar1 = FUN_100b3770(*(undefined4 *)(param_1 + 0x44));
    if (iVar1 != 0) {
      fVar2 = (float10)FUN_100b54b0(param_2);
      *(float *)(*(int *)(param_1 + 0x2a4) + 0x55c) = (float)fVar2;
      fVar2 = (float10)FUN_100b54b0(param_2);
      *(float *)(*(int *)(param_1 + 0x2a4) + 0x558) = (float)fVar2;
    }
  }
  return;
}


/* END FUNCTION 0x100abb30 */
