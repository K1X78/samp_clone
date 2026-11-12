/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a0bb0
 * Name: FUN_100a0bb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4
FUN_100a0bb0(int param_1,float param_2,float param_3,float param_4,uint param_5,int param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 local_c [2];
  
  local_c[0] = 0;
  if (param_6 != 0) {
    if (param_6 == 1) {
      puVar1 = &DAT_1011e718;
      goto LAB_100a0c7a;
    }
    if (param_6 == 2) {
      puVar1 = &DAT_1011e858;
      goto LAB_100a0c7a;
    }
    if (param_6 == 3) {
      puVar1 = &DAT_1011e704;
      goto LAB_100a0c7a;
    }
  }
  puVar1 = &DAT_1011e6dc;
LAB_100a0c7a:
  FUN_100b1f10(puVar1,(double)param_2,(double)param_3,(double)param_4,param_1,local_c);
  if (param_1 == 0) {
    uVar3 = local_c[0];
    if (param_5 < 0x3ec) {
      puVar1 = &DAT_1011e6c8;
      FUN_100b1f10();
      uVar2 = CONCAT44(puVar1,2);
    }
    else {
      puVar1 = &DAT_1011e6c8;
      FUN_100b1f10();
      uVar2 = CONCAT44(puVar1,3);
    }
    FUN_100b1f10(&DAT_1011e6f0,local_c[0],uVar2,uVar3,param_5);
  }
  return local_c[0];
}


/* END FUNCTION 0x100a0bb0 */
