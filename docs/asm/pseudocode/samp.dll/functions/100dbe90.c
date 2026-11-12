/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100dbe90
 * Name: FUN_100dbe90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100dbe90(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int local_8;
  int local_4;
  
  iVar1 = *(int *)(param_1 + 0x848);
  if ((iVar1 != 0) &&
     ((iVar2 = *(int *)(param_1 + 0x68), iVar2 != 0 || (*(int *)(param_1 + 100) != 0)))) {
    local_4 = 0;
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 100);
    }
    local_8 = iVar1;
    FUN_100ebd80(param_1,iVar2 + 0x80,&local_8,&LAB_100dbe70);
    if (local_4 != 0) {
      if (param_2 != (int *)0x0) {
        *param_2 = iVar1;
      }
      return *(undefined4 *)(iVar1 + 0x198);
    }
    *(undefined4 *)(param_1 + 0x848) = 0;
  }
  return 0xffffffff;
}


/* END FUNCTION 0x100dbe90 */
