/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100faaa0
 * Name: FID_conflict__x64toa_20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FID_conflict__x64toa_20(int param_1,int param_2,undefined4 param_3,int param_4)

{
  char *pcVar1;
  char *in_EAX;
  char cVar2;
  uint extraout_ECX;
  char *pcVar3;
  longlong lVar4;
  
  lVar4 = CONCAT44(param_2,param_1);
  pcVar1 = in_EAX;
  if (param_4 != 0) {
    *in_EAX = '-';
    in_EAX = in_EAX + 1;
    lVar4 = CONCAT44(-(param_2 + (uint)(param_1 != 0)),-param_1);
    pcVar1 = in_EAX;
  }
  do {
    pcVar3 = pcVar1;
    lVar4 = __aulldvrm(lVar4,param_3,0);
    if (extraout_ECX < 10) {
      cVar2 = (char)extraout_ECX + '0';
    }
    else {
      cVar2 = (char)extraout_ECX + 'W';
    }
    *pcVar3 = cVar2;
    pcVar1 = pcVar3 + 1;
  } while (lVar4 != 0);
  pcVar3[1] = '\0';
  do {
    cVar2 = *pcVar3;
    *pcVar3 = *in_EAX;
    pcVar3 = pcVar3 + -1;
    *in_EAX = cVar2;
    in_EAX = in_EAX + 1;
  } while (in_EAX < pcVar3);
  return;
}


/* END FUNCTION 0x100faaa0 */
