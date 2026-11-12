/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100eb670
 * Name: FUN_100eb670
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100eb670(int *param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *param_1 + 0x48c8;
  if (param_2 == 0) {
    iVar4 = *param_1 + 0x48b4;
  }
  iVar2 = thunk_FUN_100de8c0("Digest",param_3,6);
  if (iVar2 != 0) {
    bVar1 = *(byte *)(param_3 + 6);
    param_3 = param_3 + 6;
    while ((bVar1 != 0 && (iVar2 = _isspace((uint)bVar1), iVar2 != 0))) {
      bVar1 = *(byte *)(param_3 + 1);
      param_3 = param_3 + 1;
    }
    uVar3 = FUN_100f4890(param_3,iVar4);
    return uVar3;
  }
  return 0x3d;
}


/* END FUNCTION 0x100eb670 */
