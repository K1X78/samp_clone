/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044fd20
 * Name: FUN_0044fd20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_0044fd20(void *param_1,uint *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0044ef50(param_1,param_2);
  if ((char)uVar1 != '\0') {
    return 0xffffffff;
  }
  uVar1 = FUN_0044eec0(param_1,(int *)param_2);
  return (uint)((char)uVar1 == '\0');
}


/* END FUNCTION 0x0044fd20 */
