/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041fbf0
 * Name: FUN_0041fbf0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_0041fbf0(uint param_1)

{
  int in_EAX;
  undefined4 uVar1;
  
  if (((*(byte *)(in_EAX + 0x1c) & 2) != 0) && (*(byte *)(in_EAX + 0x1f) != param_1)) {
    uVar1 = FUN_0041db80(in_EAX,(char)param_1);
    return uVar1;
  }
  return 0;
}


/* END FUNCTION 0x0041fbf0 */
