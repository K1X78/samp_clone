/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c4f00
 * Name: FUN_100c4f00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100c4f00(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,int param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  undefined1 *local_10;
  undefined4 local_c;
  int local_8;
  int local_4;
  
  local_8 = *param_3;
  *(undefined4 *)(param_1 + 0x68) = param_6;
  local_c = param_2;
  *(undefined1 ***)(param_1 + 0xb5) = &local_10;
  local_10 = &LAB_100c4c70;
  local_4 = 0;
  iVar1 = FUN_100c4c20(param_1,param_4,param_5,0,param_8,param_9);
  if (iVar1 == 0) {
    iVar1 = FUN_100c4da0();
    if ((iVar1 == 0) && ((*(int *)(param_1 + 0x78) != param_5 || (*(int *)(param_1 + 0x7c) != 0))))
    {
      iVar1 = 0xb;
    }
  }
  *param_3 = *param_3 - local_8;
  if (local_4 != 0) {
    iVar1 = 7;
  }
  return iVar1;
}


/* END FUNCTION 0x100c4f00 */
