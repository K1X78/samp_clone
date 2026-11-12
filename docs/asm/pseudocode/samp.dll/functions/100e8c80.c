/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e8c80
 * Name: FUN_100e8c80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100e8c80(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if ((*(int *)(param_1 + 100) != 0) &&
     (puVar3 = (undefined4 *)FUN_100d69a0(*(int *)(param_1 + 100)), puVar3 != (undefined4 *)0x0)) {
    for (piVar1 = (int *)*puVar3; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
      iVar2 = *piVar1;
      iVar4 = FUN_100de830(iVar2 + 0xe,*(undefined4 *)(param_2 + 0xa0));
      if ((iVar4 != 0) && ((uint)*(ushort *)(iVar2 + 0xc) == *(uint *)(param_2 + 0x100))) {
        FUN_100d8ae0(param_1,"Site %s:%d is pipeline blacklisted\n",*(undefined4 *)(param_2 + 0xa0),
                     *(undefined4 *)(param_2 + 0x100));
        return 1;
      }
    }
  }
  return 0;
}


/* END FUNCTION 0x100e8c80 */
