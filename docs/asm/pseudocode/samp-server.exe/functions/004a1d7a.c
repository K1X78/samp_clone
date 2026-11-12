/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a1d7a
 * Name: xtoa
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall xtoa(void *this,uint param_1,int param_2)

{
  ulonglong uVar1;
  char *pcVar2;
  uint in_EAX;
  char *pcVar3;
  char cVar4;
  
  pcVar2 = this;
  if (param_2 != 0) {
    *(undefined1 *)this = 0x2d;
    this = (void *)((int)this + 1);
    in_EAX = -in_EAX;
    pcVar2 = this;
  }
  do {
    pcVar3 = pcVar2;
    uVar1 = (ulonglong)in_EAX;
    in_EAX = in_EAX / param_1;
    cVar4 = (char)(uVar1 % (ulonglong)param_1);
    if ((uint)(uVar1 % (ulonglong)param_1) < 10) {
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
    *pcVar3 = *(char *)this;
    pcVar3 = pcVar3 + -1;
    *(char *)this = cVar4;
    this = (void *)((int)this + 1);
  } while (this < pcVar3);
  return;
}


/* END FUNCTION 0x004a1d7a */
