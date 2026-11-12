/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10036b30
 * Name: FUN_10036b30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10036b30(int param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  if (param_2 != (char *)0x0) {
    pcVar2 = param_2;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    (**(code **)(**(int **)(param_1 + 4) + 0x18))(param_2,pcVar2 + (1 - (int)(param_2 + 1)));
    return;
  }
  (**(code **)(**(int **)(param_1 + 4) + 0x18))(0,0);
  return;
}


/* END FUNCTION 0x10036b30 */
