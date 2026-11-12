/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042e420
 * Name: FUN_0042e420
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0042e420(undefined8 param_1)

{
  int iVar1;
  int unaff_ESI;
  
  iVar1 = FUN_00408340();
  if (iVar1 != 0) {
    FUN_0042e3e0(unaff_ESI);
    return;
  }
  FUN_0040d250(unaff_ESI);
  *(undefined8 *)(unaff_ESI + 8) = param_1;
  *(undefined2 *)(unaff_ESI + 0x1c) = 8;
  *(undefined1 *)(unaff_ESI + 0x1e) = 2;
  return;
}


/* END FUNCTION 0x0042e420 */
