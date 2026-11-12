/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100eba40
 * Name: FUN_100eba40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100eba40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int in_EAX;
  undefined4 uVar1;
  
  if (*(int *)(in_EAX + 0x29c) == 0) {
    if (*(int *)(in_EAX + 0x298) == 0) {
      if (*(int *)(in_EAX + 0x28c) == 0) {
        uVar1 = *(undefined4 *)(in_EAX + 0xa0);
      }
      else {
        uVar1 = *(undefined4 *)(in_EAX + 0xb4);
      }
    }
    else {
      uVar1 = *(undefined4 *)(in_EAX + 0xe4);
    }
  }
  else {
    uVar1 = *(undefined4 *)(in_EAX + 0xc4);
  }
  FUN_100cc780(param_2,param_3,"%ld%s",*(undefined4 *)(in_EAX + 0xfc),uVar1);
  return;
}


/* END FUNCTION 0x100eba40 */
