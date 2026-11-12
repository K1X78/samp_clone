/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10030b90
 * Name: FUN_10030b90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10030b90(int param_1,undefined4 param_2,undefined2 param_3,int *param_4)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  
  piVar2 = param_4;
  bVar1 = false;
  (**(code **)(*param_4 + 8))(param_4,param_2,param_3,"CHANNELS:\r\n");
  param_4 = (int *)(param_1 + 0x1c);
  uVar3 = 0;
  do {
    if (*param_4 != 0) {
      (**(code **)(*piVar2 + 8))(piVar2,param_2,param_3,"%i. %s\r\n",uVar3 + 1,*param_4);
      bVar1 = true;
    }
    uVar3 = uVar3 + 1;
    param_4 = param_4 + 1;
  } while (uVar3 < 0x20);
  if (!bVar1) {
    (**(code **)(*piVar2 + 8))(piVar2,param_2,param_3,"None.\r\n");
  }
  return;
}


/* END FUNCTION 0x10030b90 */
