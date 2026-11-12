/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a8c70
 * Name: FUN_100a8c70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100a8c70(int param_1)

{
  int iVar1;
  
  if (((*(int **)(param_1 + 0x40) != (int *)0x0) &&
      (iVar1 = **(int **)(param_1 + 0x40), iVar1 != 0x863c40)) &&
     (*(char *)(param_1 + 0x1194) != '\0')) {
    (**(code **)(iVar1 + 0x50))(1);
    *(undefined1 *)(param_1 + 0x1194) = 0;
  }
  return;
}


/* END FUNCTION 0x100a8c70 */
