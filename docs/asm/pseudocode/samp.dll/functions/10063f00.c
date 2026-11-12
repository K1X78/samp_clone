/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10063f00
 * Name: FUN_10063f00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool __thiscall FUN_10063f00(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int *local_4;
  
  if (param_1[1] != 0) {
    local_4 = param_1;
    (**(code **)(*param_1 + 0x28))();
  }
  iVar1 = 0;
  local_4 = (int *)0x0;
  switch(param_4) {
  case 0:
    local_4 = (int *)0x72;
    break;
  case 1:
    local_4 = (int *)0x2b72;
    iVar1 = 2;
    goto switchD_10063f2e_default;
  case 2:
    local_4 = (int *)0x61;
    break;
  case 3:
    local_4 = (int *)0x77;
    break;
  default:
    goto switchD_10063f2e_default;
  }
  iVar1 = 1;
switchD_10063f2e_default:
  if (param_3 == 0) {
    *(undefined1 *)((int)&local_4 + iVar1) = 0x74;
  }
  else if (param_3 == 1) {
    *(undefined1 *)((int)&local_4 + iVar1) = 0x62;
  }
  iVar1 = FUN_100f9cc9(param_2,&local_4);
  param_1[1] = iVar1;
  return iVar1 != 0;
}


/* END FUNCTION 0x10063f00 */
