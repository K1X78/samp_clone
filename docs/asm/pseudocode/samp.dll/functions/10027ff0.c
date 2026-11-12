/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10027ff0
 * Name: FUN_10027ff0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_10027ff0(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  iVar1 = param_2;
  if (*(int *)(param_1 + 0x10) == 0) {
    return 0;
  }
  iVar3 = FUN_10027370(param_2);
  cVar2 = FUN_10027310(iVar1,iVar3,&param_2);
  if (cVar2 != '\0') {
    *param_3 = *(undefined4 *)(iVar3 + 0x45 + param_2 * 4);
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x10027ff0 */
