/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00462e20
 * Name: FUN_00462e20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_00462e20(void *this,int *param_1)

{
  uint uVar1;
  
  if (*(char *)((int)this + 0x14) != '\0') {
    uVar1 = FUN_00462de0(param_1,(int *)((int)this + 0x10));
    if (uVar1 == 0) {
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x00462e20 */
