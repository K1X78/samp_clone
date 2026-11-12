/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ef110
 * Name: FUN_100ef110
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100ef110(undefined4 param_1,undefined1 *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = 0x2b;
  uVar3 = param_3;
  while( true ) {
    if (uVar3 == 0) {
      return iVar1;
    }
    uVar2 = uVar3;
    if (3 < uVar3) {
      uVar2 = 4;
    }
    iVar1 = FUN_100ef070(&param_3);
    if (iVar1 != 0) break;
    for (; iVar1 = 0, uVar2 != 0; uVar2 = uVar2 - 1) {
      *param_2 = (char)param_3;
      param_2 = param_2 + 1;
      param_3 = param_3 >> 8;
      uVar3 = uVar3 - 1;
    }
  }
  return iVar1;
}


/* END FUNCTION 0x100ef110 */
