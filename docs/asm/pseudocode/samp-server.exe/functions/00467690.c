/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00467690
 * Name: FUN_00467690
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_00467690(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  do {
    if (*(char *)(iVar2 + param_1) != '\0') {
      iVar1 = iVar1 + 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0xd4);
  return iVar1;
}


/* END FUNCTION 0x00467690 */
