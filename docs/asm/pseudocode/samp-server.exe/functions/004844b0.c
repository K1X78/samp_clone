/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004844b0
 * Name: FUN_004844b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_004844b0(void *this,float param_1,float param_2,float param_3,float param_4)

{
  ulonglong uVar1;
  
  if (0.0 <= param_1) {
    FUN_0044de70(this);
  }
  else {
    FUN_0044de90(this);
  }
  if (0.0 <= param_2) {
    FUN_0044de70(this);
  }
  else {
    FUN_0044de90(this);
  }
  if (0.0 <= param_3) {
    FUN_0044de70(this);
  }
  else {
    FUN_0044de90(this);
  }
  if (0.0 <= param_4) {
    FUN_0044de70(this);
  }
  else {
    FUN_0044de90(this);
  }
  uVar1 = FUN_004a0540();
  param_2 = (float)uVar1;
  FUN_0044df40(this,(byte *)&param_2,0x10,'\x01');
  uVar1 = FUN_004a0540();
  param_2 = (float)uVar1;
  FUN_0044df40(this,(byte *)&param_2,0x10,'\x01');
  uVar1 = FUN_004a0540();
  param_2 = (float)uVar1;
  FUN_0044df40(this,(byte *)&param_2,0x10,'\x01');
  return;
}


/* END FUNCTION 0x004844b0 */
