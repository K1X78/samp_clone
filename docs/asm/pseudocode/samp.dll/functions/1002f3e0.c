/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1002f3e0
 * Name: FUN_1002f3e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_1002f3e0(int param_1,undefined4 param_2,undefined2 param_3,char param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((*(char *)(param_1 + 99) != '\0') &&
     (iVar1 = FUN_1002f320(param_1,param_2,param_3,0), iVar1 != 0)) {
    return 0;
  }
  iVar1 = param_5;
  if (*(char *)(param_1 + 0x67) == '\0') {
    if ((param_4 == '\0') || (iVar2 = FUN_10028b50(param_5), iVar2 != 0)) {
      return 0;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x88);
    *(int *)(param_1 + 0x88) = iVar1 + 1;
  }
  uVar3 = FUN_100295f0(iVar1);
  if ((((*(char *)(param_1 + 99) != '\0') || (*(char *)(param_1 + 100) != '\0')) ||
      (*(char *)(param_1 + 0x65) != '\0')) || (*(char *)(param_1 + 0x66) != '\0')) {
    FUN_10026db0(&param_2,6);
  }
  if (*(char *)(param_1 + 0x65) != '\0') {
    iVar1 = FUN_1002e2b0();
    FUN_10026d30(iVar1);
    FUN_10026d30(iVar1 + 15000);
  }
  return uVar3;
}


/* END FUNCTION 0x1002f3e0 */
