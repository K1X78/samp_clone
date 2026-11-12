/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10054d50
 * Name: FUN_10054d50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10054d50(undefined4 param_1,char *param_2,int param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  pcVar1 = param_2;
  if (*param_2 == '\0') {
    FUN_1001f9d0();
  }
  else {
    FUN_1001f9f0();
  }
  if (*pcVar1 == '\0') {
    if (param_3 == 0) {
      param_2 = *(char **)(pcVar1 + 1);
      FUN_1001faa0(&param_2,0x20,1);
      return;
    }
    if (param_3 == 1) {
      uVar2 = *(undefined4 *)(pcVar1 + 5);
      uVar4 = 0;
      uVar3 = 0xffff;
      FUN_100536f0(uVar2,0xffff,param_1,0);
      FUN_10053c60(uVar2,uVar3,param_1,uVar4);
      return;
    }
    param_2 = *(char **)(pcVar1 + 1);
    FUN_1001faa0(&param_2,0x20,1);
    FUN_1001fbe0(*(undefined4 *)(pcVar1 + 5),*(undefined4 *)(pcVar1 + 1));
  }
  return;
}


/* END FUNCTION 0x10054d50 */
