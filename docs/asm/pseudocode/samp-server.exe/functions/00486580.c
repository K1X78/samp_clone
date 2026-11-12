/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00486580
 * Name: FUN_00486580
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00486580(void *this,float param_1,float param_2,float param_3)

{
  float fVar1;
  float local_4;
  
  fVar1 = SQRT(param_3 * param_3 + param_2 * param_2 + param_1 * param_1);
  local_4 = fVar1;
  FUN_0044df40(this,(byte *)&local_4,0x20,'\x01');
  if (1e-05 < fVar1) {
    fVar1 = 1.0 / fVar1;
    FUN_004845a0(this,fVar1 * param_1);
    FUN_004845a0(this,fVar1 * param_2);
    FUN_004845a0(this,fVar1 * param_3);
  }
  return;
}


/* END FUNCTION 0x00486580 */
