/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10014470
 * Name: FUN_10014470
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_10014470(int param_1)

{
  ushort uVar1;
  
  if ((((*(char *)(param_1 + 0x1a) == '\x11') && (uVar1 = *(ushort *)(param_1 + 0x7a), uVar1 != 0))
      && (uVar1 != 0xffff)) && (uVar1 < 0x1004)) {
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x10014470 */
