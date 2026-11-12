/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c4cf0
 * Name: FUN_100c4cf0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4
FUN_100c4cf0(int param_1,int param_2,undefined4 param_3,int *param_4,undefined4 param_5,int *param_6
            )

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *local_10;
  undefined4 local_c;
  int local_8;
  int local_4;
  
  local_8 = *param_4;
  local_c = param_3;
  local_10 = &LAB_100c4c70;
  local_4 = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (param_2 != 0) {
    FUN_100c4960(param_1);
  }
  FUN_100c4a90(param_1);
  iVar1 = *(int *)(param_1 + 0x78);
  FUN_100c1fb0();
  *(undefined1 ***)(param_1 + 0xb5) = &local_10;
  uVar2 = FUN_100c42b0(param_1,1,param_5,*param_6);
  *param_6 = *(int *)(param_1 + 0x78) - iVar1;
  *param_4 = *param_4 - local_8;
  if (local_4 != 0) {
    uVar2 = 7;
  }
  return uVar2;
}


/* END FUNCTION 0x100c4cf0 */
