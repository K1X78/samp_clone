/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00446950
 * Name: FUN_00446950
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00446950(int *param_1,int param_2)

{
  byte *pbVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  
  iVar3 = *param_1;
  iVar5 = FUN_0041d1b0(param_1,param_2);
  if (iVar5 == 0) {
    if (((*(byte *)(param_2 + 0x22) & 0x10) != 0) || (0 < *(int *)(param_2 + 0xc))) {
      return 0;
    }
    if (-1 < *(int *)(param_2 + 0xc)) {
      puVar6 = FUN_0041a470(iVar3,*(undefined4 **)(param_2 + 0x1c),0);
      if (puVar6 == (undefined4 *)0x0) {
        return 1;
      }
      uVar2 = *(undefined1 *)(iVar3 + 0xea);
      iVar5 = param_1[0x11];
      FUN_0040f1e0((int)param_1,(short *)puVar6[2]);
      *(undefined4 *)(param_2 + 0xc) = 0xffffffff;
      uVar4 = *(undefined4 *)(iVar3 + 0x100);
      *(undefined1 *)(iVar3 + 0xea) = 0;
      *(undefined4 *)(iVar3 + 0x100) = 0;
      piVar7 = FUN_00446370(param_1);
      *(undefined4 *)(iVar3 + 0x100) = uVar4;
      *(undefined1 *)(iVar3 + 0xea) = uVar2;
      param_1[0x11] = iVar5;
      if (piVar7 != (int *)0x0) {
        *(int *)(param_2 + 0xc) = piVar7[3];
        *(int *)(param_2 + 0x10) = piVar7[4];
        piVar7[3] = 0;
        piVar7[4] = 0;
        FUN_0041aca0(piVar7);
        pbVar1 = (byte *)(*(int *)(param_2 + 0x44) + 0x4a);
        *pbVar1 = *pbVar1 | 2;
        FUN_0040fce0(iVar3,(int)puVar6);
        return 0;
      }
      *(undefined4 *)(param_2 + 0xc) = 0;
      FUN_0040fce0(iVar3,(int)puVar6);
      return 1;
    }
    FUN_00418b00((undefined **)"view %s is circularly defined");
  }
  return 1;
}


/* END FUNCTION 0x00446950 */
