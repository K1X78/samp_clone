/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004505e0
 * Name: FUN_004505e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


float10 __fastcall FUN_004505e0(int param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  
  iVar1 = *(int *)(param_1 + 0x7e8);
  if (iVar1 != 0) {
    fVar2 = (float10)*(int *)(param_1 + 0x7f0);
    if (*(int *)(param_1 + 0x7f0) < 0) {
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


/* END FUNCTION 0x004505e0 */
