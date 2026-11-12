/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10021800
 * Name: FUN_10021800
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_10021800(int *param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1[1] == 0) {
    *param_3 = 0;
    return 0;
  }
  iVar3 = param_1[1] + -1;
  iVar4 = param_1[1] / 2;
  iVar2 = 0;
  iVar1 = FUN_10020860(param_2,iVar4 * 0xb + *param_1);
  while( true ) {
    if (iVar1 == 0) {
      *param_3 = 1;
      return iVar4;
    }
    if (iVar1 < 0) {
      iVar3 = iVar4 + -1;
    }
    else {
      iVar2 = iVar4 + 1;
    }
    iVar4 = (iVar3 - iVar2) / 2 + iVar2;
    if (iVar3 < iVar2) break;
    iVar1 = FUN_10020860(param_2,iVar4 * 0xb + *param_1);
  }
  *param_3 = 0;
  return iVar2;
}


/* END FUNCTION 0x10021800 */
