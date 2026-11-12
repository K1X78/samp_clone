/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00489240
 * Name: FUN_00489240
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_00489240(void *this,byte *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00488e80(this,param_1);
  if (iVar1 < 0) {
    return 0;
  }
  return *(undefined4 *)(iVar1 * 0x3d + 0x2d + (int)this);
}


/* END FUNCTION 0x00489240 */
