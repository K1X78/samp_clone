/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d2330
 * Name: FUN_100d2330
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_100d2330(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_ESI;
  int iVar3;
  
  uVar2 = 0;
  FUN_100db5d0(param_2,0,1);
  if (*(int *)(unaff_ESI + 0x288) != 0) {
    *param_3 = 0;
    return 0;
  }
  if (*(int *)(unaff_ESI + 0x294) == 0) {
    iVar3 = unaff_ESI + 0xac;
    if (*(int *)(unaff_ESI + 0x28c) == 0) {
      iVar3 = unaff_ESI + 0x98;
    }
    if (*(int *)(unaff_ESI + 0x290) == 0) {
      *(undefined4 *)(unaff_ESI + 0xfc) = *(undefined4 *)(unaff_ESI + 0x100);
    }
    else {
      *(undefined4 *)(unaff_ESI + 0xfc) = *(undefined4 *)(unaff_ESI + 0x104);
    }
    iVar1 = FUN_100d0040();
    if (iVar1 == 1) {
      *param_3 = 1;
      *(int *)(unaff_ESI + 0x50) = param_1;
      return 0;
    }
    if (iVar1 != -2) {
      if (param_1 == 0) {
        FUN_100d8ba0(param_2,"Couldn\'t resolve host \'%s\'",*(undefined4 *)(iVar3 + 0xc));
        *(undefined4 *)(unaff_ESI + 0x50) = 0;
        return 6;
      }
LAB_100d2495:
      *(int *)(unaff_ESI + 0x50) = param_1;
      return uVar2;
    }
  }
  else {
    iVar3 = unaff_ESI + 0xbc;
    if (*(int *)(unaff_ESI + 0x29c) == 0) {
      iVar3 = unaff_ESI + 0xdc;
    }
    iVar1 = FUN_100d0040();
    if (iVar1 == 1) {
      *param_3 = 1;
      *(int *)(unaff_ESI + 0x50) = param_1;
      return 0;
    }
    if (iVar1 != -2) {
      if (param_1 == 0) {
        FUN_100d8ba0(param_2,"Couldn\'t resolve proxy \'%s\'",*(undefined4 *)(iVar3 + 0xc));
        uVar2 = 5;
      }
      goto LAB_100d2495;
    }
  }
  *(int *)(unaff_ESI + 0x50) = param_1;
  return 0x1c;
}


/* END FUNCTION 0x100d2330 */
