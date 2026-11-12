/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00420bf0
 * Name: FUN_00420bf0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00420bf0(int *param_1)

{
  int iVar1;
  int iVar2;
  int *in_EAX;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = in_EAX[0x80];
  iVar2 = *in_EAX;
  if (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 0x10) + -0x18 + *(int *)(iVar1 + 0xc) * 0x18;
    iVar3 = FUN_00415bc0(*param_1);
    if (iVar3 == 0) {
      FUN_00418b00((undefined **)"default value of column [%s] is not constant");
      FUN_004158d0(iVar2,*param_1);
      return;
    }
    FUN_004158d0(iVar2,*(int *)(iVar1 + 4));
    uVar4 = FUN_00420310(iVar2,(undefined4 *)*param_1,1);
    *(undefined4 *)(iVar1 + 4) = uVar4;
    FUN_00408130(iVar2);
    uVar4 = FUN_00412ab0();
    *(undefined4 *)(iVar1 + 8) = uVar4;
  }
  FUN_004158d0(iVar2,*param_1);
  return;
}


/* END FUNCTION 0x00420bf0 */
