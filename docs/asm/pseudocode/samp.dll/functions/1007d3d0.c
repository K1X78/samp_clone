/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1007d3d0
 * Name: FUN_1007d3d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * FUN_1007d3d0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_1007cbc0();
  uVar1 = FUN_100788e0();
  FUN_1007cbc0();
  uVar2 = FUN_10078960();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  return param_1;
}


/* END FUNCTION 0x1007d3d0 */
