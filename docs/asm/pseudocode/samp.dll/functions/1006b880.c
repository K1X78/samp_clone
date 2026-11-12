/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006b880
 * Name: FUN_1006b880
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_1006b880(int *param_1)

{
  int iVar1;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = FUN_100b1700(2);
  param_1[2] = iVar1;
  if (iVar1 != 0) {
    local_10 = 0x3f800000;
    local_c = 0x3f800000;
    local_8 = 0x3f800000;
    local_4 = 0x3f800000;
    FUN_100b1770(iVar1,&local_10);
    iVar1 = FUN_100b12d0(0x100,0x100,0,0x505);
    param_1[4] = iVar1;
    iVar1 = FUN_100b12d0(0x100,0x100,0,1);
    param_1[5] = iVar1;
    iVar1 = FUN_100b1430();
    *param_1 = iVar1;
    iVar1 = FUN_100b1390();
    param_1[1] = iVar1;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0x42480000;
    FUN_100b18f0(iVar1,&local_1c,1);
    FUN_100b1920(param_1[1],0,0x42b40000);
    if ((((*param_1 != 0) && (param_1[1] != 0)) && (param_1[4] != 0)) && (param_1[5] != 0)) {
      FUN_100b15b0(*param_1,param_1[4],param_1[5]);
      FUN_100b1580(*param_1,param_1[1]);
      FUN_100b1680(*param_1,0x43960000,0x3c23d70a);
      local_24 = 0x3f000000;
      local_20 = 0x3f000000;
      FUN_100b16d0(*param_1,&local_24);
      FUN_100b18c0(*param_1,1);
      FUN_100b14b0(*param_1);
      iVar1 = FUN_100b1320(param_1[4]);
      param_1[3] = iVar1;
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x1006b880 */
