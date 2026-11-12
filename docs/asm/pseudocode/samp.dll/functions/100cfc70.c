/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100cfc70
 * Name: FUN_100cfc70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100cfc70(int param_1)

{
  int iVar1;
  undefined4 local_8;
  int local_4;
  
  iVar1 = param_1;
  if ((*(int *)(param_1 + 0x4cc) != -1) && (*(int *)(param_1 + 0x5c) != 0)) {
    if (*(int *)(param_1 + 0x6c) != 0) {
      FUN_100dec30(param_1,3,2);
    }
    FID_conflict___time32(&param_1);
    local_8 = *(undefined4 *)(iVar1 + 0x4cc);
    local_4 = param_1;
    FUN_100e4470(*(undefined4 *)(iVar1 + 0x5c),&local_8,&LAB_100cfc10);
    if (*(int *)(iVar1 + 0x6c) != 0) {
      FUN_100dec70(iVar1,3);
    }
  }
  return;
}


/* END FUNCTION 0x100cfc70 */
