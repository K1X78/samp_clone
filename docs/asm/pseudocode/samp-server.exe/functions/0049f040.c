/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049f040
 * Name: FUN_0049f040
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_0049f040(void *this,byte *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0049ed40(this,param_1);
  if ((-1 < iVar1) && (*(int *)(iVar1 * 0x3d + 0x2d + (int)this) == 2)) {
    return *(undefined4 *)((int)this + iVar1 * 0x3d + 0x39);
  }
  return 0;
}


/* END FUNCTION 0x0049f040 */
