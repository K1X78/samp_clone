/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00420c90
 * Name: FUN_00420c90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00420c90(void *this,undefined4 param_1)

{
  undefined4 in_EAX;
  int iVar1;
  undefined4 extraout_ECX;
  
  FUN_0041c720();
  iVar1 = FUN_0040ec00();
  FUN_00414dd0(0x5f,param_1,iVar1,in_EAX);
  FUN_0040f330((int)this);
  FUN_0041abf0((undefined **)"UPDATE %Q.%s SET rootpage=%d WHERE #%d AND rootpage=#%d");
  FUN_0040ec20(extraout_ECX,(int)this);
  return;
}


/* END FUNCTION 0x00420c90 */
