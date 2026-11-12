/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d15e0
 * Name: FUN_100d15e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100d15e0(char *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    iVar3 = FUN_100de830(&DAT_1011837c,param_2);
    if (iVar3 != 0) {
      return 1;
    }
    pcVar4 = param_2;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uVar5 = (int)pcVar4 - (int)(param_2 + 1);
    pcVar6 = _strchr(param_1,0x3a);
    if (pcVar6 == (char *)0x0) {
      pcVar6 = param_1;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      uVar7 = (int)pcVar6 - (int)(param_1 + 1);
    }
    else {
      uVar7 = (int)pcVar6 - (int)param_1;
    }
    uVar9 = 0;
    if (pcVar4 != param_2 + 1) {
      while( true ) {
        while ((uVar9 < uVar5 && (pcVar4 = _strchr(", ",(int)param_2[uVar9]), pcVar4 != (char *)0x0)
               )) {
          uVar9 = uVar9 + 1;
        }
        uVar2 = uVar9;
        if (uVar9 == uVar5) break;
        while ((uVar2 < uVar5 && (pcVar4 = _strchr(", ",(int)param_2[uVar2]), pcVar4 == (char *)0x0)
               )) {
          uVar2 = uVar2 + 1;
        }
        if (param_2[uVar9] == '.') {
          uVar9 = uVar9 + 1;
        }
        uVar8 = uVar2 - uVar9;
        if (uVar8 <= uVar7) {
          iVar3 = FUN_100de8c0(param_2 + uVar9,param_1 + (uVar9 - uVar2) + uVar7,uVar8);
          if (iVar3 != 0) {
            if (uVar8 == uVar7) {
              return 1;
            }
            if ((param_1 + (uVar9 - uVar2) + uVar7)[-1] == '.') {
              return 1;
            }
          }
        }
        uVar9 = uVar2 + 1;
        if (uVar5 <= uVar9) {
          return 0;
        }
      }
    }
  }
  return 0;
}


/* END FUNCTION 0x100d15e0 */
