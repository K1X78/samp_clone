/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10042260
 * Name: FUN_10042260
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall
FUN_10042260(int *param_1,ushort param_2,short param_3,undefined4 param_4,char *param_5)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  uint *puVar4;
  ulong uVar5;
  HANDLE hObject;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint *puStack_bc;
  char acStack_b8 [164];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_101152ee;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  uVar3 = (**(code **)(*param_1 + 0x28))();
  if (((char)uVar3 == '\0') && (param_2 != 0)) {
    if (*(int *)((int)param_1 + 0xc0a) == -1) {
      uVar3 = FUN_10053370();
      *(uint *)((int)param_1 + 0xc0a) = uVar3;
      if (uVar3 == 0xffffffff) goto LAB_10042470;
      sVar2 = FUN_100536b0(uVar3);
      if (sVar2 != 0) {
        param_3 = sVar2;
      }
    }
    if (*(short *)((int)param_1 + 7) == 0) {
      if (param_2 < *(ushort *)((int)param_1 + 9)) {
        *(ushort *)((int)param_1 + 9) = param_2;
      }
      *(ushort *)((int)param_1 + 7) = param_2;
      uVar3 = (uint)param_2;
      puStack_bc = operator_new(uVar3 * 0xc69 + 4);
      uStack_c = 0;
      if (puStack_bc == (uint *)0x0) {
        puVar4 = (uint *)0x0;
      }
      else {
        puVar4 = puStack_bc + 1;
        *puStack_bc = uVar3;
        _eh_vector_constructor_iterator_(puVar4,0xc69,uVar3,FUN_10037e00,FUN_10037e60);
      }
      uVar3 = 0;
      uStack_c = 0xffffffff;
      param_1[0xcd] = (int)puVar4;
      if (*(short *)((int)param_1 + 7) != 0) {
        iVar6 = 0;
        do {
          *(undefined1 *)(iVar6 + param_1[0xcd]) = 0;
          FUN_100438e0(*(undefined8 *)((int)param_1 + 0xc1e),*(undefined2 *)((int)param_1 + 0xc26),
                       (short)param_1[0x30a]);
          uVar3 = uVar3 + 1;
          iVar6 = iVar6 + 0xc69;
        } while (uVar3 < *(ushort *)((int)param_1 + 7));
      }
      FUN_1003acb0();
    }
    if ((char)param_1[1] != '\0') {
      puVar7 = (undefined4 *)((int)param_1 + 0x3d1);
      for (iVar6 = 0x100; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      *(undefined4 *)((int)param_1 + 0x7e5) = 0;
      *(undefined4 *)((int)param_1 + 0x7e1) = 0;
      *(undefined4 *)((int)param_1 + 0x7dd) = 0;
      *(undefined4 *)((int)param_1 + 0x7d9) = 0;
      *(undefined1 *)(param_1 + 0xd7) = 0;
      *(undefined1 *)(param_1 + 1) = 0;
      *(undefined4 *)((int)param_1 + 0xc06) = param_4;
      FUN_1003aad0();
      FUN_10053630(acStack_b8);
      *(short *)((int)param_1 + 0x231) = param_3;
      if ((param_5 == (char *)0x0) || (*param_5 == '\0')) {
        param_5 = acStack_b8;
      }
      uVar5 = inet_addr(param_5);
      *(ulong *)((int)param_1 + 0x22d) = uVar5;
      if (*(char *)((int)param_1 + 5) == '\0') {
        puStack_bc = (uint *)0x0;
        hObject = (HANDLE)__beginthreadex((void *)0x0,0x200000,FUN_100421c0,param_1,0,
                                          (uint *)&puStack_bc);
        *(HANDLE *)((int)param_1 + 0x369) = hObject;
        if (hObject == (HANDLE)0x0) {
          uVar3 = (**(code **)(*param_1 + 0x24))(0,0);
          goto LAB_10042470;
        }
        CloseHandle(hObject);
        cVar1 = *(char *)((int)param_1 + 5);
        *(undefined4 *)((int)param_1 + 0x369) = 0;
        while (cVar1 == '\0') {
          FUN_10043560(10);
          cVar1 = *(char *)((int)param_1 + 5);
        }
      }
    }
    uVar8 = 0;
    uVar3 = 0;
    if (*(int *)((int)param_1 + 0x3b1) != 0) {
      do {
        (**(code **)(**(int **)(*(int *)((int)param_1 + 0x3ad) + uVar8 * 4) + 8))(param_1);
        uVar3 = *(uint *)((int)param_1 + 0x3b1);
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar3);
    }
    ExceptionList = pvStack_14;
    return CONCAT31((int3)(uVar3 >> 8),1);
  }
LAB_10042470:
  ExceptionList = pvStack_14;
  return uVar3 & 0xffffff00;
}


/* END FUNCTION 0x10042260 */
