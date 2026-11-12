/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1010942c
 * Name: parse_cmdline
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall parse_cmdline(byte *param_1,undefined4 *param_2,int *param_3)

{
  bool bVar1;
  bool bVar2;
  byte *in_EAX;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  uint uVar6;
  int *unaff_ESI;
  
  bVar1 = false;
  *unaff_ESI = 0;
  *param_3 = 1;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_1;
    param_2 = param_2 + 1;
  }
  do {
    if (*in_EAX == 0x22) {
      bVar1 = !bVar1;
      pbVar3 = in_EAX + 1;
      bVar5 = 0x22;
    }
    else {
      *unaff_ESI = *unaff_ESI + 1;
      if (param_1 != (byte *)0x0) {
        *param_1 = *in_EAX;
        param_1 = param_1 + 1;
      }
      bVar5 = *in_EAX;
      pbVar3 = in_EAX + 1;
      if (((&DAT_102ad321)[bVar5] & 4) != 0) {
        *unaff_ESI = *unaff_ESI + 1;
        if (param_1 != (byte *)0x0) {
          *param_1 = *pbVar3;
          param_1 = param_1 + 1;
        }
        pbVar3 = in_EAX + 2;
      }
      if (bVar5 == 0) {
        pbVar3 = pbVar3 + -1;
        goto LAB_101094a5;
      }
    }
    in_EAX = pbVar3;
  } while ((bVar1) || ((bVar5 != 0x20 && (bVar5 != 9))));
  if (param_1 != (byte *)0x0) {
    param_1[-1] = 0;
  }
LAB_101094a5:
  bVar1 = false;
  while (*pbVar3 != 0) {
    for (; (*pbVar3 == 0x20 || (*pbVar3 == 9)); pbVar3 = pbVar3 + 1) {
    }
    if (*pbVar3 == 0) break;
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = param_1;
      param_2 = param_2 + 1;
    }
    *param_3 = *param_3 + 1;
    while( true ) {
      bVar2 = true;
      uVar6 = 0;
      for (; *pbVar3 == 0x5c; pbVar3 = pbVar3 + 1) {
        uVar6 = uVar6 + 1;
      }
      if (*pbVar3 == 0x22) {
        pbVar4 = pbVar3;
        if ((uVar6 & 1) == 0) {
          if ((!bVar1) || (pbVar4 = pbVar3 + 1, *pbVar4 != 0x22)) {
            bVar2 = false;
            pbVar4 = pbVar3;
          }
          bVar1 = !bVar1;
        }
        uVar6 = uVar6 >> 1;
        pbVar3 = pbVar4;
      }
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        if (param_1 != (byte *)0x0) {
          *param_1 = 0x5c;
          param_1 = param_1 + 1;
        }
        *unaff_ESI = *unaff_ESI + 1;
      }
      bVar5 = *pbVar3;
      if ((bVar5 == 0) || ((!bVar1 && ((bVar5 == 0x20 || (bVar5 == 9)))))) break;
      if (bVar2) {
        if (param_1 == (byte *)0x0) {
          if (((&DAT_102ad321)[bVar5] & 4) != 0) {
            pbVar3 = pbVar3 + 1;
            *unaff_ESI = *unaff_ESI + 1;
          }
        }
        else {
          if (((&DAT_102ad321)[bVar5] & 4) != 0) {
            *param_1 = bVar5;
            param_1 = param_1 + 1;
            pbVar3 = pbVar3 + 1;
            *unaff_ESI = *unaff_ESI + 1;
          }
          *param_1 = *pbVar3;
          param_1 = param_1 + 1;
        }
        *unaff_ESI = *unaff_ESI + 1;
      }
      pbVar3 = pbVar3 + 1;
    }
    if (param_1 != (byte *)0x0) {
      *param_1 = 0;
      param_1 = param_1 + 1;
    }
    *unaff_ESI = *unaff_ESI + 1;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  *param_3 = *param_3 + 1;
  return;
}


/* END FUNCTION 0x1010942c */
