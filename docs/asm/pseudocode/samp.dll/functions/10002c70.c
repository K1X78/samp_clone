/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10002c70
 * Name: FUN_10002c70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall
FUN_10002c70(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  _printf("CHttpClient::ProcessURL %s\n",param_3);
  FUN_100024e0(param_2,param_3,param_4,param_5);
  FUN_10002a90();
  return *(undefined4 *)(param_1 + 0x32);
}


/* END FUNCTION 0x10002c70 */
