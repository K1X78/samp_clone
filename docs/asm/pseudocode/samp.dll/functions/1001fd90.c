/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001fd90
 * Name: FUN_1001fd90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1001fd90(char *param_1,char param_2,byte param_3,uint *param_4,undefined4 *param_5,
                 uint param_6)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  bVar3 = true;
  pcVar1 = param_1 + 1;
  pcVar4 = param_1;
  do {
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  uVar5 = (int)pcVar4 - (int)pcVar1;
  uVar6 = 0;
  if (pcVar4 != pcVar1) {
    do {
      if ((param_1[uVar6] == param_2) && (bVar3)) {
        param_1[uVar6] = '\0';
      }
      if ((param_1[uVar6] == '\n') || (param_1[uVar6] == '\r')) {
        param_1[uVar6] = '\0';
      }
      if ((int)param_1[uVar6] == (uint)param_3) {
        bVar3 = !bVar3;
        param_1[uVar6] = '\0';
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar5);
  }
  uVar6 = 0;
  uVar7 = 0;
  if (pcVar4 == pcVar1) {
    *param_5 = 0;
    *param_4 = 0;
    return;
  }
  do {
    if (param_1[uVar6] == '\0') {
      uVar6 = uVar6 + 1;
    }
    else {
      param_5[uVar7] = param_1 + uVar6;
      uVar7 = uVar7 + 1;
      if (param_6 <= uVar7) {
        param_5[uVar7] = 0;
        *param_4 = uVar7;
        return;
      }
      uVar6 = uVar6 + 1;
      cVar2 = param_1[uVar6];
      while (cVar2 != '\0') {
        if (uVar5 <= uVar6) goto LAB_1001fe2a;
        uVar6 = uVar6 + 1;
        cVar2 = param_1[uVar6];
      }
    }
  } while (uVar6 < uVar5);
LAB_1001fe2a:
  param_5[uVar7] = 0;
  *param_4 = uVar7;
  return;
}


/* END FUNCTION 0x1001fd90 */
