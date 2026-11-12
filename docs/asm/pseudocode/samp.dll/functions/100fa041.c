/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100fa041
 * Name: FUN_100fa041
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100fa041(HANDLE param_1)

{
  BOOL BVar1;
  undefined4 *puVar2;
  
  BVar1 = FindClose(param_1);
  if (BVar1 == 0) {
    puVar2 = (undefined4 *)FUN_100fdc77();
    *puVar2 = 0x16;
    return 0xffffffff;
  }
  return 0;
}


/* END FUNCTION 0x100fa041 */
