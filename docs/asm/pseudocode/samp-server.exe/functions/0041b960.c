/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041b960
 * Name: FUN_0041b960
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __cdecl FUN_0041b960(int param_1)

{
  int in_EAX;
  undefined4 *puVar1;
  undefined4 *extraout_EDX;
  
  if (in_EAX == 0) {
    puVar1 = FUN_00412900();
  }
  else {
    puVar1 = (undefined4 *)FUN_00414af0(FUN_0041b890);
  }
  if (puVar1 == (undefined4 *)0x0) {
    *(undefined1 *)(param_1 + 0x1e) = 1;
    return (undefined4 *)0x0;
  }
  if (*(char *)(puVar1 + 0x12) == '\0') {
    FUN_00408fe0();
    FUN_00408fe0();
    FUN_00408fe0();
    FUN_00408fe0();
    *(undefined1 *)((int)extraout_EDX + 0x49) = 1;
    puVar1 = extraout_EDX;
  }
  return puVar1;
}


/* END FUNCTION 0x0041b960 */
