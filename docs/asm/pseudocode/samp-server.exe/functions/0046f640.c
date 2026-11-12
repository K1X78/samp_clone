/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0046f640
 * Name: FUN_0046f640
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall
FUN_0046f640(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint local_4;
  
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = *param_5;
  local_4 = 1;
  iVar4 = FUN_00401710(this,(byte *)"OnPlayerWeaponShot",(int *)&param_5);
  if (iVar4 == 0) {
    FUN_00401c50(this,uVar2);
    FUN_00401c50(this,uVar1);
    FUN_00401c50(this,uVar3);
    FUN_00401c50(this,param_4);
    FUN_00401c50(this,param_3);
    FUN_00401c50(this,param_2);
    FUN_00401c50(this,param_1);
    FUN_00401c90(this,&local_4,(int)param_5);
  }
  return local_4;
}


/* END FUNCTION 0x0046f640 */
