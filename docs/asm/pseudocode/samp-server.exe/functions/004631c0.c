/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004631c0
 * Name: FUN_004631c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_004631c0(void *this,int *param_1,undefined4 *param_2)

{
  uint uVar1;
  
  uVar1 = FUN_00462e50(this,param_1,(undefined1 *)&param_1);
  if ((char)param_1 != '\0') {
    return 0xffffffff;
  }
  if (*(uint *)((int)this + 4) <= uVar1) {
    FUN_00462f00(this,*param_2,param_2[1]);
    return *(int *)((int)this + 4) - 1;
  }
  FUN_00462fd0(this,*param_2,param_2[1],uVar1);
  return uVar1;
}


/* END FUNCTION 0x004631c0 */
