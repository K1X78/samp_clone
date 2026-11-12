/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ac780
 * Name: FUN_100ac780
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool __fastcall FUN_100ac780(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x2a4) != 0) &&
     ((*(uint *)(*(int *)(param_1 + 0x2a4) + 0x46c) & 0x100) == 0)) {
    iVar2 = FUN_1009f210();
    if (iVar2 != 0) {
      iVar2 = FUN_100b3770(*(undefined4 *)(param_1 + 0x44));
      if ((iVar2 != 0) &&
         (piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x2a4) + 0x47c) + 0x10),
         piVar1 != (int *)0x0)) {
        return *piVar1 == 0x85a29c;
      }
    }
  }
  return false;
}


/* END FUNCTION 0x100ac780 */
