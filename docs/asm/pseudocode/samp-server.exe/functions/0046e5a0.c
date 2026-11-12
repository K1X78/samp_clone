/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0046e5a0
 * Name: FUN_0046e5a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_0046e5a0(void *this,short *param_1)

{
  int iVar1;
  uint local_c;
  int local_8;
  undefined4 local_4;
  
  if (*(char *)((int)this + 0x68) == '\0') {
    return 0;
  }
  local_c = 0;
  iVar1 = FUN_00401710(this,(byte *)"OnRconCommand",&local_8);
  if (iVar1 == 0) {
    FUN_00403610(this,(int *)&param_1,&local_4,param_1,(undefined4 *)0x0,0);
    FUN_00401c90(this,&local_c,local_8);
    FUN_004031b0((int)this,(int)param_1);
  }
  return local_c;
}


/* END FUNCTION 0x0046e5a0 */
