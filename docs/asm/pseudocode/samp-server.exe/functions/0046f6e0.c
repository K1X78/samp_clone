/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0046f6e0
 * Name: FUN_0046f6e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_0046f6e0(void *this,undefined4 param_1,short *param_2,int param_3)

{
  int iVar1;
  uint local_c;
  int local_8;
  undefined4 local_4;
  
  local_c = 0;
  iVar1 = FUN_00401710(this,(byte *)"OnIncomingConnection",&local_8);
  if (iVar1 == 0) {
    FUN_00401c50(this,param_3);
    FUN_00403610(this,&param_3,&local_4,param_2,(undefined4 *)0x0,0);
    FUN_00401c50(this,param_1);
    FUN_00401c90(this,&local_c,local_8);
    FUN_004031b0((int)this,param_3);
  }
  return local_c;
}


/* END FUNCTION 0x0046f6e0 */
