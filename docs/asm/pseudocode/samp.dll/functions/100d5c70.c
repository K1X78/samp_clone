/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d5c70
 * Name: FUN_100d5c70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100d5c70(void)

{
  int *in_EAX;
  uint uVar1;
  
  *(undefined4 *)(*in_EAX + 0x130) = 0;
  uVar1 = in_EAX[0xcb];
  if ((uint)in_EAX[0xcb] <= (uint)in_EAX[0xcc]) {
    uVar1 = in_EAX[0xcc];
  }
  *(uint *)(*in_EAX + 0x10c) = uVar1 + 1;
  FUN_100e2ff0(*in_EAX,6);
  return;
}


/* END FUNCTION 0x100d5c70 */
