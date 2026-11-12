/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003c0a0
 * Name: FUN_1003c0a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_1003c0a0(int param_1,char *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    pcVar3 = param_2;
    do {
      cVar6 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar6 != '\0');
    if ((uint)((int)pcVar3 - (int)(param_2 + 1)) < 0x10) {
      uVar7 = 0;
      if (*(int *)(param_1 + 0x3a5) == 0) {
        return 0;
      }
      uVar4 = FUN_1002e2b0();
      FUN_100532c0();
      if (*(int *)(param_1 + 0x3a5) != 0) {
        do {
          puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x3a1) + uVar7 * 4);
          uVar2 = puVar1[1];
          if ((uVar2 == 0) || (uVar4 <= uVar2)) {
            pcVar3 = (char *)*puVar1;
            cVar6 = *param_2;
            iVar5 = 0;
            if (*pcVar3 == cVar6) {
              do {
                if (cVar6 == '\0') goto LAB_1003c1c4;
                cVar6 = param_2[iVar5 + 1];
                iVar5 = iVar5 + 1;
              } while (pcVar3[iVar5] == cVar6);
            }
            if (((pcVar3[iVar5] != '\0') && (param_2[iVar5] != '\0')) && (pcVar3[iVar5] == '*')) {
LAB_1003c1c4:
              FUN_100532d0();
              return 1;
            }
            uVar7 = uVar7 + 1;
          }
          else {
            iVar5 = *(int *)(param_1 + 0x3a1);
            puVar1 = *(undefined4 **)(iVar5 + uVar7 * 4);
            *(undefined4 *)(iVar5 + uVar7 * 4) =
                 *(undefined4 *)(iVar5 + -4 + *(int *)(param_1 + 0x3a5) * 4);
            FUN_1003acc0(*(int *)(param_1 + 0x3a5) + -1);
            _free((void *)*puVar1);
            _free(puVar1);
          }
        } while (uVar7 < *(uint *)(param_1 + 0x3a5));
      }
      FUN_100532d0();
      return 0;
    }
  }
  return 0;
}


/* END FUNCTION 0x1003c0a0 */
