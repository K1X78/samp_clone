/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10083e10
 * Name: FUN_10083e10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __fastcall FUN_10083e10(float *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (*param_1 < 1.0) {
    if (*param_1 < 0.0 == (*param_1 == 0.0)) {
      uVar3 = FUN_100f9324();
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0xff;
  }
  if (param_1[1] < 1.0) {
    if (param_1[1] < 0.0 == (param_1[1] == 0.0)) {
      uVar2 = FUN_100f9324();
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xff;
  }
  if (param_1[2] < 1.0) {
    if (param_1[2] < 0.0 == (param_1[2] == 0.0)) {
      uVar4 = FUN_100f9324();
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0xff;
  }
  if (1.0 <= param_1[3]) {
    return ((uVar3 | 0xff00) << 8 | uVar2) << 8 | uVar4;
  }
  if (param_1[3] < 0.0 != (param_1[3] == 0.0)) {
    return (uVar3 << 8 | uVar2) << 8 | uVar4;
  }
  iVar1 = FUN_100f9324();
  return ((iVar1 << 8 | uVar3) << 8 | uVar2) << 8 | uVar4;
}


/* END FUNCTION 0x10083e10 */
