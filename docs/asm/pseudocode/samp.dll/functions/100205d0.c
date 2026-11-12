/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100205d0
 * Name: FUN_100205d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100205d0(int param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    _free(*(void **)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    pcVar2 = param_2;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar2 = operator_new((uint)(pcVar2 + (1 - (int)(param_2 + 1))));
    *(char **)(param_1 + 8) = pcVar2;
    do {
      cVar1 = *param_2;
      param_2 = param_2 + 1;
      *pcVar2 = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
  }
  return;
}


/* END FUNCTION 0x100205d0 */
