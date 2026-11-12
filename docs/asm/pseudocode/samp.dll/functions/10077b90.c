/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10077b90
 * Name: FUN_10077b90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_10077b90(char *param_1,int param_2,char *param_3)

{
  undefined4 uVar1;
  char *pcVar2;
  
  uVar1 = 0;
  if (param_2 == 0) {
    return 0x80070057;
  }
  do {
    pcVar2 = param_1;
    if (*param_3 == '\0') {
      if (param_2 == 0) {
        pcVar2 = pcVar2 + -1;
        uVar1 = 0x8007007a;
      }
      *pcVar2 = '\0';
      return uVar1;
    }
    *pcVar2 = *param_3;
    param_3 = param_3 + 1;
    param_2 = param_2 + -1;
    param_1 = pcVar2 + 1;
  } while (param_2 != 0);
  *pcVar2 = '\0';
  return 0x8007007a;
}


/* END FUNCTION 0x10077b90 */
