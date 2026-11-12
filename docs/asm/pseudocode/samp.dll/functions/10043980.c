/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10043980
 * Name: FUN_10043980
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_10043980(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_2 + 10);
  iVar2 = *(int *)(param_1 + 0x403) + 0x20;
  if (((iVar1 == 7) || (iVar1 == 10)) || (iVar1 == 9)) {
    iVar2 = *(int *)(param_1 + 0x403) + 0x35;
  }
  if (*(int *)(param_2 + 0x17) != 0) {
    return iVar2 + 0x61;
  }
  return iVar2 + 0x11;
}


/* END FUNCTION 0x10043980 */
