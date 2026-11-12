/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1007d580
 * Name: FUN_1007d580
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1007d580(uint param_1,float param_2)

{
  char cVar1;
  byte bVar2;
  float10 fVar3;
  
  FUN_1007cbc0();
  cVar1 = FUN_1007a6c0();
  if (cVar1 != '\0') {
    FUN_1007cbc0();
    bVar2 = FUN_1007a6c0();
    param_1 = (uint)bVar2;
    FUN_1007cbc0();
    fVar3 = (float10)FUN_1007a740();
    param_2 = (float)fVar3;
  }
  FUN_1007cbc0(param_1);
  FUN_10079480(param_1);
  FUN_1007cbc0(param_2);
  FUN_10079500(param_2);
  return;
}


/* END FUNCTION 0x1007d580 */
