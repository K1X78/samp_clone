/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040c690
 * Name: FUN_0040c690
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0040c690(int param_1,int param_2)

{
  int iVar1;
  int in_EAX;
  int unaff_EDI;
  
  for (iVar1 = *(int *)(*(int *)(in_EAX + 4) + 8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
    if ((*(char *)(iVar1 + 0x54) != '\0') &&
       ((unaff_EDI != 0 ||
        ((*(int *)(iVar1 + 0x28) == param_1 && (*(int *)(iVar1 + 0x2c) == param_2)))))) {
      *(undefined1 *)(iVar1 + 0x43) = 0;
    }
  }
  return;
}


/* END FUNCTION 0x0040c690 */
