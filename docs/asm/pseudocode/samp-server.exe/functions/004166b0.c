/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004166b0
 * Name: FUN_004166b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


short * __thiscall FUN_004166b0(void *this,int param_1,int param_2)

{
  short *in_EAX;
  short *psVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  
  psVar1 = in_EAX;
  if ((int)in_EAX[1] < *in_EAX + param_1) {
    psVar1 = (short *)FUN_004129a0((int)in_EAX[1],(*in_EAX + param_1) * 0x38 + 8,(int)this,
                                   (undefined4 *)in_EAX);
    if (psVar1 == (short *)0x0) {
      return in_EAX;
    }
    uVar2 = FUN_004080b0((int)this);
    psVar1[1] = (short)((uVar2 - 0x40) / 0x38) + 1;
  }
  iVar3 = *psVar1 + -1;
  if (param_2 <= iVar3) {
    iVar4 = (iVar3 - param_2) + 1;
    psVar5 = psVar1 + iVar3 * 0x1c + 4;
    psVar6 = psVar1 + (iVar3 + param_1) * 0x1c + 4;
    do {
      iVar4 = iVar4 + -1;
      psVar7 = psVar5;
      psVar8 = psVar6;
      for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined4 *)psVar8 = *(undefined4 *)psVar7;
        psVar7 = psVar7 + 2;
        psVar8 = psVar8 + 2;
      }
      psVar5 = psVar5 + -0x1c;
      psVar6 = psVar6 + -0x1c;
    } while (iVar4 != 0);
  }
  *psVar1 = *psVar1 + (short)param_1;
  psVar5 = psVar1 + param_2 * 0x1c + 4;
  for (uVar2 = (uint)(param_1 * 0x38) >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    psVar5[0] = 0;
    psVar5[1] = 0;
    psVar5 = psVar5 + 2;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)psVar5 = 0;
    psVar5 = (short *)((int)psVar5 + 1);
  }
  if (param_2 < param_2 + param_1) {
    psVar5 = psVar1 + param_2 * 0x1c + 0x10;
    iVar3 = (param_2 + param_1) - param_2;
    do {
      psVar5[0] = -1;
      psVar5[1] = -1;
      psVar5 = psVar5 + 0x1c;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return psVar1;
}


/* END FUNCTION 0x004166b0 */
