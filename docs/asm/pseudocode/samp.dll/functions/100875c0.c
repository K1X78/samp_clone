/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100875c0
 * Name: FUN_100875c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_100875c0(int param_1,int param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0x4d) = 0;
    return 0;
  }
  iVar3 = 0x104;
  pcVar1 = (char *)(param_1 + 0x4d);
  do {
    pcVar2 = pcVar1;
    if (pcVar2[param_2 - (param_1 + 0x4d)] == '\0') {
      if (iVar3 == 0) {
        pcVar2 = pcVar2 + -1;
      }
      *pcVar2 = '\0';
      return 0;
    }
    *pcVar2 = pcVar2[param_2 - (param_1 + 0x4d)];
    iVar3 = iVar3 + -1;
    pcVar1 = pcVar2 + 1;
  } while (iVar3 != 0);
  *pcVar2 = '\0';
  return 0;
}


/* END FUNCTION 0x100875c0 */
