/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048ec30
 * Name: FUN_0048ec30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl
FUN_0048ec30(undefined4 param_1,int *param_2,undefined4 param_3,int param_4,int *param_5,
            char *param_6,uint *param_7,undefined4 param_8,undefined4 param_9,undefined4 *param_10,
            undefined4 *param_11)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0048dfe0(param_10);
  if (iVar1 == 0) {
    return 2;
  }
  iVar2 = FUN_0048bc40(iVar1,param_5);
  if (iVar2 == 0) {
    iVar2 = FUN_0048ead0(iVar1,param_6,param_7);
    if (iVar2 == 0) {
      iVar2 = FUN_0048eb80(iVar1,param_1,param_2,param_3,param_4,param_8,param_9,param_10,param_11);
    }
  }
  FUN_0048e080(iVar1,(int)param_10,param_11);
  return iVar2;
}


/* END FUNCTION 0x0048ec30 */
