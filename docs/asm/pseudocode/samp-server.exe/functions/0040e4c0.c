/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040e4c0
 * Name: FUN_0040e4c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_0040e4c0(uint param_1)

{
  int in_EAX;
  undefined4 uVar1;
  
  if ((param_1 & 1) == 0) {
    return 0x30;
  }
  if ((((*(int *)(in_EAX + 8) != 0) || (*(int *)(in_EAX + 0xc) != 0)) ||
      (*(int *)(in_EAX + 0x14) != 0)) || (uVar1 = 0x2008, *(int *)(in_EAX + 0x10) != 0)) {
    uVar1 = 0x1018;
  }
  return uVar1;
}


/* END FUNCTION 0x0040e4c0 */
