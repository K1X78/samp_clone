/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10081dd0
 * Name: FUN_10081dd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_10081dd0(undefined4 param_1,char param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar3 = 1;
  FUN_1007cbc0(1);
  FUN_100799c0(uVar3);
  FUN_1007cbc0();
  cVar1 = FUN_10079800();
  if (cVar1 == '\0') {
    FUN_1007cbc0();
    cVar1 = FUN_10079980();
    if (cVar1 != '\0') {
      return 0x80004005;
    }
    uVar2 = FUN_10081510("Direct3D Window",0,0,0,0x80000000,0x80000000);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
  }
  if (param_2 == '\0') {
    local_3c = 2;
    local_38 = 2;
    local_34 = 2;
    local_30 = 2;
    local_2c = 2;
    local_28 = 2;
    local_24 = 2;
    local_20 = 2;
    local_1c = 2;
    local_18 = 2;
    local_14 = 2;
    local_10 = 2;
    local_c = 2;
    local_8 = 2;
    local_4 = 2;
    uVar2 = FUN_1007f340(param_1,param_1,&local_3c);
    if ((int)uVar2 < 0) {
      FUN_1007bf40(uVar2);
      return uVar2;
    }
  }
  uVar2 = FUN_1007f770(param_1,0,0,param_3);
  return uVar2 & (-1 < (int)uVar2) - 1;
}


/* END FUNCTION 0x10081dd0 */
