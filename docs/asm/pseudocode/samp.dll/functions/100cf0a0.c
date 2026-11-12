/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100cf0a0
 * Name: FUN_100cf0a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100cf0a0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(PTR_DAT_10155510 + 0x20))(param_1,param_2);
  if (iVar1 != 0) {
    return 0x50;
  }
  *(undefined1 **)(param_1 + 0x1b0 + param_2 * 4) = &LAB_100d8d90;
  *(code **)(param_1 + 0x1b8 + param_2 * 4) = FUN_100d90c0;
  *(undefined4 *)((param_2 + 0x1e) * 0x10 + param_1) = 0;
  *(undefined4 *)(param_2 * 0x10 + 0x1e4 + param_1) = 0;
  return 0;
}


/* END FUNCTION 0x100cf0a0 */
