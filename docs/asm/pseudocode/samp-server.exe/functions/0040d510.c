/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040d510
 * Name: FUN_0040d510
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0040d510(uint *param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *unaff_EDI;
  
  iVar5 = unaff_EDI[3];
  iVar2 = unaff_EDI[8];
  uVar6 = *param_1;
  pbVar3 = (byte *)unaff_EDI[5];
  *(undefined1 *)((int)unaff_EDI + 0x67) = 1;
  if (-1 < iVar5 + -1) {
    do {
      bVar1 = *pbVar3;
      pbVar3[2] = (&DAT_004b2ad8)[bVar1];
      if ((bVar1 == 0x12) || (bVar1 == 0x74)) {
        uVar4 = (uint)pbVar3[3];
LAB_0040d572:
        if ((int)uVar6 < (int)uVar4) {
          uVar6 = uVar4;
        }
      }
      else {
        if (bVar1 != 0x22) {
          if (bVar1 == 0x85) {
            uVar4 = *(uint *)(pbVar3 + 8);
          }
          else {
            if (bVar1 != 0x80) goto LAB_0040d578;
            uVar4 = *(uint *)(pbVar3 + -0x10);
          }
          goto LAB_0040d572;
        }
        if (*(int *)(pbVar3 + 8) != 0) {
          *(undefined1 *)((int)unaff_EDI + 0x67) = 0;
        }
      }
LAB_0040d578:
      if (((pbVar3[2] & 1) != 0) && (*(int *)(pbVar3 + 8) < 0)) {
        *(undefined4 *)(pbVar3 + 8) = *(undefined4 *)(iVar2 - (*(int *)(pbVar3 + 8) * 4 + 4));
      }
      pbVar3 = pbVar3 + 0x14;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00408130(*unaff_EDI);
  unaff_EDI[8] = 0;
  *param_1 = uVar6;
  return;
}


/* END FUNCTION 0x0040d510 */
