/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00413d40
 * Name: FUN_00413d40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_00413d40(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int *in_EAX;
  undefined4 *puVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  char *local_20;
  int local_10;
  uint local_8;
  int local_4;
  
  iVar3 = *in_EAX;
  local_20 = (char *)0x0;
  puVar4 = FUN_00412900();
  iVar5 = *(int *)(iVar3 + 4) + (int)puVar4;
  if (puVar4 == (undefined4 *)0x0) {
    iVar12 = 7;
  }
  else {
    iVar12 = FUN_00407c20(iVar3,0,param_1,puVar4);
    if ((iVar12 == 0) && (iVar12 = FUN_00407b40(), iVar12 == 0)) {
      uVar11 = *(int *)(iVar3 + 8) + 1;
      local_20 = (char *)FUN_004125b0(local_8 + 1 + uVar11);
      if (local_20 == (char *)0x0) {
        iVar12 = 7;
      }
      else {
        pbVar1 = (byte *)(local_20 + local_8 + 1);
        iVar12 = FUN_00407ad0();
        if (iVar12 == 0) {
          local_20[local_8] = '\0';
          if ((-1 < local_4) && ((pcVar9 = local_20, 0 < local_4 || (local_8 != 0)))) {
            do {
              iVar12 = FUN_00407c50();
              if (iVar12 != 0) goto LAB_00413f25;
              if (local_10 != 0) {
                iVar12 = FUN_00407c20(iVar3,0,pcVar9,iVar5);
                if (iVar12 != 0) goto LAB_00413f25;
                iVar12 = FUN_0040b0e0(iVar5,pbVar1,uVar11);
                FUN_00407ab0();
                if (iVar12 != 0) goto LAB_00413f25;
                pbVar6 = pbVar1;
                pbVar10 = param_1;
                if (*pbVar1 != 0) {
                  do {
                    bVar2 = *pbVar6;
                    bVar13 = bVar2 < *pbVar10;
                    if (bVar2 != *pbVar10) {
LAB_00413ecc:
                      iVar7 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                      goto LAB_00413ed1;
                    }
                    if (bVar2 == 0) break;
                    bVar2 = pbVar6[1];
                    bVar13 = bVar2 < pbVar10[1];
                    if (bVar2 != pbVar10[1]) goto LAB_00413ecc;
                    pbVar6 = pbVar6 + 2;
                    pbVar10 = pbVar10 + 2;
                  } while (bVar2 != 0);
                  iVar7 = 0;
LAB_00413ed1:
                  if (iVar7 == 0) goto LAB_00413f25;
                }
              }
              uVar8 = FUN_00408380(pcVar9);
              pcVar9 = pcVar9 + uVar8 + 1;
              iVar12 = (int)pcVar9 - (int)local_20 >> 0x1f;
            } while ((iVar12 < local_4) ||
                    ((iVar12 <= local_4 && ((uint)((int)pcVar9 - (int)local_20) < local_8))));
          }
          FUN_00407ab0();
          iVar12 = FUN_00407c40();
        }
      }
    }
  }
LAB_00413f25:
  FUN_004080d0((int)local_20);
  if (puVar4 != (undefined4 *)0x0) {
    FUN_00407ab0();
    FUN_004080d0((int)puVar4);
  }
  return iVar12;
}


/* END FUNCTION 0x00413d40 */
