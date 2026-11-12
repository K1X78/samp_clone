/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10054b10
 * Name: FUN_10054b10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10054b10(int param_1)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    while( true ) {
      cVar1 = FUN_100331a0(&stack0x00000004);
      if (cVar1 != '\0') break;
      uVar2 = uVar2 + 1;
      if (*(uint *)(param_1 + 4) <= uVar2) {
        return;
      }
    }
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) - uVar2;
  }
  return;
}


/* END FUNCTION 0x10054b10 */
