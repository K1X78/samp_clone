/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100cf340
 * Name: FUN_100cf340
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100cf340(undefined4 param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = param_4;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_100cf260(param_1,param_2,param_3,param_4,(int)pcVar2 - (int)(param_4 + 1));
  return;
}


/* END FUNCTION 0x100cf340 */
