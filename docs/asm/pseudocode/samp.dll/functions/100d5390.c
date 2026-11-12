/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d5390
 * Name: FUN_100d5390
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100d5390(int param_1)

{
  int *piVar1;
  int in_EAX;
  
  if (*(int *)(param_1 + 0x24) != in_EAX) {
    *(int *)(param_1 + 0x24) = in_EAX;
    if (in_EAX == 0x11) {
      piVar1 = (int *)(*(int *)(param_1 + 100) + 0x10);
      *piVar1 = *piVar1 + -1;
    }
    if (*(code **)(&DAT_10124ca8 + in_EAX * 4) != (code *)0x0) {
      (**(code **)(&DAT_10124ca8 + in_EAX * 4))(param_1);
    }
  }
  return;
}


/* END FUNCTION 0x100d5390 */
