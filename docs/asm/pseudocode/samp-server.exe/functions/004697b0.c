/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004697b0
 * Name: FUN_004697b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_004697b0(int param_1,byte *param_2)

{
  int iVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  byte *extraout_EDX;
  int extraout_EDX_00;
  
  do {
    iVar1 = FUN_004697a0((uint)(*param_2 >> 4));
    *(char *)(extraout_ECX + param_1) = (char)iVar1;
    iVar1 = FUN_004697a0(*extraout_EDX & 0xf);
    *(char *)(extraout_ECX_00 + param_1) = (char)iVar1;
    param_2 = (byte *)(extraout_EDX_00 + 1);
  } while (extraout_ECX_00 + 1 < 0x40);
  *(undefined1 *)(extraout_ECX_00 + 1 + param_1) = 0;
  return;
}


/* END FUNCTION 0x004697b0 */
