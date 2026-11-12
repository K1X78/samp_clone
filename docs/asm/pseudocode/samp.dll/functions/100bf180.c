/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100bf180
 * Name: FUN_100bf180
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100bf180(int *param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  
  do {
    uVar2 = param_1[4];
    if (uVar2 < 3) {
      FUN_100be960();
    }
    else {
      pbVar3 = (byte *)*param_1;
      uVar4 = param_1[*pbVar3 + 0x18];
      bVar1 = pbVar3[1];
      iVar5 = param_1[9];
      uVar8 = ((uint)pbVar3[2] << 8 ^ bVar1 ^ uVar4) & param_1[0xb];
      uVar6 = *(undefined4 *)(iVar5 + 0x1000 + uVar8 * 4);
      iVar7 = param_1[1];
      *(int *)(iVar5 + 0x1000 + uVar8 * 4) = iVar7;
      *(int *)(iVar5 + ((bVar1 ^ uVar4) & 0x3ff) * 4) = iVar7;
      FUN_100be830(uVar2,uVar6,param_1[1],*param_1,param_1[10],param_1[5],param_1[6],param_1[0xc]);
      iVar5 = param_1[1];
      param_1[5] = param_1[5] + 1;
      *param_1 = *param_1 + 1;
      param_1[1] = iVar5 + 1;
      if (iVar5 + 1 == param_1[2]) {
        FUN_100be570();
      }
    }
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}


/* END FUNCTION 0x100bf180 */
