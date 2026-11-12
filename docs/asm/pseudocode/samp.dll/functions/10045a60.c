/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10045a60
 * Name: FUN_10045a60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_10045a60(int *param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_1[1] == 0) {
    *param_3 = 0;
    return 0;
  }
  iVar1 = *param_1;
  iVar3 = param_1[1] + -1;
  iVar4 = param_1[1] / 2;
  iVar5 = 0;
  iVar2 = FUN_10044590(param_2,iVar1 + iVar4 * 4);
  while( true ) {
    if (iVar2 == 0) {
      *param_3 = 1;
      return iVar4;
    }
    if (iVar2 < 0) {
      iVar3 = iVar4 + -1;
    }
    else {
      iVar5 = iVar4 + 1;
    }
    iVar4 = (iVar3 - iVar5) / 2 + iVar5;
    if (iVar3 < iVar5) break;
    iVar2 = FUN_10044590(param_2,iVar1 + iVar4 * 4);
  }
  *param_3 = 0;
  return iVar5;
}


/* END FUNCTION 0x10045a60 */
