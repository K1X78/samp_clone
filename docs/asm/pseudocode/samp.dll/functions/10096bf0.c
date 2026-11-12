/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10096bf0
 * Name: FUN_10096bf0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_10096bf0(int *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  
  if (param_1[4] == 0) {
    return -0x7ff8ffa9;
  }
  bVar1 = false;
  cVar5 = '\0';
  iVar6 = 0;
  bVar2 = false;
  if (0 < param_1[1]) {
    do {
      iVar4 = *(int *)(*param_1 + iVar6 * 4);
      if (iVar4 != 0) {
        if (bVar1) {
          if ((*(float *)(iVar4 + 8) != 0.0) || (bVar1 = bVar2, cVar5 != *(char *)(iVar4 + 0xc))) {
            iVar3 = (**(code **)(*(int *)param_1[4] + 0x44))((int *)param_1[4]);
            if (iVar3 < 0) {
              return iVar3;
            }
            goto LAB_10096c56;
          }
        }
        else {
LAB_10096c56:
          (**(code **)(*(int *)param_1[4] + 0x2c))((int *)param_1[4],*(undefined4 *)(iVar4 + 8));
          (**(code **)(*(int *)param_1[4] + 0x34))((int *)param_1[4],*(undefined1 *)(iVar4 + 0xc));
          cVar5 = *(char *)(iVar4 + 0xc);
          iVar3 = (**(code **)(*(int *)param_1[4] + 0x10))((int *)param_1[4]);
          if (iVar3 < 0) {
            return iVar3;
          }
          bVar1 = true;
        }
        iVar4 = (**(code **)(*(int *)param_1[4] + 0x14))
                          ((int *)param_1[4],*(undefined4 *)(iVar4 + 0x11),
                           *(undefined4 *)(iVar4 + 0x15),*(undefined4 *)(iVar4 + 4));
        bVar2 = bVar1;
        if (iVar4 < 0) {
          return iVar4;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_1[1]);
    if ((bVar1) && (iVar6 = (**(code **)(*(int *)param_1[4] + 0x44))((int *)param_1[4]), iVar6 < 0))
    {
      return iVar6;
    }
  }
  return 0;
}


/* END FUNCTION 0x10096bf0 */
