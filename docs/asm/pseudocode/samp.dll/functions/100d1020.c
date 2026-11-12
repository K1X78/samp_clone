/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d1020
 * Name: FUN_100d1020
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100d1020(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  *param_2 = 0;
  if (*(int *)(param_1 + 0x2b4) == 0) {
    if (*(int *)(param_1 + 700) != 0) {
      return 0;
    }
  }
  else if (*(int *)(param_1 + 700) != 0) {
    if (*(int *)(*(int *)(param_1 + 800) + 0x18) != 0) {
      return 0;
    }
    *param_2 = 1;
    return 0;
  }
  iVar2 = FUN_100ead00(param_1,0);
  if (iVar2 == 0) {
    if ((*(int *)(param_1 + 0xf0) == 2) && (*(int *)(param_1 + 0x304) == 0)) {
      return 0;
    }
    if (((*(int *)(param_1 + 0x2c4) != 0) && (*(int *)(param_1 + 0x298) != 0)) &&
       (iVar3 = FUN_100ea090(param_1), iVar3 != 0)) {
      return 0;
    }
    pcVar1 = *(code **)(*(int *)(param_1 + 800) + 0x14);
    if (pcVar1 == (code *)0x0) {
      *param_2 = 1;
    }
    else {
      iVar2 = (*pcVar1)(param_1,param_2);
    }
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 700) = 1;
    }
  }
  return iVar2;
}


/* END FUNCTION 0x100d1020 */
