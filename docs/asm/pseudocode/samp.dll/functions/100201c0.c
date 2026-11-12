/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100201c0
 * Name: FUN_100201c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_100201c0(int *param_1,undefined4 param_2,undefined1 *param_3)

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
  iVar1 = FUN_1001fd70(param_2,iVar3 * 9 + *param_1);
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
    iVar1 = FUN_1001fd70(param_2,iVar3 * 9 + *param_1);
  }
  *param_3 = 0;
  return iVar4;
}


/* END FUNCTION 0x100201c0 */
