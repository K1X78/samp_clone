/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040a0d0
 * Name: FUN_0040a0d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0040a0d0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (*(int *)(iVar1 + 0x1c) != 0) {
    if (*(int *)(param_1 + 0xc) == 1) {
      *(undefined4 *)(iVar1 + 0x2c) = 0;
    }
    (*DAT_004ca1a0)(*(undefined4 *)(iVar1 + 0x28),param_1,0);
  }
  return;
}


/* END FUNCTION 0x0040a0d0 */
