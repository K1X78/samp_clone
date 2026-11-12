/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040eb00
 * Name: FUN_0040eb00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0040eb00(void)

{
  int in_EAX;
  int extraout_EDX;
  int iVar1;
  int iVar2;
  
  iVar1 = in_EAX + 0x60;
  iVar2 = 10;
  do {
    if (*(int *)(iVar1 + 0x10) != 0) {
      FUN_0040e920(*(int *)(iVar1 + 0x10),iVar1);
      *(undefined4 *)(extraout_EDX + 0x10) = 0;
      iVar1 = extraout_EDX;
    }
    iVar1 = iVar1 + 0x18;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


/* END FUNCTION 0x0040eb00 */
