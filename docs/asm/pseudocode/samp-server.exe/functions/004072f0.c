/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004072f0
 * Name: FUN_004072f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_004072f0(int *param_1)

{
  int iVar1;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *this;
  
  iVar1 = FUN_00401710(param_1,(byte *)"@timer",&DAT_004ca120);
  this = extraout_ECX;
  if (iVar1 == 0) {
    iVar1 = FUN_00401a80((int)param_1,0x656c6449,&DAT_004ed184);
    if (iVar1 != 0) {
      DAT_004ed184 = 0;
    }
    FUN_00401ac0((int)param_1,0x656c6449,&LAB_00407270);
    this = extraout_ECX_00;
  }
  FUN_00401ba0(this,param_1,(int *)&PTR_s_gettime_004b282c,-1);
  return;
}


/* END FUNCTION 0x004072f0 */
