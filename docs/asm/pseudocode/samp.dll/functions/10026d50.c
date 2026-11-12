/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10026d50
 * Name: FUN_10026d50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10026d50(undefined1 *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    pcVar2 = param_2;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    *(char **)(param_1 + 1) = pcVar2 + (1 - (int)(param_2 + 1));
    pcVar2 = operator_new((uint)(pcVar2 + (1 - (int)(param_2 + 1))));
    *(char **)(param_1 + 5) = pcVar2;
    do {
      cVar1 = *param_2;
      param_2 = param_2 + 1;
      *pcVar2 = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    *(undefined4 *)(param_1 + 1) = 0;
    *param_1 = 0;
    return;
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = 0;
  return;
}


/* END FUNCTION 0x10026d50 */
