/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100dbf60
 * Name: FUN_100dbf60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100dbf60(int param_1,SOCKET param_2)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x40) != 0) {
      if ((param_2 != *(SOCKET *)(param_1 + 0x19c)) || (*(int *)(param_1 + 0x1ac) == 0)) {
        FUN_100d61f0(param_1,param_2);
        uVar1 = (**(code **)(param_1 + 0x40))(*(undefined4 *)(param_1 + 0x44),param_2);
        return uVar1;
      }
      *(undefined4 *)(param_1 + 0x1ac) = 0;
    }
    FUN_100d61f0(param_1,param_2);
  }
  closesocket(param_2);
  return 0;
}


/* END FUNCTION 0x100dbf60 */
