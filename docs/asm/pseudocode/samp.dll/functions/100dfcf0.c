/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100dfcf0
 * Name: FUN_100dfcf0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100dfcf0(char *param_1,ulong *param_2)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  int iVar4;
  
  cVar1 = *param_1;
  iVar4 = 0;
  pcVar3 = param_1;
  if (cVar1 != '\0') {
    do {
      if (cVar1 == '.') {
        iVar4 = iVar4 + 1;
      }
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if (iVar4 == 3) {
      uVar2 = inet_addr(param_1);
      if (uVar2 != 0xffffffff) {
        *param_2 = uVar2;
        return 1;
      }
    }
  }
  return 0;
}


/* END FUNCTION 0x100dfcf0 */
