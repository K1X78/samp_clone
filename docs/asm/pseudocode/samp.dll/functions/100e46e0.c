/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e46e0
 * Name: FUN_100e46e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100e46e0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 local_34;
  undefined1 local_30 [4];
  undefined1 local_2c [12];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_34 = 0;
  iVar1 = FUN_100e0e40(2,param_1,local_30);
  if (0 < iVar1) {
    uVar2 = FUN_100e0b20(2,local_30,param_1,param_2);
    return uVar2;
  }
  local_20 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  puVar3 = (undefined1 *)0x0;
  local_1c = 2;
  local_18 = 1;
  if (param_2 != 0) {
    FUN_100cc780(local_2c,0xc,&DAT_1011c6d4,param_2);
    puVar3 = local_2c;
  }
  FUN_100e0810(param_1,puVar3,&local_20,&local_34);
  return local_34;
}


/* END FUNCTION 0x100e46e0 */
