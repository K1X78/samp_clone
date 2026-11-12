/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d0d10
 * Name: FUN_100d0d10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_100d0d10(int param_1)

{
  int in_EAX;
  int iVar1;
  
  if ((*(int *)(param_1 + 0x14) == *(int *)(in_EAX + 0x14)) &&
     (*(int *)(param_1 + 0x10) == *(int *)(in_EAX + 0x10))) {
    iVar1 = FUN_100de890(*(undefined4 *)(param_1 + 8),*(undefined4 *)(in_EAX + 8));
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x100d0d10 */
