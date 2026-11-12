/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000c1c0
 * Name: FUN_1000c1c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool __thiscall
FUN_1000c1c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  char local_22c [28];
  char local_210 [264];
  char local_108 [264];
  
  _sprintf(local_22c,"%X",param_5);
  _sprintf(local_108,"%s\\0x%X.dff",param_1 + 9,param_4);
  iVar1 = FUN_100b5900(local_108);
  if (iVar1 == 0) {
    _sprintf(local_108,"%s\\0x%X.dff",param_1 + 0x10e,param_4);
    iVar1 = FUN_100b5900(local_108);
    if (iVar1 == 0) {
      return false;
    }
  }
  _sprintf(local_210,"%s\\0x%X.txd",param_1 + 9,param_5);
  iVar1 = FUN_100b5900(local_210);
  if (iVar1 == 0) {
    _sprintf(local_210,"%s\\0x%X.txd",param_1 + 0x10e,param_5);
    iVar1 = FUN_100b5900(local_210);
    if (iVar1 == 0) {
      return false;
    }
  }
  iVar1 = FUN_100a77c0(param_2,param_3,local_22c,local_108,local_210);
  return iVar1 != 0;
}


/* END FUNCTION 0x1000c1c0 */
