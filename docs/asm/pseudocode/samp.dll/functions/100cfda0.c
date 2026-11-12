/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100cfda0
 * Name: FUN_100cfda0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100cfda0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (*(int *)(iVar1 + 0x6c) != 0) {
    FUN_100dec30(iVar1,3,2);
  }
  iVar2 = FUN_100cfcf0(param_3);
  if (iVar2 != 0) {
    *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
  }
  if (*(int *)(iVar1 + 0x6c) != 0) {
    FUN_100dec70(iVar1,3);
  }
  return iVar2;
}


/* END FUNCTION 0x100cfda0 */
