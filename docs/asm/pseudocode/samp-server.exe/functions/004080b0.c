/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004080b0
 * Name: FUN_004080b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __fastcall FUN_004080b0(int param_1)

{
  int iVar1;
  uint uVar2;
  int extraout_ECX;
  undefined4 extraout_EDX;
  
  iVar1 = FUN_00408070(param_1);
  if (iVar1 != 0) {
    return (uint)*(ushort *)(extraout_ECX + 0xe8);
  }
  uVar2 = (*DAT_004ca14c)(extraout_EDX);
  return uVar2;
}


/* END FUNCTION 0x004080b0 */
