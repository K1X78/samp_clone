/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041d1b0
 * Name: FUN_0041d1b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_0041d1b0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = param_2;
  iVar1 = *param_1;
  if ((*(byte *)(param_2 + 0x22) & 0x10) != 0) {
    iVar2 = FUN_004103b0(iVar1);
    if (iVar2 == 0) {
      FUN_00408380((char *)**(undefined4 **)(iVar4 + 0x3c));
      piVar3 = (int *)FUN_00409170();
      if (piVar3 == (int *)0x0) {
        FUN_00418b00((undefined **)"no such module: %s");
        return 1;
      }
      param_2 = 0;
      iVar4 = FUN_0041cf00(iVar1,iVar4,piVar3,*(undefined **)(*piVar3 + 8),&param_2);
      if (iVar4 != 0) {
        FUN_00418b00((undefined **)&DAT_004b23ac);
      }
      FUN_00408130(iVar1);
      return iVar4;
    }
  }
  return 0;
}


/* END FUNCTION 0x0041d1b0 */
