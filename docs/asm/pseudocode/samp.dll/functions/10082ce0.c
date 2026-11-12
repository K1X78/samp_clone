/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10082ce0
 * Name: FUN_10082ce0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_10082ce0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_10082960(param_1[1] + 1);
  if (-1 < iVar2) {
    iVar2 = param_1[1];
    iVar1 = *param_1;
    *(undefined4 *)(iVar1 + iVar2 * 8) = *param_2;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = param_2[1];
    param_1[1] = param_1[1] + 1;
    iVar2 = 0;
  }
  return iVar2;
}


/* END FUNCTION 0x10082ce0 */
