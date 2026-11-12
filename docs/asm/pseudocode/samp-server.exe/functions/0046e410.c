/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0046e410
 * Name: FUN_0046e410
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_0046e410(void *this,undefined4 param_1)

{
  int iVar1;
  uint local_8;
  int local_4;
  
  if (*(char *)((int)this + 0x68) == '\0') {
    return 0;
  }
  local_8 = 0;
  iVar1 = FUN_00401710(this,(byte *)"OnPlayerLeaveCheckpoint",&local_4);
  if (iVar1 == 0) {
    FUN_00401c50(this,param_1);
    FUN_00401c90(this,&local_8,local_4);
  }
  return local_8;
}


/* END FUNCTION 0x0046e410 */
