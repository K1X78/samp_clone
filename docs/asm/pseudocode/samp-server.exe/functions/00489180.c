/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00489180
 * Name: FUN_00489180
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_00489180(void *this,byte *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00488e80(this,param_1);
  if ((-1 < iVar1) && (*(int *)(iVar1 * 0x3d + 0x2d + (int)this) == 2)) {
    return *(undefined4 *)((int)this + iVar1 * 0x3d + 0x39);
  }
  return 0;
}


/* END FUNCTION 0x00489180 */
