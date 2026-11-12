/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0046dba0
 * Name: FUN_0046dba0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_0046dba0(void *this,byte *param_1)

{
  int iVar1;
  uint local_4;
  
  if (*(char *)((int)this + 0x68) == '\0') {
    return 0;
  }
  local_4 = 0;
  iVar1 = FUN_00401710(this,param_1,(int *)&param_1);
  if (iVar1 == 0) {
    FUN_00401c90(this,&local_4,(int)param_1);
  }
  return local_4;
}


/* END FUNCTION 0x0046dba0 */
