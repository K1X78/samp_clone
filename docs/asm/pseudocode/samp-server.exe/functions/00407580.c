/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00407580
 * Name: FUN_00407580
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_00407580(void)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  byte *in_EAX;
  int iVar4;
  undefined3 extraout_var;
  byte *pbVar5;
  int unaff_EDI;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar6;
  float10 fVar7;
  int local_10;
  undefined4 local_8;
  void *local_4;
  
  iVar4 = FUN_004073f0(in_EAX);
  if (iVar4 == 2) {
    if (in_EAX[5] == 0x3a) {
      iVar4 = FUN_004073f0(in_EAX + 6);
      if (iVar4 != 1) {
        return 1;
      }
      fVar7 = extraout_ST0_00;
      if ((in_EAX[8] == 0x2e) && (((&DAT_004b29c8)[in_EAX[9]] & 4) != 0)) {
        bVar1 = in_EAX[9];
        fVar6 = (float10)1.0;
        pbVar5 = in_EAX + 9;
        bVar2 = (&DAT_004b29c8)[bVar1];
        while ((bVar2 & 4) != 0) {
          iVar4 = (int)(char)bVar1;
          bVar1 = pbVar5[1];
          pbVar5 = pbVar5 + 1;
          fVar7 = ((float10)iVar4 + fVar7 * (float10)10.0) - (float10)48.0;
          fVar6 = fVar6 * (float10)10.0;
          bVar2 = (&DAT_004b29c8)[bVar1];
        }
        fVar7 = fVar7 / fVar6;
      }
    }
    else {
      local_10 = 0;
      fVar7 = extraout_ST0;
    }
    *(undefined4 *)(unaff_EDI + 0x14) = local_8;
    *(undefined1 *)(unaff_EDI + 0x2a) = 0;
    *(double *)(unaff_EDI + 0x20) = (double)((float10)local_10 + fVar7);
    *(undefined1 *)(unaff_EDI + 0x29) = 1;
    *(void **)(unaff_EDI + 0x18) = local_4;
    bVar3 = FUN_004074a0(local_4,unaff_EDI);
    if (CONCAT31(extraout_var,bVar3) == 0) {
      *(bool *)(unaff_EDI + 0x2b) = *(int *)(unaff_EDI + 0x1c) != 0;
      return 0;
    }
  }
  return 1;
}


/* END FUNCTION 0x00407580 */
