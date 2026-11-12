/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10043710
 * Name: FUN_10043710
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


float10 __fastcall FUN_10043710(undefined4 param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_100436c0(param_1);
  fVar2 = (float10)iVar1;
  if (iVar1 < 0) {
    fVar2 = fVar2 + (float10)4294967296.0;
  }
  return fVar2 * (float10)2.3283064365386963e-10;
}


/* END FUNCTION 0x10043710 */
