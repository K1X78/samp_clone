/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0046f310
 * Name: FUN_0046f310
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall
FUN_0046f310(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4
            )

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  
  local_8 = param_4[4];
  local_10 = param_4[6];
  uVar1 = param_4[2];
  uVar2 = param_4[3];
  local_c = param_4[5];
  local_18 = param_4[8];
  local_14 = param_4[7];
  local_1c = param_4[9];
  uVar3 = param_4[10];
  local_20 = 0;
  iVar4 = FUN_00401710(this,(byte *)"OnPlayerEditAttachedObject",&local_4);
  if (iVar4 == 0) {
    FUN_00401c50(this,uVar3);
    FUN_00401c50(this,local_1c);
    FUN_00401c50(this,local_18);
    FUN_00401c50(this,local_14);
    FUN_00401c50(this,local_10);
    FUN_00401c50(this,local_c);
    FUN_00401c50(this,local_8);
    FUN_00401c50(this,uVar2);
    FUN_00401c50(this,uVar1);
    FUN_00401c50(this,param_4[1]);
    FUN_00401c50(this,*param_4);
    FUN_00401c50(this,param_2);
    FUN_00401c50(this,param_3);
    FUN_00401c50(this,param_1);
    FUN_00401c90(this,&local_20,local_4);
  }
  return local_20;
}


/* END FUNCTION 0x0046f310 */
