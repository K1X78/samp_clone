/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00414d50
 * Name: FUN_00414d50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00414d50(undefined1 param_1)

{
  undefined4 uVar1;
  int unaff_ESI;
  
  if (unaff_ESI != 0) {
    uVar1 = FUN_00412ab0();
    *(undefined4 *)(unaff_ESI + 0xbc) = uVar1;
    *(undefined1 *)(unaff_ESI + 0x68) = param_1;
  }
  return;
}


/* END FUNCTION 0x00414d50 */
