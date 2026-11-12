/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00451180
 * Name: FUN_00451180
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00451180(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  iVar7 = 1;
  uVar3 = *param_2;
  iVar8 = 0;
  uVar2 = *param_1;
  *param_1 = *param_1 + uVar3;
  uVar4 = param_2[1];
  puVar1 = param_1 + 1;
  uVar5 = (uint)CARRY4(uVar2,uVar3);
  uVar2 = *puVar1;
  uVar6 = *puVar1 + uVar4;
  *puVar1 = uVar6 + uVar5;
  uVar3 = param_2[2];
  puVar1 = param_1 + 2;
  uVar4 = (uint)(CARRY4(uVar2,uVar4) || CARRY4(uVar6,uVar5));
  uVar2 = *puVar1;
  uVar5 = *puVar1 + uVar3;
  *puVar1 = uVar5 + uVar4;
  puVar1 = param_1 + 3;
  uVar2 = (uint)(CARRY4(uVar2,uVar3) || CARRY4(uVar5,uVar4));
  uVar3 = *puVar1 + param_2[3];
  bVar9 = CARRY4(*puVar1,param_2[3]) || CARRY4(uVar3,uVar2);
  *puVar1 = uVar3 + uVar2;
  do {
    iVar8 = iVar8 + 2;
    uVar3 = param_2[iVar8 * 2];
    puVar1 = param_1 + iVar8 * 2;
    uVar2 = *puVar1;
    uVar5 = *puVar1 + uVar3;
    *puVar1 = uVar5 + bVar9;
    uVar4 = param_2[iVar8 * 2 + 1];
    puVar1 = param_1 + iVar8 * 2 + 1;
    uVar5 = (uint)(CARRY4(uVar2,uVar3) || CARRY4(uVar5,(uint)bVar9));
    uVar2 = *puVar1;
    uVar6 = *puVar1 + uVar4;
    *puVar1 = uVar6 + uVar5;
    uVar3 = param_2[iVar8 * 2 + 2];
    puVar1 = param_1 + iVar8 * 2 + 2;
    uVar4 = (uint)(CARRY4(uVar2,uVar4) || CARRY4(uVar6,uVar5));
    uVar2 = *puVar1;
    uVar5 = *puVar1 + uVar3;
    *puVar1 = uVar5 + uVar4;
    puVar1 = param_1 + iVar8 * 2 + 3;
    uVar2 = (uint)(CARRY4(uVar2,uVar3) || CARRY4(uVar5,uVar4));
    uVar3 = *puVar1 + param_2[iVar8 * 2 + 3];
    bVar9 = CARRY4(*puVar1,param_2[iVar8 * 2 + 3]) || CARRY4(uVar3,uVar2);
    *puVar1 = uVar3 + uVar2;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  return;
}


/* END FUNCTION 0x00451180 */
