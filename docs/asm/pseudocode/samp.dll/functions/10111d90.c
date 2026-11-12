/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10111d90
 * Name: FUN_10111d90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_10111d90(int param_1,int param_2,byte *param_3)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    param_2 = param_1 + 0x18;
  }
  if (param_3 == (byte *)0x0) {
    SetLastError(0xd);
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(&UNK_1013325c + (uint)*param_3 * 8))
                      (&DAT_10133258 + (uint)*param_3 * 8,param_2,param_3);
  }
  return uVar1;
}


/* END FUNCTION 0x10111d90 */
