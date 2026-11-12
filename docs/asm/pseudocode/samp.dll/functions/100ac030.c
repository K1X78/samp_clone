/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ac030
 * Name: FUN_100ac030
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100ac030(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if (((*(int *)(param_1 + 0x2a4) != 0) && (iVar2 = FUN_100b37d0(param_2), iVar2 != 0)) &&
     (iVar3 = FUN_100b3770(*(undefined4 *)(param_1 + 0x44)), iVar3 != 0)) {
    _DAT_1018f4a4 = 1;
    cVar1 = FUN_100ab870();
    if (cVar1 == '.') {
      FUN_100abc80(0,0);
    }
    if (param_3 != 0) {
      if ((*(short *)(iVar2 + 0x22) == 0x23a) &&
         (iVar2 = FUN_100b3860(), *(int *)(param_1 + 0x2a4) == iVar2)) {
        FUN_100b1f10(&DAT_1011f06c,*(undefined4 *)(param_1 + 0x44),param_2,0xffffffff);
        return;
      }
      FUN_100b1f10(&DAT_1011eff4,*(undefined4 *)(param_1 + 0x44),param_2,3000,0xffffffff);
      return;
    }
    FUN_100b1f10(&DAT_1011efe0,*(undefined4 *)(param_1 + 0x44),param_2,3000);
  }
  return;
}


/* END FUNCTION 0x100ac030 */
