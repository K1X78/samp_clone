/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b2b60
 * Name: FUN_100b2b60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100b2b60(char *param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  
  pcVar4 = param_1;
  for (iVar6 = 200; iVar6 != 0; iVar6 = iVar6 + -1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + 4;
  }
  pcVar4 = param_2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if ((uint)((int)pcVar4 - (int)(param_2 + 1)) < 800) {
    _strncpy(param_1,param_2,800);
    param_1[800] = '\0';
    param_1[0x9c0] = '\0';
    bVar3 = false;
    iVar6 = 0;
    bVar2 = true;
    pcVar4 = param_1;
    if (*param_1 != '\0') {
      do {
        if (*pcVar4 == '~') {
          if (bVar3) {
            iVar6 = 0;
            bVar3 = false;
          }
          else {
            bVar3 = true;
            if ((pcVar4[1] == 'k') || (pcVar4[1] == 'K')) {
              param_1[0x9c0] = '\x01';
            }
LAB_100b2bea:
            iVar6 = iVar6 + 1;
            if (0x18 < iVar6) {
              bVar2 = false;
            }
          }
        }
        else if (bVar3) goto LAB_100b2bea;
        pcVar7 = pcVar4 + 1;
        pcVar4 = pcVar4 + 1;
      } while (*pcVar7 != '\0');
      if ((!bVar2) || (bVar3)) {
        pcVar4 = "Error: unmatched tilde";
        pcVar7 = param_1;
        for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + 4;
          pcVar7 = pcVar7 + 4;
        }
        *(undefined2 *)pcVar7 = *(undefined2 *)pcVar4;
        pcVar7[2] = pcVar4[2];
        param_1[0x9c0] = '\0';
      }
    }
    if (param_1[0x9c0] != '\0') {
      pcVar4 = param_1;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      if (0xff < (uint)((int)pcVar4 - (int)(param_1 + 1))) {
        pcVar4 = "Error: can\'t use k-codes in long string";
        pcVar7 = param_1;
        for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + 4;
          pcVar7 = pcVar7 + 4;
        }
        param_1[0x9c0] = '\0';
      }
    }
    if ((*(int *)(param_1 + 0x987) == 4) && (*(int *)(param_1 + 0x9a3) != -1)) {
      FUN_100b2750(*(int *)(param_1 + 0x9a3));
      uVar5 = FUN_100b2720();
      *(undefined4 *)(param_1 + 0x9a3) = uVar5;
      FUN_100b28d0();
    }
  }
  return;
}


/* END FUNCTION 0x100b2b60 */
