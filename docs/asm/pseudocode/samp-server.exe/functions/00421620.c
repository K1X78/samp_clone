/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00421620
 * Name: FUN_00421620
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_00421620(void *this,int param_1,int param_2)

{
  int iVar1;
  int in_EAX;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  uint extraout_EDX;
  int *piVar5;
  longlong lVar6;
  
  piVar2 = (int *)FUN_0041c720();
  iVar3 = FUN_0040d5c0();
  if ((*(byte *)(param_2 + 0x22) & 0x10) == 0) {
    lVar6 = (ulonglong)extraout_EDX << 0x20;
  }
  else {
    lVar6 = FUN_004103b0(*(int *)this);
  }
  piVar5 = (int *)((ulonglong)lVar6 >> 0x20);
  if (in_EAX < iVar3) {
    while( true ) {
      pcVar4 = FUN_0040d6f0(piVar5);
      if ((*pcVar4 == '&') && (*(int *)(pcVar4 + 0xc) == param_1)) {
        if (*(int *)(pcVar4 + 8) == *(int *)(param_2 + 0x18)) {
          return 1;
        }
        for (iVar1 = *(int *)(param_2 + 0x14); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x20)) {
          if (*(int *)(pcVar4 + 8) == *(int *)(iVar1 + 0x14)) {
            return 1;
          }
        }
      }
      if ((*pcVar4 == '\x7f') && (*(int *)(pcVar4 + 0x10) == (int)lVar6)) break;
      in_EAX = in_EAX + 1;
      piVar5 = piVar2;
      if (iVar3 <= in_EAX) {
        return 0;
      }
    }
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x00421620 */
