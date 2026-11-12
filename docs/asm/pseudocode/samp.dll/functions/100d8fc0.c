/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d8fc0
 * Name: FUN_100d8fc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100d8fc0(undefined4 param_1,undefined4 param_2,char *param_3,int param_4)

{
  char cVar1;
  char *pcVar2;
  
  if (param_4 == 0) {
    pcVar2 = param_3;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    param_4 = (int)pcVar2 - (int)(param_3 + 1);
  }
  FUN_100d8e30(param_1,param_2,param_3,param_4);
  return;
}


/* END FUNCTION 0x100d8fc0 */
