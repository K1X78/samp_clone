/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0046f1c0
 * Name: FUN_0046f1c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall
FUN_0046f1c0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint local_c;
  undefined4 local_8;
  int local_4;
  
  if (*(char *)((int)this + 0x68) == '\0') {
    return 0;
  }
  uVar1 = param_6[1];
  uVar2 = param_6[2];
  uVar3 = *param_6;
  local_8 = *param_5;
  uVar4 = param_5[1];
  uVar5 = param_5[2];
  local_c = 1;
  iVar6 = FUN_00401710(this,(byte *)"OnUnoccupiedVehicleUpdate",&local_4);
  if (iVar6 == 0) {
    FUN_00401c50(this,uVar2);
    FUN_00401c50(this,uVar1);
    FUN_00401c50(this,uVar3);
    FUN_00401c50(this,uVar5);
    FUN_00401c50(this,uVar4);
    FUN_00401c50(this,local_8);
    FUN_00401c50(this,param_3);
    FUN_00401c50(this,param_2);
    FUN_00401c50(this,param_1);
    FUN_00401c90(this,&local_c,local_4);
  }
  return local_c;
}


/* END FUNCTION 0x0046f1c0 */
