/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1004e4a0
 * Name: FUN_1004e4a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __fastcall FUN_1004e4a0(int param_1)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    do {
      cVar1 = FUN_100331a0(&stack0x00000004);
      if (cVar1 != '\0') {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  return 0xffffffff;
}


/* END FUNCTION 0x1004e4a0 */
