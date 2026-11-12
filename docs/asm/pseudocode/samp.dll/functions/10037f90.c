/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10037f90
 * Name: FUN_10037f90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_10037f90(int param_1,undefined4 *param_2,ushort *param_3)

{
  ushort *puVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  int iVar7;
  int iVar6;
  
  puVar1 = param_3;
  pcVar2 = *(char **)(param_1 + 0x334);
  if ((pcVar2 != (char *)0x0) && (*(char *)(param_1 + 4) != '\x01')) {
    if (param_2 == (undefined4 *)0x0) {
      uVar5 = 0;
      for (uVar3 = (uint)*(ushort *)(param_1 + 7); uVar3 != 0; uVar3 = uVar3 - 1) {
        if ((*pcVar2 != '\0') && (*(int *)(pcVar2 + 0xc62) == 8)) {
          uVar5 = uVar5 + 1;
        }
        pcVar2 = pcVar2 + 0xc69;
      }
    }
    else {
      iVar6 = 0;
      uVar5 = 0;
      iVar7 = 0;
      param_3 = (ushort *)0x0;
      if (*(short *)(param_1 + 7) != 0) {
        iVar4 = 0;
        do {
          pcVar2 = (char *)(*(int *)(param_1 + 0x334) + iVar4);
          if ((*pcVar2 != '\0') && (*(int *)(pcVar2 + 0xc62) == 8)) {
            if ((int)param_3 < (int)(uint)*puVar1) {
              *param_2 = *(undefined4 *)(pcVar2 + 1);
              *(undefined2 *)(param_2 + 1) = *(undefined2 *)(pcVar2 + 5);
            }
            iVar6 = (int)param_3 + 1;
            param_2 = (undefined4 *)((int)param_2 + 6);
            param_3 = (ushort *)iVar6;
          }
          uVar5 = *(ushort *)(param_1 + 7);
          iVar7 = iVar7 + 1;
          iVar4 = iVar4 + 0xc69;
        } while (iVar7 < (int)(uint)uVar5);
        *puVar1 = (ushort)iVar6;
        return (uint)(byte)(uVar5 >> 8) << 8;
      }
    }
    *puVar1 = uVar5;
    return (uint)pcVar2 & 0xffffff00;
  }
  *param_3 = 0;
  return (uint)pcVar2 & 0xffffff00;
}


/* END FUNCTION 0x10037f90 */
