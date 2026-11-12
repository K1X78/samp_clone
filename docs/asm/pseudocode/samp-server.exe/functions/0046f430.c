/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0046f430
 * Name: FUN_0046f430
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall
FUN_0046f430(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  uint local_8;
  int local_4;
  
  local_8 = 0;
  iVar1 = FUN_00401710(this,(byte *)"OnPlayerEditObject",&local_4);
  if (iVar1 == 0) {
    FUN_00401c50(this,param_10);
    FUN_00401c50(this,param_9);
    FUN_00401c50(this,param_8);
    FUN_00401c50(this,param_7);
    FUN_00401c50(this,param_6);
    FUN_00401c50(this,param_5);
    FUN_00401c50(this,param_4);
    FUN_00401c50(this,param_3);
    FUN_00401c50(this,param_2);
    FUN_00401c50(this,param_1);
    FUN_00401c90(this,&local_8,local_4);
  }
  return local_8;
}


/* END FUNCTION 0x0046f430 */
