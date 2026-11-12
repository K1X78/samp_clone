/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003ae80
 * Name: FUN_1003ae80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1003ae80(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_20 = *param_1;
  local_1c = param_1[1];
  local_18 = param_1[2];
  local_14 = param_1[3];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  local_10 = 0;
  param_3[5] = 0;
  local_c = 0;
  local_8 = 0;
  param_3[6] = 0;
  iVar3 = 0;
  local_4 = 0;
  param_3[7] = 0;
  uVar2 = 0;
  do {
    uVar4 = 0x20;
    for (uVar1 = *(uint *)(param_2 + uVar2 * 4); uVar1 != 0; uVar1 = uVar1 >> 1) {
      if ((uVar1 & 1) != 0) {
        if (iVar3 != 0) {
          FUN_10039900(&local_20,iVar3);
          iVar3 = 0;
        }
        FUN_10039850(param_3,&local_20);
      }
      iVar3 = iVar3 + 1;
      uVar4 = uVar4 + 0xffff;
    }
    iVar3 = iVar3 + (uVar4 & 0xffff);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  return;
}


/* END FUNCTION 0x1003ae80 */
