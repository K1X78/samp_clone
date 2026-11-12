/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10066950
 * Name: FUN_10066950
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10066950(int param_1)

{
  int iVar1;
  DWORD DVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  float10 fVar6;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  float local_4;
  
  iVar1 = FUN_10001010();
  if ((iVar1 != 0) && (DAT_102aca24 != 0)) {
    iVar1 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 8);
    DVar2 = GetTickCount();
    if (DAT_102ac9ec != 0) {
      FUN_1006b6b0();
    }
    uVar4 = 0;
    piVar5 = (int *)(param_1 + 0x104);
    do {
      if (piVar5[-0x41] != 0) {
        if ((uint)(piVar5[1] + *piVar5) < DVar2) {
          piVar5[-0x41] = 0;
        }
        else if (((ushort)uVar4 < 0x3ec) && (*(int *)(iVar1 + 0xfd6 + (uVar4 & 0xffff) * 4) != 0)) {
          iVar3 = *(int *)(iVar1 + (uVar4 & 0xffff) * 4 + 0x26);
          if (iVar3 == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = *(int *)(iVar3 + 8);
          }
          if ((((*(int *)(iVar3 + 4) != 0) && (*(char *)(iVar3 + 0x1a) != '\0')) &&
              (iVar3 = FUN_100010f0(uVar4), *(int *)(iVar3 + 4) != 0)) &&
             (fVar6 = (float10)FUN_1009ef00(),
             fVar6 < (float10)(float)piVar5[3] != (fVar6 == (float10)(float)piVar5[3]))) {
            FUN_100ae080(8,&local_c);
            local_18 = local_c;
            iVar3 = piVar5[4];
            local_14 = local_8;
            local_10 = local_4;
            fVar6 = (float10)FUN_1009efd0();
            local_10 = (float)(((float10)((float)(iVar3 + -1) * 0.0125) + (float10)0.065) * fVar6 +
                               (float10)((float)(iVar3 + -1) * 0.02) + (float10)local_10 +
                              (float10)0.2);
            FUN_1006b6d0(&local_18,piVar5 + -0x40,piVar5[2],1,0);
          }
        }
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 0x46;
    } while ((int)uVar4 < 0x3ec);
    if (DAT_102ac9ec != 0) {
      FUN_1006b6c0();
    }
  }
  return;
}


/* END FUNCTION 0x10066950 */
