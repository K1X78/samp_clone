/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0046eab0
 * Name: FUN_0046eab0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_0046eab0(void *this,short *param_1,short *param_2,undefined4 param_3)

{
  int iVar1;
  int local_10;
  int local_c;
  int local_8;
  uint local_4;
  
  if (*(char *)((int)this + 0x68) == '\0') {
    return 0;
  }
  iVar1 = FUN_00401710(this,(byte *)"OnRconLoginAttempt",&local_10);
  if (iVar1 == 0) {
    FUN_00401c50(this,param_3);
    FUN_00403610(this,&local_c,&param_3,param_2,(undefined4 *)0x0,0);
    FUN_00403610(this,&local_8,&param_3,param_1,(undefined4 *)0x0,0);
    FUN_00401c90(this,&local_4,local_10);
    FUN_004031b0((int)this,local_c);
    FUN_004031b0((int)this,local_8);
  }
  return 1;
}


/* END FUNCTION 0x0046eab0 */
