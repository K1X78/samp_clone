/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10020c00
 * Name: FUN_10020c00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_10020c00(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x17) != '\0') {
    iVar1 = FUN_10020860(param_2,param_1 + 0x10);
    if (iVar1 == 0) {
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x10020c00 */
