/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10071a40
 * Name: FUN_10071a40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined * __thiscall FUN_10071a40(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = *(int *)(param_1 + 0x7c);
    if (iVar1 == 0) {
      return &DAT_1011c340;
    }
    if (iVar1 == 1) {
      return &DAT_1011c33c;
    }
    if (iVar1 == 2) {
      return &DAT_10118394;
    }
  }
  else if (param_2 == 1) {
    iVar1 = *(int *)(param_1 + 0x7c);
    if (iVar1 == 0) {
      return &DAT_10118304;
    }
    if (iVar1 == 1) {
      return &DAT_10117880;
    }
    if (iVar1 == 2) {
      return &DAT_10118308;
    }
  }
  else if (param_2 == 2) {
    iVar1 = *(int *)(param_1 + 0x7c);
    if (iVar1 == 0) {
      return &DAT_101183e0;
    }
    if (iVar1 == 1) {
      return &DAT_10117950;
    }
    if (iVar1 == 2) {
      return &DAT_101184c0;
    }
  }
  return &DAT_101182d8;
}


/* END FUNCTION 0x10071a40 */
