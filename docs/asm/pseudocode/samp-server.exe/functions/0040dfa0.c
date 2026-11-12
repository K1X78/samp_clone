/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040dfa0
 * Name: FUN_0040dfa0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_0040dfa0(char *param_1,int param_2)

{
  char *pcVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  
  if (in_EAX == 0) {
    return 0;
  }
  FUN_0040df10();
  if (param_1 != (char *)0x0) {
    iVar3 = 0;
    if (0 < *(short *)(in_EAX + 0x3a)) {
      puVar4 = *(undefined4 **)(in_EAX + 0x40);
      do {
        pcVar1 = (char *)*puVar4;
        if (pcVar1 != (char *)0x0) {
          bVar7 = true;
          iVar2 = param_2;
          pcVar5 = pcVar1;
          pcVar6 = param_1;
          do {
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            bVar7 = *pcVar5 == *pcVar6;
            pcVar5 = pcVar5 + 1;
            pcVar6 = pcVar6 + 1;
          } while (bVar7);
          if ((bVar7) && (pcVar1[param_2] == '\0')) {
            return iVar3 + 1;
          }
        }
        iVar3 = iVar3 + 1;
        puVar4 = puVar4 + 1;
      } while (iVar3 < *(short *)(in_EAX + 0x3a));
    }
  }
  return 0;
}


/* END FUNCTION 0x0040dfa0 */
