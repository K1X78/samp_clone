/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003dec0
 * Name: FUN_1003dec0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_1003dec0(undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  
  iVar1 = FUN_1003c2a0(param_1,param_2,0,0);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  return (uint)*(ushort *)(iVar1 + 0x732);
}


/* END FUNCTION 0x1003dec0 */
