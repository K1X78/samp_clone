/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00429760
 * Name: FUN_00429760
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_00429760(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint local_8 [2];
  
  iVar3 = param_1;
  piVar1 = (int *)(param_1 + 0x44);
  iVar2 = *(int *)(param_1 + 0x3c);
  param_1 = 0;
  local_8[1] = 0;
  uVar4 = FUN_00423650(*piVar1);
  if (uVar4 == 0) {
    local_8[0] = FUN_00428700(iVar2,&param_1,local_8 + 1,*(undefined4 **)(iVar3 + 0x48),'\0');
    iVar6 = param_1;
    FUN_004296a0((int *)local_8);
    if (*(char *)(iVar2 + 0x14) != '\0') {
      FUN_00427460('\x05',*(int *)(iVar3 + 0x48));
    }
    iVar2 = param_1;
    uVar4 = local_8[0];
    if (local_8[0] == 0) {
      puVar7 = (undefined4 *)(iVar3 + 0x14);
      puVar8 = (undefined4 *)(iVar6 + 0x14);
      for (iVar5 = (uint)*(byte *)(iVar3 + 1) << 1; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      *(undefined1 *)(param_1 + 1) = *(undefined1 *)(iVar3 + 1);
      FUN_0041f920(**(byte **)(param_1 + 0x40) & 0xfffffff7);
      FUN_00408fa0((undefined1 *)(*(byte *)(iVar3 + 5) + 8 + *(int *)(iVar3 + 0x40)));
      *param_2 = iVar2;
      return 0;
    }
  }
  *param_2 = 0;
  FUN_00427610();
  return uVar4;
}


/* END FUNCTION 0x00429760 */
