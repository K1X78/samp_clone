/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100abab0
 * Name: FUN_100abab0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


float10 __fastcall FUN_100abab0(int param_1)

{
  int iVar1;
  float10 fVar2;
  undefined1 local_40 [16];
  float local_30;
  float local_2c;
  
  if (*(int *)(param_1 + 0x2a4) != 0) {
    iVar1 = FUN_100b3770(*(undefined4 *)(param_1 + 0x44));
    if (iVar1 != 0) {
      FUN_1009e950(local_40);
      fVar2 = (float10)fpatan(-(float10)local_30,(float10)local_2c);
      fVar2 = fVar2 * (float10)57.295776;
      if (fVar2 < (float10)0.0) {
        return fVar2 + (float10)360.0;
      }
      if ((float10)360.0 <= fVar2) {
        fVar2 = fVar2 - (float10)360.0;
      }
      return fVar2;
    }
  }
  return (float10)0.0;
}


/* END FUNCTION 0x100abab0 */
