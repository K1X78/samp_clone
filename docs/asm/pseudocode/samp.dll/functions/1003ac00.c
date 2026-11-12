/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003ac00
 * Name: FUN_1003ac00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_1003ac00(int *param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1[1] == 0) {
    *param_3 = 0;
    return 0;
  }
  iVar2 = param_1[1] + -1;
  iVar3 = param_1[1] / 2;
  iVar4 = 0;
  iVar1 = FUN_10037d60(param_2,*param_1 + iVar3 * 10);
  while( true ) {
    if (iVar1 == 0) {
      *param_3 = 1;
      return iVar3;
    }
    if (iVar1 < 0) {
      iVar2 = iVar3 + -1;
    }
    else {
      iVar4 = iVar3 + 1;
    }
    iVar3 = (iVar2 - iVar4) / 2 + iVar4;
    if (iVar2 < iVar4) break;
    iVar1 = FUN_10037d60(param_2,*param_1 + iVar3 * 10);
  }
  *param_3 = 0;
  return iVar4;
}


/* END FUNCTION 0x1003ac00 */
