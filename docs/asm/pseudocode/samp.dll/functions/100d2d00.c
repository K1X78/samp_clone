/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d2d00
 * Name: FUN_100d2d00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100d2d00(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (((param_1 != (int *)0x0) && (iVar1 = *param_1, iVar1 != 0)) &&
     ((param_1[0xa1] != 0 || (param_1[0xed] + param_1[0xe9] == 0)))) {
    if (param_1[0x14] != 0) {
      FUN_100d03f0(iVar1,param_1[0x14]);
      param_1[0x14] = 0;
    }
    FUN_100cfc70(iVar1);
    FUN_100ec210(param_1);
    if (*(code **)(param_1[200] + 0x30) != (code *)0x0) {
      (**(code **)(param_1[200] + 0x30))(param_1,param_2);
    }
    FUN_100d8ae0(iVar1,"Closing connection %ld\n",param_1[0x13]);
    FUN_100ebd10(*(undefined4 *)(iVar1 + 0x838),param_1);
    thunk_FUN_100e2700(param_1,0);
    iVar1 = FUN_100d5880(*(undefined4 *)(iVar1 + 100),3);
    if (iVar1 != 0) {
      FUN_100d0cd0(1);
      FUN_100d0cd0(1);
    }
    FUN_100d0840();
  }
  return 0;
}


/* END FUNCTION 0x100d2d00 */
