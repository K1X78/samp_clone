/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00459b40
 * Name: FUN_00459b40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_00459b40(void *this,ushort param_1,u_short param_2,int param_3,char *param_4)

{
  char cVar1;
  u_short uVar2;
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
  puStack_10 = &LAB_004b103e;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  uVar3 = (**(code **)(*(int *)this + 0x28))();
  if (((char)uVar3 == '\0') && (param_1 != 0)) {
    if (*(int *)((int)this + 0xc18) == -1) {
      uVar3 = FUN_00462a10(param_2,1,param_4);
      *(uint *)((int)this + 0xc18) = uVar3;
      if (uVar3 == 0xffffffff) goto LAB_00459d50;
      uVar2 = FUN_00462d90(uVar3);
      if (uVar2 != 0) {
        param_2 = uVar2;
      }
    }
    if (*(short *)((int)this + 8) == 0) {
      if (param_1 < *(ushort *)((int)this + 10)) {
        *(ushort *)((int)this + 10) = param_1;
      }
      *(ushort *)((int)this + 8) = param_1;
      uVar3 = (uint)param_1;
      puStack_bc = operator_new(uVar3 * 0xcb8 + 4);
      uStack_c = 0;
      if (puStack_bc == (uint *)0x0) {
        puVar4 = (uint *)0x0;
      }
      else {
        puVar4 = puStack_bc + 1;
        *puStack_bc = uVar3;
        _eh_vector_constructor_iterator_(puVar4,0xcb8,uVar3,FUN_0044fdb0);
      }
      uVar3 = 0;
      uStack_c = 0xffffffff;
      *(uint **)((int)this + 0x33c) = puVar4;
      if (*(short *)((int)this + 8) != 0) {
        iVar6 = 0;
        do {
          *(undefined1 *)(iVar6 + *(int *)((int)this + 0x33c)) = 0;
          FUN_0045b180((void *)(*(int *)((int)this + 0x33c) + 0x10 + iVar6),
                       *(undefined8 *)((int)this + 0xc30),(uint)*(ushort *)((int)this + 0xc38),
                       (uint)*(ushort *)((int)this + 0xc3a));
          uVar3 = uVar3 + 1;
          iVar6 = iVar6 + 0xcb8;
        } while (uVar3 < *(ushort *)((int)this + 8));
      }
      FUN_00462ef0((void *)((int)this + 0x340));
    }
    if (*(char *)((int)this + 4) != '\0') {
      puVar7 = (undefined4 *)((int)this + 0x3dc);
      for (iVar6 = 0x100; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      *(undefined4 *)((int)this + 0x7f0) = 0;
      *(undefined4 *)((int)this + 0x7ec) = 0;
      *(undefined4 *)((int)this + 0x7e8) = 0;
      *(undefined4 *)((int)this + 0x7e4) = 0;
      *(undefined1 *)((int)this + 0x364) = 0;
      *(undefined1 *)((int)this + 4) = 0;
      *(int *)((int)this + 0xc14) = param_3;
      FUN_00452200((int)this);
      FUN_00462d10(acStack_b8);
      *(u_short *)((int)this + 0x238) = param_2;
      if ((param_4 == (char *)0x0) || (*param_4 == '\0')) {
        param_4 = acStack_b8;
      }
      uVar5 = inet_addr(param_4);
      *(ulong *)((int)this + 0x234) = uVar5;
      if (*(char *)((int)this + 5) == '\0') {
        puStack_bc = (uint *)0x0;
        hObject = (HANDLE)__beginthreadex((void *)0x0,0x200000,FUN_00459aa0,this,0,
                                          (uint *)&puStack_bc);
        *(HANDLE *)((int)this + 0x374) = hObject;
        if (hObject == (HANDLE)0x0) {
          uVar3 = (**(code **)(*(int *)this + 0x24))(0,0);
          goto LAB_00459d50;
        }
        CloseHandle(hObject);
        cVar1 = *(char *)((int)this + 5);
        *(undefined4 *)((int)this + 0x374) = 0;
        while (cVar1 == '\0') {
          FUN_0045ae30(10);
          cVar1 = *(char *)((int)this + 5);
        }
      }
    }
    uVar8 = 0;
    uVar3 = 0;
    if (*(int *)((int)this + 0x3bc) != 0) {
      do {
        (**(code **)(**(int **)(*(int *)((int)this + 0x3b8) + uVar8 * 4) + 8))(this);
        uVar3 = *(uint *)((int)this + 0x3bc);
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar3);
    }
    ExceptionList = pvStack_14;
    return CONCAT31((int3)(uVar3 >> 8),1);
  }
LAB_00459d50:
  ExceptionList = pvStack_14;
  return uVar3 & 0xffffff00;
}


/* END FUNCTION 0x00459b40 */
