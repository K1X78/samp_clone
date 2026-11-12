/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000bba0
 * Name: FUN_1000bba0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool __thiscall FUN_1000bba0(int param_1,undefined4 param_2)

{
  int iVar1;
  char local_108 [264];
  
  __snprintf(local_108,0x104,"%s/0x%X.txd",param_1 + 9,param_2);
  iVar1 = FUN_100b5900(local_108);
  if (iVar1 != 0) {
    return true;
  }
  __snprintf(local_108,0x104,"%s/0x%X.txd",param_1 + 0x10e,param_2);
  iVar1 = FUN_100b5900(local_108);
  return iVar1 != 0;
}


/* END FUNCTION 0x1000bba0 */
