/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10067a90
 * Name: FUN_10067a90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10067a90(int param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  cVar2 = *param_4;
  pcVar3 = param_4;
  while (cVar2 != '\0') {
    if (('\0' < *pcVar3) && (*pcVar3 < ' ')) {
      *pcVar3 = ' ';
    }
    pcVar1 = pcVar3 + 1;
    pcVar3 = pcVar3 + 1;
    cVar2 = *pcVar1;
  }
  FUN_10067650(2,param_4,param_2,*(undefined4 *)(param_1 + 0x122),param_3);
  return;
}


/* END FUNCTION 0x10067a90 */
