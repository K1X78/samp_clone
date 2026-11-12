/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100aee20
 * Name: FUN_100aee20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


float10 FUN_100aee20(void)

{
  int iVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  float local_4;
  
  iVar1 = FUN_100ae7b0(0);
  if (iVar1 == 0) {
    return (float10)0.0;
  }
  local_c = 0;
  local_8 = 0;
  local_4 = 0.0;
  local_10 = 0;
  FUN_100b53e0(iVar1,&local_c,&local_10);
  return (float10)1.0 - (float10)local_4;
}


/* END FUNCTION 0x100aee20 */
