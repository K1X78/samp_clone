/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040ef80
 * Name: FUN_0040ef80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0040ef80(undefined1 param_1)

{
  int iVar1;
  int in_EAX;
  
  iVar1 = *(int *)(in_EAX + 0x200);
  if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
    *(undefined1 *)(*(int *)(iVar1 + 0x10) + -4 + *(int *)(iVar1 + 0xc) * 0x18) = param_1;
  }
  return;
}


/* END FUNCTION 0x0040ef80 */
