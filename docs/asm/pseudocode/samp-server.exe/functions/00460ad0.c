/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00460ad0
 * Name: FUN_00460ad0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00460ad0(void *this,byte param_1,undefined4 param_2,byte param_3)

{
  byte *pbVar1;
  
  pbVar1 = operator_new(0xc);
  *pbVar1 = param_1;
  *(undefined4 *)(pbVar1 + 4) = param_2;
  pbVar1[8] = param_3;
  *(byte **)((int)this + (uint)param_1 * 4) = pbVar1;
  return;
}


/* END FUNCTION 0x00460ad0 */
