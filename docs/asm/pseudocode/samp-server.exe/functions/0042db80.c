/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042db80
 * Name: FUN_0042db80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_0042db80(void *param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  undefined3 extraout_var;
  uint uVar3;
  int unaff_ESI;
  void *unaff_EDI;
  
  if (param_3 == 0) {
    iVar2 = FUN_0040cf00();
  }
  else {
    iVar2 = FUN_0040cee0();
  }
  if (((int)unaff_EDI + param_2 < 1) && ((*(byte *)(unaff_ESI + 0x1d) & 4) == 0)) {
    FUN_0040d250(unaff_ESI);
    *(int *)(unaff_ESI + 0x14) = iVar2 + param_2;
    *(undefined2 *)(unaff_ESI + 0x1c) = 0x1010;
    *(void **)(unaff_ESI + 0x18) = unaff_EDI;
    return 0;
  }
  bVar1 = FUN_00414b80((void *)((int)unaff_EDI + 2),unaff_ESI);
  uVar3 = CONCAT31(extraout_var,bVar1);
  if (uVar3 == 0) {
    *(undefined2 *)(unaff_ESI + 0x1c) = 0x610;
    *(undefined1 *)(unaff_ESI + 0x1f) = 0;
    *(undefined1 *)(unaff_ESI + 0x1e) = 4;
    if (param_3 == 0) {
      uVar3 = FUN_0042d470(param_1,param_2,unaff_EDI,*(undefined4 **)(unaff_ESI + 0x14));
    }
    else {
      uVar3 = FUN_004286c0(unaff_EDI,param_1);
    }
    *(undefined1 *)((int)unaff_EDI + *(int *)(unaff_ESI + 0x14)) = 0;
    *(undefined1 *)(*(int *)(unaff_ESI + 0x14) + 1 + (int)unaff_EDI) = 0;
    if (uVar3 != 0) {
      FUN_0040d250(unaff_ESI);
    }
  }
  *(void **)(unaff_ESI + 0x18) = unaff_EDI;
  return uVar3;
}


/* END FUNCTION 0x0042db80 */
