/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00416510
 * Name: FUN_00416510
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00416510(int param_1,int *param_2)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  undefined1 uVar4;
  byte *in_EAX;
  undefined3 extraout_var;
  byte bVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = *param_2;
  iVar7 = 0;
  bVar5 = *in_EAX;
  while ((bVar5 != 0 && ((((&DAT_004b29c8)[bVar5] & 6) != 0 || (bVar5 == 0x5f))))) {
    iVar2 = iVar7 + 1;
    iVar7 = iVar7 + 1;
    bVar5 = in_EAX[iVar2];
  }
  if ((((&DAT_004b29c8)[*in_EAX] & 4) == 0) &&
     (uVar4 = thunk_FUN_00410990(), CONCAT31(extraout_var,uVar4) == 0x1a)) {
    bVar5 = in_EAX[iVar7];
    if (bVar5 == 0) goto LAB_00416573;
  }
  else {
    bVar5 = 1;
  }
  *(undefined1 *)(iVar6 + param_1) = 0x22;
  iVar6 = iVar6 + 1;
LAB_00416573:
  bVar3 = *in_EAX;
  while (bVar3 != 0) {
    *(byte *)(iVar6 + param_1) = *in_EAX;
    iVar7 = iVar6 + 1;
    if (*in_EAX == 0x22) {
      *(undefined1 *)(iVar7 + param_1) = 0x22;
      iVar7 = iVar6 + 2;
    }
    pbVar1 = in_EAX + 1;
    in_EAX = in_EAX + 1;
    iVar6 = iVar7;
    bVar3 = *pbVar1;
  }
  if (bVar5 != 0) {
    *(undefined1 *)(iVar6 + param_1) = 0x22;
    *(undefined1 *)(iVar6 + 1 + param_1) = 0;
    *param_2 = iVar6 + 1;
    return;
  }
  *(undefined1 *)(iVar6 + param_1) = 0;
  *param_2 = iVar6;
  return;
}


/* END FUNCTION 0x00416510 */
