/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10067650
 * Name: FUN_10067650
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_10067650(int param_1,undefined4 param_2,char *param_3,char *param_4,undefined4 param_5,
            undefined4 param_6)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  size_t _Count;
  undefined4 *puVar5;
  undefined2 *puVar6;
  undefined4 *puVar7;
  
  puVar5 = (undefined4 *)(param_1 + 0x22e);
  puVar7 = (undefined4 *)(param_1 + 0x132);
  for (iVar4 = 0x189c; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  if (param_4 != (char *)0x0) {
    pcVar2 = param_4;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    if (0x18 < (uint)((int)pcVar2 - (int)(param_4 + 1))) {
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x6396) = param_2;
  *(undefined4 *)(param_1 + 0x639a) = param_5;
  *(undefined4 *)(param_1 + 0x639e) = param_6;
  uVar3 = FID_conflict___time32(0);
  *(undefined4 *)(param_1 + 0x62a6) = uVar3;
  if (param_4 == (char *)0x0) {
    *(undefined1 *)(param_1 + 0x62aa) = 0;
  }
  else {
    pcVar2 = param_4;
    do {
      cVar1 = *pcVar2;
      pcVar2[(param_1 + 0x62aa) - (int)param_4] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    puVar6 = (undefined2 *)(param_1 + 0x62a9);
    do {
      pcVar2 = (char *)((int)puVar6 + 1);
      puVar6 = (undefined2 *)((int)puVar6 + 1);
    } while (*pcVar2 != '\0');
    *puVar6 = 0x3a;
  }
  FUN_10067240(param_2,param_3,param_4);
  if (*(int *)(param_1 + 0x6396) == 2) {
    pcVar2 = param_3;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    if (0x48 < (uint)((int)pcVar2 - (int)(param_3 + 1))) {
      cVar1 = param_3[0x48];
      pcVar2 = param_3 + 0x48;
      for (_Count = 0x48; (cVar1 != ' ' && (_Count != 0)); _Count = _Count - 1) {
        cVar1 = param_3[_Count - 1];
      }
      if (0xc < (int)(0x48 - _Count)) {
        _strncpy((char *)(param_1 + 0x62c6),param_3,0x48);
        *(undefined1 *)(param_1 + 0x630e) = 0;
        puVar5 = (undefined4 *)(param_1 + 0x22e);
        puVar7 = (undefined4 *)(param_1 + 0x132);
        for (iVar4 = 0x189c; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        *(undefined4 *)(param_1 + 0x639e) = param_6;
        *(undefined4 *)(param_1 + 0x6396) = param_2;
        *(undefined4 *)(param_1 + 0x639a) = param_5;
        *(undefined1 *)(param_1 + 0x62aa) = 0;
        iVar4 = (param_1 + 0x62c6) - (int)pcVar2;
        do {
          cVar1 = *pcVar2;
          pcVar2[iVar4] = cVar1;
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        *(undefined4 *)(param_1 + 0x63da) = 1;
        return;
      }
      _strncpy((char *)(param_1 + 0x62c6),param_3,_Count);
      *(undefined1 *)(_Count + 0x62c6 + param_1) = 0;
      puVar5 = (undefined4 *)(param_1 + 0x22e);
      puVar7 = (undefined4 *)(param_1 + 0x132);
      for (iVar4 = 0x189c; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      *(undefined4 *)(param_1 + 0x6396) = param_2;
      *(undefined4 *)(param_1 + 0x639e) = param_6;
      param_3 = param_3 + _Count + 1;
      *(undefined4 *)(param_1 + 0x639a) = param_5;
      *(undefined1 *)(param_1 + 0x62aa) = 0;
      iVar4 = (param_1 + 0x62c6) - (int)param_3;
      do {
        cVar1 = *param_3;
        param_3[iVar4] = cVar1;
        param_3 = param_3 + 1;
      } while (cVar1 != '\0');
      *(undefined4 *)(param_1 + 0x63da) = 1;
      return;
    }
  }
  _strncpy((char *)(param_1 + 0x62c6),param_3,0x90);
  *(undefined1 *)(param_1 + 0x6356) = 0;
  *(undefined4 *)(param_1 + 0x63da) = 1;
  return;
}


/* END FUNCTION 0x10067650 */
