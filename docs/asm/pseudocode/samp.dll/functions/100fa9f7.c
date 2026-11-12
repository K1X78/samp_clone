/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100fa9f7
 * Name: xtoa
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall xtoa(char *param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  char *pcVar2;
  uint in_EAX;
  char *pcVar3;
  char cVar4;
  
  pcVar2 = param_1;
  if (param_3 != 0) {
    *param_1 = '-';
    param_1 = param_1 + 1;
    in_EAX = -in_EAX;
    pcVar2 = param_1;
  }
  do {
    pcVar3 = pcVar2;
    uVar1 = (ulonglong)in_EAX;
    in_EAX = in_EAX / param_2;
    cVar4 = (char)(uVar1 % (ulonglong)param_2);
    if ((uint)(uVar1 % (ulonglong)param_2) < 10) {
      cVar4 = cVar4 + '0';
    }
    else {
      cVar4 = cVar4 + 'W';
    }
    *pcVar3 = cVar4;
    pcVar2 = pcVar3 + 1;
  } while (in_EAX != 0);
  pcVar3[1] = '\0';
  do {
    cVar4 = *pcVar3;
    *pcVar3 = *param_1;
    pcVar3 = pcVar3 + -1;
    *param_1 = cVar4;
    param_1 = param_1 + 1;
  } while (param_1 < pcVar3);
  return;
}


/* END FUNCTION 0x100fa9f7 */
