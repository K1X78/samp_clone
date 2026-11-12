/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00453390
 * Name: FUN_00453390
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00453390(uint *param_1,int param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint local_20 [8];
  
  puVar5 = local_20;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *param_1;
    param_1 = param_1 + 1;
    puVar5 = puVar5 + 1;
  }
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[6] = 0;
  uVar4 = 0;
  param_3[7] = 0;
  uVar3 = 0;
  do {
    uVar6 = 0x20;
    for (uVar2 = *(uint *)(param_2 + uVar3 * 4); uVar2 != 0; uVar2 = uVar2 >> 1) {
      if ((uVar2 & 1) != 0) {
        if (uVar4 != 0) {
          FUN_004511e0(local_20,uVar4);
          uVar4 = 0;
        }
        FUN_00451180(param_3,local_20);
      }
      uVar4 = uVar4 + 1;
      uVar6 = uVar6 + 0xffff;
    }
    uVar4 = uVar4 + (uVar6 & 0xffff);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 8);
  return;
}


/* END FUNCTION 0x00453390 */
