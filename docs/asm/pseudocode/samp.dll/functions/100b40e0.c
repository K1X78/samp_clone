/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b40e0
 * Name: FUN_100b40e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100b40e0(int *param_1)

{
  int iVar1;
  
  if ((param_1 != (int *)0x0) &&
     ((((iVar1 = *param_1, iVar1 == 0x85bbf0 || (iVar1 == 0x85bc30)) || (iVar1 == 0x85bc70)) ||
      ((iVar1 == 0x85bcb0 || (iVar1 == 0x85bcf0)))))) {
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x100b40e0 */
