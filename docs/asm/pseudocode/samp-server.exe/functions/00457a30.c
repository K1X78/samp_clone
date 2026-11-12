/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00457a30
 * Name: FUN_00457a30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00457a30(void *this,uint param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  ushort uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar3 = *(ushort *)((int)this + 8);
  uVar6 = (uint)uVar3;
  if (param_1 != 0) {
    if (uVar3 != 0) {
      iVar8 = 0;
      uVar7 = (uint)uVar3;
      do {
        puVar4 = (undefined4 *)(*(int *)((int)this + 0x33c) + 1 + iVar8);
        FUN_00455b00(this,*puVar4,*(undefined2 *)(puVar4 + 1),'\0',param_2);
        iVar8 = iVar8 + 0xcb8;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    uVar9 = FUN_0044e910();
    if (param_1 != 0) {
      while (uVar7 = 0, uVar3 != 0) {
        pcVar5 = *(char **)((int)this + 0x33c);
        while (*pcVar5 == '\0') {
          uVar7 = uVar7 + 1;
          pcVar5 = pcVar5 + 0xcb8;
          if (uVar3 <= uVar7) goto LAB_00457ac8;
        }
        FUN_0045ae30(0xf);
        uVar10 = FUN_0044e910();
        if (param_1 <= (uint)((int)uVar10 - (int)uVar9)) break;
      }
    }
  }
LAB_00457ac8:
  uVar7 = 0;
  if (*(int *)((int)this + 0x3bc) != 0) {
    do {
      (**(code **)(**(int **)(*(int *)((int)this + 0x3b8) + uVar7 * 4) + 0x14))(this);
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)((int)this + 0x3bc));
  }
  if (*(char *)((int)this + 4) == '\0') {
    *(undefined1 *)((int)this + 4) = 1;
  }
  cVar2 = *(char *)((int)this + 5);
  while (cVar2 != '\0') {
    FUN_0045ae30(0xf);
    cVar2 = *(char *)((int)this + 5);
  }
  if (uVar6 != 0) {
    iVar8 = 0;
    do {
      *(undefined1 *)(iVar8 + *(int *)((int)this + 0x33c)) = 0;
      FUN_00460a40((void *)(*(int *)((int)this + 0x33c) + 0x10 + iVar8),'\0');
      iVar8 = iVar8 + 0xcb8;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  FUN_00462ef0((void *)((int)this + 0x340));
  piVar1 = (int *)((int)this + 0xdd0);
  *(undefined2 *)((int)this + 8) = 0;
  puVar4 = (undefined4 *)FUN_00450e60(piVar1);
  while (puVar4 != (undefined4 *)0x0) {
    (**(code **)(*(int *)this + 0x3c))(*puVar4);
    FUN_00450e80((int)piVar1);
    puVar4 = (undefined4 *)FUN_00450e60(piVar1);
  }
  FUN_00450ea0(piVar1);
  uVar6 = 0;
  while( true ) {
    uVar7 = *(uint *)((int)this + 0xdec);
    if (*(uint *)((int)this + 0xdf0) < uVar7) {
      iVar8 = *(int *)((int)this + 0xdf4) - uVar7;
    }
    else {
      iVar8 = -uVar7;
    }
    if (*(uint *)((int)this + 0xdf0) + iVar8 <= uVar6) break;
    uVar7 = *(int *)((int)this + 0xdec) + uVar6;
    if (uVar7 < *(uint *)((int)this + 0xdf4)) {
      (**(code **)(*(int *)this + 0x3c))(*(undefined4 *)(*(int *)((int)this + 0xde8) + uVar7 * 4));
      uVar6 = uVar6 + 1;
    }
    else {
      (**(code **)(*(int *)this + 0x3c))
                (*(undefined4 *)
                  (*(int *)((int)this + 0xde8) +
                  ((*(int *)((int)this + 0xdec) - *(uint *)((int)this + 0xdf4)) + uVar6) * 4));
      uVar6 = uVar6 + 1;
    }
  }
  if (*(uint *)((int)this + 0xdf4) != 0) {
    if (0x20 < *(uint *)((int)this + 0xdf4)) {
      _free(*(void **)((int)this + 0xde8));
      *(undefined4 *)((int)this + 0xdf4) = 0;
    }
    *(undefined4 *)((int)this + 0xdec) = 0;
    *(undefined4 *)((int)this + 0xdf0) = 0;
  }
  *(undefined1 *)((int)this + 0xc27) = 0;
  if (*(SOCKET *)((int)this + 0xc18) != 0xffffffff) {
    closesocket(*(SOCKET *)((int)this + 0xc18));
    *(undefined4 *)((int)this + 0xc18) = 0xffffffff;
  }
  FUN_00452200((int)this);
  *(undefined4 *)((int)this + 0x36c) = 0;
  *(undefined4 *)((int)this + 0x368) = 0;
  FUN_00452240((int)this);
  iVar8 = *(int *)((int)this + 0x33c);
  *(undefined4 *)((int)this + 0x33c) = 0;
  if (iVar8 != 0) {
    _eh_vector_destructor_iterator_(iVar8,0xcb8,*(int *)(iVar8 + -4),FUN_0044fe10);
    _free((void *)(iVar8 + -4));
  }
  return;
}


/* END FUNCTION 0x00457a30 */
