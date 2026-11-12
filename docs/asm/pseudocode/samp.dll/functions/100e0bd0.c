/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e0bd0
 * Name: FUN_100e0bd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100e0bd0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_4 [4];
  
  iVar1 = FUN_100e0e40(2,param_1,local_4);
  if (0 < iVar1) {
    uVar2 = FUN_100e0b20(2,local_4,param_1,param_2);
    return uVar2;
  }
  return 0;
}


/* END FUNCTION 0x100e0bd0 */
