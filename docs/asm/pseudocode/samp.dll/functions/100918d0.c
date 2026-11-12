/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100918d0
 * Name: FUN_100918d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_100918d0(int param_1,LPCSTR param_2)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x244) != 0) &&
     (iVar1 = lstrcmpiA((LPCSTR)(*(int *)(param_1 + 0x244) + 4),param_2), iVar1 == 0)) {
    return *(int *)(param_1 + 0x244);
  }
  if ((*(int *)(param_1 + 0x24c) != 0) && (iVar1 = FUN_100918d0(param_2), iVar1 != 0)) {
    return iVar1;
  }
  if ((*(int *)(param_1 + 0x248) != 0) && (iVar1 = FUN_100918d0(param_2), iVar1 != 0)) {
    return iVar1;
  }
  return 0;
}


/* END FUNCTION 0x100918d0 */
