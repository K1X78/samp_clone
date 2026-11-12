/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c19d0
 * Name: FUN_100c19d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100c19d0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_38 [14];
  
  puVar2 = local_38;
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_100c1890(local_38);
  return local_38[1];
}


/* END FUNCTION 0x100c19d0 */
