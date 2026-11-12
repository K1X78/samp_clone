/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040f0e0
 * Name: FUN_0040f0e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0040f0e0(undefined1 param_1)

{
  int iVar1;
  int in_EAX;
  
  if ((*(int *)(in_EAX + 0x200) != 0) &&
     (iVar1 = *(int *)(*(int *)(in_EAX + 0x200) + 0x24), iVar1 != 0)) {
    *(undefined1 *)(iVar1 + 0x18) = param_1;
  }
  return;
}


/* END FUNCTION 0x0040f0e0 */
