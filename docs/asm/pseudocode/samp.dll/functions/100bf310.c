/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100bf310
 * Name: FUN_100bf310
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100bf310(int *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  
  do {
    if ((uint)param_1[4] < 4) {
      FUN_100be960();
    }
    else {
      pbVar2 = (byte *)*param_1;
      uVar3 = param_1[*pbVar2 + 0x18];
      bVar1 = pbVar2[1];
      iVar4 = param_1[1];
      uVar7 = bVar1 ^ uVar3 ^ (uint)pbVar2[2] << 8;
      uVar8 = (param_1[pbVar2[3] + 0x18] << 5 ^ uVar7) & param_1[0xb];
      iVar5 = param_1[9];
      uVar6 = *(undefined4 *)(iVar5 + 0x41000 + uVar8 * 4);
      *(int *)(iVar5 + 0x41000 + uVar8 * 4) = iVar4;
      *(int *)(iVar5 + 0x1000 + (uVar7 & 0xffff) * 4) = iVar4;
      *(int *)(iVar5 + ((bVar1 ^ uVar3) & 0x3ff) * 4) = iVar4;
      *(undefined4 *)(param_1[10] + param_1[5] * 4) = uVar6;
      iVar4 = param_1[1];
      param_1[5] = param_1[5] + 1;
      *param_1 = *param_1 + 1;
      param_1[1] = iVar4 + 1;
      if (iVar4 + 1 == param_1[2]) {
        FUN_100be570();
      }
    }
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}


/* END FUNCTION 0x100bf310 */
