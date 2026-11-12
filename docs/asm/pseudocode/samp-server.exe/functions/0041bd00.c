/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041bd00
 * Name: FUN_0041bd00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_0041bd00(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int local_4;
  
  uVar4 = 0;
  if ((*(uint *)(*param_1 + 0xc) & 0x4000000) == 0) {
    return 0;
  }
  for (iVar2 = *(int *)(param_2 + 0x24); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
    iVar5 = *(int *)(iVar2 + 0x14);
    if (0 < iVar5) {
      piVar3 = (int *)(iVar2 + 0x24);
      do {
        if (*piVar3 < 0x20) {
          uVar1 = 1 << ((byte)*piVar3 & 0x1f);
        }
        else {
          uVar1 = 0xffffffff;
        }
        uVar4 = uVar4 | uVar1;
        piVar3 = piVar3 + 2;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  for (iVar2 = FUN_0040f840(); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0xc)) {
    local_4 = 0;
    FUN_0041bb30(param_1,param_2,iVar2,&local_4,(undefined4 *)0x0);
    if ((local_4 != 0) && (iVar5 = *(int *)(local_4 + 4), 0 < iVar5)) {
      piVar3 = *(int **)(local_4 + 8);
      do {
        if (*piVar3 < 0x20) {
          uVar1 = 1 << ((byte)*piVar3 & 0x1f);
        }
        else {
          uVar1 = 0xffffffff;
        }
        uVar4 = uVar4 | uVar1;
        piVar3 = piVar3 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return uVar4;
}


/* END FUNCTION 0x0041bd00 */
