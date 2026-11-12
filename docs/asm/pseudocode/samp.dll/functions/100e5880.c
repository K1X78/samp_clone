/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e5880
 * Name: FUN_100e5880
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100e5880(int param_1)

{
  int iVar1;
  int in_EAX;
  
  if ((((*(int *)(in_EAX + 0x4ac4) != 10) && (*(int *)(param_1 + 0x180) != 10)) &&
      ((iVar1 = *(int *)(in_EAX + 0x3ec), iVar1 != 1 || (10 < *(int *)(param_1 + 0x180))))) &&
     ((iVar1 == 0 || (1 < iVar1)))) {
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x100e5880 */
