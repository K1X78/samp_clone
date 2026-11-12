/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d9ce0
 * Name: FUN_100d9ce0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool FUN_100d9ce0(char *param_1)

{
  char cVar1;
  char *in_EAX;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = (int)pcVar2 - (int)(param_1 + 1);
  pcVar2 = in_EAX;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar4 = (int)pcVar2 - (int)(in_EAX + 1);
  if (uVar3 <= uVar4) {
    iVar5 = FUN_100de830(param_1,in_EAX + (uVar4 - uVar3));
    if (iVar5 != 0) {
      if (uVar4 == uVar3) {
        return true;
      }
      return (in_EAX + (uVar4 - uVar3))[-1] == '.';
    }
  }
  return false;
}


/* END FUNCTION 0x100d9ce0 */
