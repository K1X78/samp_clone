/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10038650
 * Name: FUN_10038650
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


float10 __fastcall FUN_10038650(int param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  
  iVar1 = *(int *)(param_1 + 0x7dd);
  if (iVar1 != 0) {
    fVar2 = (float10)*(int *)(param_1 + 0x7e5);
    if (*(int *)(param_1 + 0x7e5) < 0) {
      fVar2 = fVar2 + (float10)4.2949673e+09;
    }
    fVar3 = (float10)iVar1;
    if (iVar1 < 0) {
      fVar3 = fVar3 + (float10)4.2949673e+09;
    }
    return fVar2 / fVar3;
  }
  return (float10)0.0;
}


/* END FUNCTION 0x10038650 */
