/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00496a90
 * Name: FUN_00496a90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00496a90(undefined4 *param_1)

{
  float fVar1;
  void *this;
  char cVar2;
  float10 fVar3;
  ulonglong uVar4;
  
  fVar3 = FUN_00492160();
  fVar1 = (float)fVar3;
  FUN_00494680((int)param_1);
  FUN_00496890(param_1);
  if (*(int *)((int)param_1 + 0x5e) == 1) {
    if ((void *)param_1[2] != (void *)0x0) {
      FUN_00466730((void *)param_1[2],fVar1);
    }
    if (param_1[3] != 0) {
      FUN_00467640(param_1[3]);
    }
    if ((void *)param_1[5] != (void *)0x0) {
      FUN_00465560((void *)param_1[5],fVar1);
    }
    if ((void *)*param_1 != (void *)0x0) {
      FUN_0046db30((void *)*param_1,fVar1);
    }
    this = (void *)param_1[0xf];
    if (this != (void *)0x0) {
      uVar4 = FUN_004a0540();
      FUN_00483320(this,(int)uVar4);
    }
    if (param_1[0xe] != 0) {
      FUN_004815a0(param_1[0xe]);
    }
  }
  else if ((*(int *)((int)param_1 + 0x5e) == 2) &&
          (_DAT_0051c180 = _DAT_0051c180 + fVar1, 12.0 < _DAT_0051c180)) {
    FUN_004963f0(param_1);
  }
  cVar2 = FUN_00490cc0(DAT_004fc43c,"announce");
  if (cVar2 != '\0') {
    FUN_004938c0(fVar1);
  }
  FUN_00469bf0(DAT_004fc440);
  return;
}


/* END FUNCTION 0x00496a90 */
