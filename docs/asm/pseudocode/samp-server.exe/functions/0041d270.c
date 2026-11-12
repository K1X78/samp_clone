/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041d270
 * Name: FUN_0041d270
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_0041d270(char *param_1,undefined4 *param_2)

{
  int in_EAX;
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int unaff_EBX;
  undefined8 uVar4;
  
  iVar1 = FUN_0040edd0(unaff_EBX,param_1,*(byte **)(*(int *)(unaff_EBX + 8) + in_EAX * 0x10));
  FUN_00408380((char *)**(undefined4 **)(iVar1 + 0x3c));
  piVar2 = (int *)FUN_00409170();
  if (piVar2 == (int *)0x0) {
    uVar3 = FUN_00418920((undefined **)"no such module: %s");
    *param_2 = uVar3;
    return 1;
  }
  iVar1 = FUN_0041cf00(unaff_EBX,iVar1,piVar2,*(undefined **)(*piVar2 + 4),param_2);
  if (iVar1 == 0) {
    uVar4 = FUN_004103b0(unaff_EBX);
    iVar1 = (int)((ulonglong)uVar4 >> 0x20);
    if ((int)uVar4 != 0) {
      FUN_004103b0(extraout_ECX);
      iVar1 = FUN_00416de0();
      return iVar1;
    }
  }
  return iVar1;
}


/* END FUNCTION 0x0041d270 */
