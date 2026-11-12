/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a8fa4
 * Name: cvtdate
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall
cvtdate(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
       int param_7,int param_8,int param_9)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = param_3 % 4;
  if (param_2 == 1) {
    if (((iVar2 == 0) && (param_3 % 100 != 0)) || ((param_3 + 0x76c) % 400 == 0)) {
      iVar4 = *(int *)(&DAT_004ecd0c + in_EAX * 4);
    }
    else {
      iVar4 = *(int *)(&DAT_004ecd40 + in_EAX * 4);
    }
    iVar5 = iVar4 + 1;
    iVar3 = (param_3 * 0x16d + -0x63db +
            (param_3 + -1) / 4 + iVar5 + ((param_3 + 299) / 400 - (param_3 + -1) / 100)) % 7;
    iVar1 = (param_4 * 7 - iVar3) + param_5;
    if (iVar3 <= param_5) {
      iVar5 = iVar4 + -6;
    }
    iVar5 = iVar5 + iVar1;
    if (param_4 == 5) {
      if (((iVar2 == 0) && (param_3 % 100 != 0)) || ((param_3 + 0x76c) % 400 == 0)) {
        iVar1 = *(int *)(&DAT_004ecd10 + in_EAX * 4);
      }
      else {
        iVar1 = (&DAT_004ecd44)[in_EAX];
      }
      if (iVar1 < iVar5) {
        iVar5 = iVar5 + -7;
      }
    }
  }
  else {
    if (((iVar2 == 0) && (iVar1 = param_3 / 100, param_3 % 100 != 0)) ||
       (iVar1 = (param_3 + 0x76c) / 400, (param_3 + 0x76c) % 400 == 0)) {
      iVar5 = *(int *)(&DAT_004ecd0c + in_EAX * 4);
    }
    else {
      iVar5 = *(int *)(&DAT_004ecd40 + in_EAX * 4);
    }
    iVar5 = iVar5 + param_6;
  }
  iVar2 = ((int)this * 0x3c + param_7) * 0x3c;
  if (param_1 == 1) {
    DAT_004ec7a0 = (iVar2 + param_8) * 1000 + param_9;
    DAT_004ec798 = param_3;
    DAT_004ec79c = iVar5;
  }
  else {
    DAT_004ec7ac = (iVar2 + DAT_004ec708 + param_8) * 1000 + param_9;
    if (DAT_004ec7ac < 0) {
      DAT_004ec7ac = DAT_004ec7ac + 86400000;
      DAT_004ec7a8 = iVar5 + -1;
    }
    else {
      iVar1 = 86400000;
      DAT_004ec7a8 = iVar5;
      if (86399999 < DAT_004ec7ac) {
        DAT_004ec7ac = DAT_004ec7ac + -86400000;
        DAT_004ec7a8 = iVar5 + 1;
      }
    }
    DAT_004ec7a4 = param_3;
  }
  return iVar1;
}


/* END FUNCTION 0x004a8fa4 */
