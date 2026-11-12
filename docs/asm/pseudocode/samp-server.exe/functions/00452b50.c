/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00452b50
 * Name: FUN_00452b50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00452b50(uint *param_1,int param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint local_40 [16];
  
  puVar5 = local_40;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *param_1;
    param_1 = param_1 + 1;
    puVar5 = puVar5 + 1;
  }
  uVar4 = 0;
  puVar5 = param_3;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  uVar3 = 0;
  do {
    uVar6 = 0x20;
    for (uVar2 = *(uint *)(param_2 + uVar3 * 4); uVar2 != 0; uVar2 = uVar2 >> 1) {
      if ((uVar2 & 1) != 0) {
        if (uVar4 != 0) {
          FUN_004513e0(local_40,uVar4);
          uVar4 = 0;
        }
        FUN_004516c0(param_3,local_40);
      }
      uVar4 = uVar4 + 1;
      uVar6 = uVar6 + 0xffff;
    }
    uVar4 = uVar4 + (uVar6 & 0xffff);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x10);
  return;
}


/* END FUNCTION 0x00452b50 */
