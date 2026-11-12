/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00417ac0
 * Name: FUN_00417ac0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_00417ac0(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_004125b0(*(int *)(in_EAX + 4));
  if (iVar1 == 0) {
    return 7;
  }
  iVar2 = FUN_00407c20(in_EAX,param_4,param_1,iVar1);
  if (iVar2 != 0) {
    FUN_004080d0(iVar1);
    return iVar2;
  }
  *param_2 = iVar1;
  return 0;
}


/* END FUNCTION 0x00417ac0 */
