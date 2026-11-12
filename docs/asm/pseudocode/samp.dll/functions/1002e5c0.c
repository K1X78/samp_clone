/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1002e5c0
 * Name: FUN_1002e5c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1002e5c0(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  while( true ) {
    uVar1 = param_1[1];
    if ((uint)param_1[2] < uVar1) {
      iVar3 = param_1[3] - uVar1;
    }
    else {
      iVar3 = -uVar1;
    }
    if (param_1[2] + iVar3 == 0) break;
    iVar2 = param_1[3];
    iVar3 = uVar1 + 1;
    param_1[1] = iVar3;
    if (iVar3 == iVar2) {
      param_1[1] = 0;
      _free(*(void **)(*param_1 + -4 + iVar2 * 4));
    }
    else if (iVar3 == 0) {
      _free(*(void **)(*param_1 + -4 + iVar2 * 4));
    }
    else {
      _free(*(void **)(*param_1 + -4 + iVar3 * 4));
    }
  }
  return;
}


/* END FUNCTION 0x1002e5c0 */
