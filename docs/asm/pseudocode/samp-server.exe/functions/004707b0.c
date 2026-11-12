/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004707b0
 * Name: FUN_004707b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_004707b0(undefined4 param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_2 + 4);
  if ((999 < uVar1) && (uVar1 < 0x4aa)) {
    return (uint)(byte)(&DAT_004be3c0)[(byte)((char)uVar1 + 0x18)];
  }
  return 0xffffffff;
}


/* END FUNCTION 0x004707b0 */
