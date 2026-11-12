/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b4280
 * Name: FUN_100b4280
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_100b4280(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_100a7630(param_1);
  if (iVar1 != 0) {
    return (uint)*(ushort *)(iVar1 + 10);
  }
  return 0xffffffff;
}


/* END FUNCTION 0x100b4280 */
