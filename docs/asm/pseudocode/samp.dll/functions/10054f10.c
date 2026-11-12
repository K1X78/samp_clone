/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10054f10
 * Name: FUN_10054f10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10054f10(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = param_4;
  FUN_1001faa0(&param_2,0x20,1);
  piVar1 = param_3;
  uVar4 = 0;
  if (param_3[1] != 0) {
    iVar3 = 0;
    do {
      FUN_10054d50(uVar2,*(undefined4 *)(*param_1 + uVar4 * 4),
                   *(undefined4 *)(*piVar1 + 0x20 + iVar3));
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 0x24;
    } while (uVar4 < (uint)piVar1[1]);
  }
  return;
}


/* END FUNCTION 0x10054f10 */
