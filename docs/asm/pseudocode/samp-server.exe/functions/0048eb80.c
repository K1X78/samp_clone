/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048eb80
 * Name: FUN_0048eb80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl
FUN_0048eb80(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,int param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 *param_9)

{
  int iVar1;
  undefined1 *local_10;
  undefined4 local_c;
  int local_8;
  int local_4;
  
  local_8 = *param_3;
  *(undefined4 *)(param_1 + 0x68) = param_6;
  local_c = param_2;
  *(undefined1 ***)(param_1 + 0xbc) = &local_10;
  local_10 = &LAB_0048ea00;
  local_4 = 0;
  iVar1 = FUN_0048e9c0(param_1,param_4,param_5,0,param_8,param_9);
  if (iVar1 == 0) {
    iVar1 = FUN_0048ea50();
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


/* END FUNCTION 0x0048eb80 */
