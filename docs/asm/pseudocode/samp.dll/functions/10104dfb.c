/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10104dfb
 * Name: cvtdate
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall
cvtdate(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
       int param_8,int param_9,int param_10)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  iVar2 = param_4 % 4;
  if (param_3 == 1) {
    if (((iVar2 == 0) && (param_4 % 100 != 0)) || ((param_4 + 0x76c) % 400 == 0)) {
      puVar3 = (&PTR_s_runtime_error_101562cc)[in_EAX];
    }
    else {
      puVar3 = *(undefined **)(&DAT_10156300 + in_EAX * 4);
    }
    puVar4 = puVar3 + 1;
    iVar1 = (param_5 * 7 -
            (int)(puVar4 + param_4 * 0x16d + -0x63db +
                           ((param_4 + 299) / 400 - (param_4 + -1) / 100) + (param_4 + -1) / 4) % 7)
            + param_6;
    if ((int)(puVar4 + param_4 * 0x16d + -0x63db +
                       ((param_4 + 299) / 400 - (param_4 + -1) / 100) + (param_4 + -1) / 4) % 7 <=
        param_6) {
      puVar4 = puVar3 + -6;
    }
    puVar4 = puVar4 + iVar1;
    if (param_5 == 5) {
      if (((iVar2 == 0) && (param_4 % 100 != 0)) || ((param_4 + 0x76c) % 400 == 0)) {
        iVar1 = *(int *)(&DAT_101562d0 + in_EAX * 4);
      }
      else {
        iVar1 = (&DAT_10156304)[in_EAX];
      }
      if (iVar1 < (int)puVar4) {
        puVar4 = puVar4 + -7;
      }
    }
  }
  else {
    if (((iVar2 == 0) && (iVar1 = param_4 / 100, param_4 % 100 != 0)) ||
       (iVar1 = (param_4 + 0x76c) / 400, (param_4 + 0x76c) % 400 == 0)) {
      puVar4 = (&PTR_s_runtime_error_101562cc)[in_EAX];
    }
    else {
      puVar4 = *(undefined **)(&DAT_10156300 + in_EAX * 4);
    }
    puVar4 = puVar4 + param_7;
  }
  iVar2 = (param_1 * 0x3c + param_8) * 0x3c;
  if (param_2 == 1) {
    DAT_10156060 = (iVar2 + param_9) * 1000 + param_10;
    DAT_10156058 = param_4;
    DAT_1015605c = puVar4;
  }
  else {
    DAT_1015606c = (iVar2 + DAT_10155fc8 + param_9) * 1000 + param_10;
    if (DAT_1015606c < 0) {
      DAT_1015606c = DAT_1015606c + 86400000;
      DAT_10156068 = puVar4 + -1;
    }
    else {
      iVar1 = 86400000;
      DAT_10156068 = puVar4;
      if (86399999 < DAT_1015606c) {
        DAT_1015606c = DAT_1015606c + -86400000;
        DAT_10156068 = puVar4 + 1;
      }
    }
    DAT_10156064 = param_4;
  }
  return iVar1;
}


/* END FUNCTION 0x10104dfb */
