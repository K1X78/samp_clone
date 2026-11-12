/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10034170
 * Name: thunk_FUN_10038610
 * Status: ok
 * Single JMP forwarder to 0x10038610; Ghidra C may show the target body.
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


float10 __fastcall thunk_FUN_10038610(int param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  
  iVar1 = *(int *)(param_1 + 0x7d9);
  if (iVar1 != 0) {
    fVar2 = (float10)*(int *)(param_1 + 0x7e1);
    if (*(int *)(param_1 + 0x7e1) < 0) {
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


/* END FUNCTION 0x10034170 */
