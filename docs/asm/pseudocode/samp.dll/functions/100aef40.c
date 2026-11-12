/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100aef40
 * Name: FUN_100aef40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100aef40(int param_1,ushort param_2,short param_3,short param_4)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  short *psVar4;
  byte bVar5;
  byte bVar6;
  
  psVar4 = (short *)FUN_100a7110(*(undefined1 *)(param_1 + 0x2b0));
  if (*psVar4 == 0) {
    if (param_3 == 0) goto LAB_100aef7a;
    *psVar4 = param_3;
LAB_100aef7d:
    psVar4[0x18] = 0;
  }
  else {
    if (param_3 == 0) {
LAB_100aef7a:
      *psVar4 = 0;
      goto LAB_100aef7d;
    }
    *psVar4 = param_3;
    psVar4[0x18] = param_3;
  }
  if (psVar4[1] == 0) {
    if (param_4 == 0) goto LAB_100aefa6;
    psVar4[1] = param_4;
LAB_100aefaa:
    psVar4[0x19] = 0;
  }
  else {
    if (param_4 == 0) {
LAB_100aefa6:
      psVar4[1] = 0;
      goto LAB_100aefaa;
    }
    psVar4[1] = param_4;
    psVar4[0x19] = param_4;
  }
  if ((param_2 & 1) == 0) {
    psVar4[4] = 0;
LAB_100aefd1:
    psVar4[0x1c] = 0;
  }
  else {
    sVar1 = psVar4[4];
    psVar4[4] = 0xff;
    if (sVar1 == 0) goto LAB_100aefd1;
    psVar4[0x1c] = 0xff;
  }
  if (((*(int *)(param_1 + 0x2a4) == 0) ||
      ((*(uint *)(*(int *)(param_1 + 0x2a4) + 0x46c) & 0x100) == 0)) || ((param_2 >> 1 & 1) == 0)) {
    psVar4[0x12] = 0;
LAB_100af008:
    psVar4[0x2a] = 0;
  }
  else {
    sVar1 = psVar4[0x12];
    psVar4[0x12] = 0xff;
    if (sVar1 == 0) goto LAB_100af008;
    psVar4[0x2a] = 0xff;
  }
  if ((param_2 >> 2 & 1) == 0) {
    psVar4[0x11] = 0;
LAB_100af028:
    psVar4[0x29] = 0;
  }
  else {
    sVar1 = psVar4[0x11];
    psVar4[0x11] = 0xff;
    if (sVar1 == 0) goto LAB_100af028;
    psVar4[0x29] = 0xff;
  }
  if ((param_2 >> 3 & 1) == 0) {
    psVar4[0x10] = 0;
LAB_100af048:
    psVar4[0x28] = 0;
  }
  else {
    sVar1 = psVar4[0x10];
    psVar4[0x10] = 0xff;
    if (sVar1 == 0) goto LAB_100af048;
    psVar4[0x28] = 0xff;
  }
  if (((param_2 >> 4 & 1) == 0) ||
     (((iVar2 = *(int *)(param_1 + 0x2a4), iVar2 != 0 && ((*(uint *)(iVar2 + 0x46c) & 0x100) == 0))
      && ((piVar3 = *(int **)(*(int *)(iVar2 + 0x47c) + 0x10), piVar3 != (int *)0x0 &&
          (*piVar3 == 0x8705c4)))))) {
    psVar4[0xf] = 0;
LAB_100af08f:
    psVar4[0x27] = 0;
  }
  else {
    sVar1 = psVar4[0xf];
    psVar4[0xf] = 0xff;
    if (sVar1 == 0) goto LAB_100af08f;
    psVar4[0x27] = 0xff;
  }
  if ((param_2 >> 5 & 1) == 0) {
    psVar4[0xe] = 0;
LAB_100af0af:
    psVar4[0x26] = 0;
  }
  else {
    sVar1 = psVar4[0xe];
    psVar4[0xe] = 0xff;
    if (sVar1 == 0) goto LAB_100af0af;
    psVar4[0x26] = 0xff;
  }
  if ((param_2 >> 6 & 1) == 0) {
    psVar4[7] = 0;
LAB_100af0cf:
    psVar4[0x1f] = 0;
  }
  else {
    sVar1 = psVar4[7];
    psVar4[7] = 0xff;
    if (sVar1 == 0) goto LAB_100af0cf;
    psVar4[0x1f] = 0xff;
  }
  if ((param_2 >> 7 & 1) == 0) {
    psVar4[6] = 0;
LAB_100af0ef:
    psVar4[0x1e] = 0;
  }
  else {
    sVar1 = psVar4[6];
    psVar4[6] = 0xff;
    if (sVar1 == 0) goto LAB_100af0ef;
    psVar4[0x1e] = 0xff;
  }
  if ((param_2 >> 8 & 1) == 0) {
    psVar4[5] = 0;
LAB_100af10f:
    psVar4[0x1d] = 0;
  }
  else {
    sVar1 = psVar4[5];
    psVar4[5] = 0xff;
    if (sVar1 == 0) goto LAB_100af10f;
    psVar4[0x1d] = 0xff;
  }
  if ((param_2 >> 9 & 1) == 0) {
    psVar4[0x13] = 0;
LAB_100af12f:
    psVar4[0x2b] = 0;
  }
  else {
    sVar1 = psVar4[0x13];
    psVar4[0x13] = 0xff;
    if (sVar1 != 0xff) goto LAB_100af12f;
    psVar4[0x2b] = 0xff;
  }
  if ((param_2 >> 10 & 1) == 0) {
    psVar4[0x15] = 0;
  }
  else {
    sVar1 = psVar4[0x15];
    psVar4[0x15] = 0xff;
    if (sVar1 == 0xff) {
      psVar4[0x2d] = 0xff;
      goto LAB_100af153;
    }
  }
  psVar4[0x2d] = 0;
LAB_100af153:
  bVar6 = (byte)(param_2 >> 8);
  bVar5 = bVar6 >> 3 & 3;
  if (bVar5 == 2) {
    psVar4[3] = 0x80;
    psVar4[0x1b] = 0x80;
  }
  else if (bVar5 == 1) {
    psVar4[3] = -0x80;
    psVar4[0x1b] = -0x80;
  }
  else {
    psVar4[3] = 0;
    psVar4[0x1b] = 0;
  }
  bVar6 = bVar6 >> 5 & 3;
  if (bVar6 == 2) {
    psVar4[2] = 0x80;
    psVar4[0x1a] = 0x80;
  }
  else if (bVar6 == 1) {
    psVar4[2] = -0x80;
    psVar4[0x1a] = -0x80;
  }
  else {
    psVar4[2] = 0;
    psVar4[0x1a] = 0;
  }
  FUN_100a7080(*(undefined1 *)(param_1 + 0x2b0),psVar4);
  return;
}


/* END FUNCTION 0x100aef40 */
