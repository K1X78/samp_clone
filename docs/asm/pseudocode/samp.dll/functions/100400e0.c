/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100400e0
 * Name: FUN_100400e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100400e0(int *param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  uVar2 = *(ushort *)((int)param_1 + 7);
  uVar6 = (uint)uVar2;
  if (param_2 != 0) {
    if (uVar2 != 0) {
      iVar8 = 0;
      uVar7 = (uint)uVar2;
      do {
        puVar4 = (undefined4 *)(param_1[0xcd] + 1 + iVar8);
        FUN_1003e3b0(*puVar4,*(undefined2 *)(puVar4 + 1),0,param_3);
        iVar8 = iVar8 + 0xc69;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    iVar8 = FUN_1002e2b0();
    if (param_2 != 0) {
      while (uVar7 = 0, uVar2 != 0) {
        pcVar5 = (char *)param_1[0xcd];
        while (*pcVar5 == '\0') {
          uVar7 = uVar7 + 1;
          pcVar5 = pcVar5 + 0xc69;
          if (uVar2 <= uVar7) goto LAB_10040178;
        }
        FUN_10043560(0xf);
        iVar3 = FUN_1002e2b0();
        if (param_2 <= (uint)(iVar3 - iVar8)) break;
      }
    }
  }
LAB_10040178:
  uVar7 = 0;
  if (*(int *)((int)param_1 + 0x3b1) != 0) {
    do {
      (**(code **)(**(int **)(*(int *)((int)param_1 + 0x3ad) + uVar7 * 4) + 0x14))(param_1);
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)((int)param_1 + 0x3b1));
  }
  if ((char)param_1[1] == '\0') {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  cVar1 = *(char *)((int)param_1 + 5);
  while (cVar1 != '\0') {
    FUN_10043560(0xf);
    cVar1 = *(char *)((int)param_1 + 5);
  }
  if (uVar6 != 0) {
    iVar8 = 0;
    do {
      *(undefined1 *)(iVar8 + param_1[0xcd]) = 0;
      FUN_10049db0(0);
      iVar8 = iVar8 + 0xc69;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  FUN_1003acb0();
  *(undefined2 *)((int)param_1 + 7) = 0;
  puVar4 = (undefined4 *)FUN_10039120();
  while (puVar4 != (undefined4 *)0x0) {
    (**(code **)(*param_1 + 0x3c))(*puVar4);
    FUN_10039140();
    puVar4 = (undefined4 *)FUN_10039120();
  }
  FUN_10039160();
  uVar6 = 0;
  while( true ) {
    uVar7 = *(uint *)((int)param_1 + 0xdd2);
    if (*(uint *)((int)param_1 + 0xdd6) < uVar7) {
      iVar8 = *(int *)((int)param_1 + 0xdda) - uVar7;
    }
    else {
      iVar8 = -uVar7;
    }
    if (*(uint *)((int)param_1 + 0xdd6) + iVar8 <= uVar6) break;
    uVar7 = *(int *)((int)param_1 + 0xdd2) + uVar6;
    if (uVar7 < *(uint *)((int)param_1 + 0xdda)) {
      (**(code **)(*param_1 + 0x3c))(*(undefined4 *)(*(int *)((int)param_1 + 0xdce) + uVar7 * 4));
      uVar6 = uVar6 + 1;
    }
    else {
      (**(code **)(*param_1 + 0x3c))
                (*(undefined4 *)
                  (*(int *)((int)param_1 + 0xdce) +
                  ((*(int *)((int)param_1 + 0xdd2) - *(uint *)((int)param_1 + 0xdda)) + uVar6) * 4))
      ;
      uVar6 = uVar6 + 1;
    }
  }
  if (*(uint *)((int)param_1 + 0xdda) != 0) {
    if (0x20 < *(uint *)((int)param_1 + 0xdda)) {
      _free(*(void **)((int)param_1 + 0xdce));
      *(undefined4 *)((int)param_1 + 0xdda) = 0;
    }
    *(undefined4 *)((int)param_1 + 0xdd2) = 0;
    *(undefined4 *)((int)param_1 + 0xdd6) = 0;
  }
  *(undefined1 *)((int)param_1 + 0xc19) = 0;
  if (*(SOCKET *)((int)param_1 + 0xc0a) != 0xffffffff) {
    closesocket(*(SOCKET *)((int)param_1 + 0xc0a));
    *(undefined4 *)((int)param_1 + 0xc0a) = 0xffffffff;
  }
  FUN_1003aad0();
  *(undefined4 *)((int)param_1 + 0x361) = 0;
  *(undefined4 *)((int)param_1 + 0x35d) = 0;
  FUN_1003ab10();
  iVar8 = param_1[0xcd];
  param_1[0xcd] = 0;
  if (iVar8 != 0) {
    _eh_vector_destructor_iterator_(iVar8,0xc69,*(undefined4 *)(iVar8 + -4),FUN_10037e60);
    _free((void *)(iVar8 + -4));
  }
  return;
}


/* END FUNCTION 0x100400e0 */
