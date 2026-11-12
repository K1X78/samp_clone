/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042e600
 * Name: FUN_0042e600
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_0042e600(void)

{
  void *this;
  int iVar1;
  byte bVar2;
  int *in_EAX;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  uint local_c;
  int local_4;
  
  iVar7 = *in_EAX;
  iVar1 = in_EAX[0x13];
  piVar9 = (int *)(iVar1 + 0x28);
  piVar8 = (int *)0x0;
  local_c = 0;
  local_4 = 0;
  in_EAX[0xb] = (int)piVar9;
  FUN_0040d750((uint)piVar9);
  if (in_EAX[0x16] == 7) {
    *(undefined1 *)(iVar7 + 0x1e) = 1;
    return 1;
  }
  iVar6 = in_EAX[3];
  if ((char)in_EAX[0x18] == '\x01') {
    iVar3 = in_EAX[0x13];
    local_4 = iVar3 + 0x168;
    if ((*(byte *)(iVar3 + 0x184) & 0x10) != 0) {
      piVar8 = *(int **)(iVar3 + 0x17c);
      local_c = *(uint *)(iVar3 + 0x180) >> 2;
    }
    iVar3 = 0;
    if (local_c != 0) {
      do {
        iVar6 = iVar6 + *(int *)(piVar8[iVar3] + 4);
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)local_c);
    }
  }
  do {
    iVar3 = in_EAX[0x15];
    in_EAX[0x15] = iVar3 + 1;
    if (iVar6 <= iVar3) {
      in_EAX[0x16] = 0;
      return 0x65;
    }
  } while (((char)in_EAX[0x18] == '\x02') && (*(char *)(in_EAX[5] + iVar3 * 0x14) != -0x77));
  if (*(int *)(iVar7 + 0xe0) != 0) {
    in_EAX[0x16] = 9;
    FUN_00411540();
    FUN_0041db50((undefined **)&DAT_004b23ac);
    return 1;
  }
  if (iVar3 < in_EAX[3]) {
    iVar7 = in_EAX[5];
  }
  else {
    iVar3 = iVar3 - in_EAX[3];
    iVar7 = *(int *)(*piVar8 + 4);
    iVar6 = 0;
    if (iVar7 <= iVar3) {
      do {
        iVar3 = iVar3 - iVar7;
        iVar7 = *(int *)(piVar8[iVar6 + 1] + 4);
        iVar6 = iVar6 + 1;
      } while (iVar7 <= iVar3);
    }
    iVar7 = *(int *)piVar8[iVar6];
  }
  iVar7 = iVar7 + iVar3 * 0x14;
  if ((char)in_EAX[0x18] == '\x01') {
    *(undefined2 *)(iVar1 + 0x44) = 4;
    *(undefined1 *)(iVar1 + 0x46) = 1;
    *piVar9 = iVar3;
    *(int *)(iVar1 + 0x2c) = iVar3 >> 0x1f;
    *(undefined2 *)(iVar1 + 0x6c) = 0xa02;
    pcVar4 = FUN_004091b0();
    *(char **)(iVar1 + 100) = pcVar4;
    uVar5 = FUN_00408380(pcVar4);
    *(uint *)(iVar1 + 0x68) = uVar5;
    *(undefined1 *)(iVar1 + 0x6e) = 3;
    *(undefined1 *)(iVar1 + 0x6f) = 1;
    piVar9 = (int *)(iVar1 + 0x78);
    if (*(char *)(iVar7 + 1) == -0x12) {
      this = (void *)(local_c * 4 + 4);
      uVar5 = 0;
      if (local_c != 0) {
        do {
          if (piVar8[uVar5] == *(int *)(iVar7 + 0x10)) break;
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < (int)local_c);
      }
      if ((uVar5 == local_c) &&
         (bVar2 = FUN_00414b80(this,local_4), CONCAT31(extraout_var,bVar2) == 0)) {
        *(undefined4 *)(*(int *)(local_4 + 0x14) + local_c * 4) = *(undefined4 *)(iVar7 + 0x10);
        *(byte *)(local_4 + 0x1c) = *(byte *)(local_4 + 0x1c) | 0x10;
        *(void **)(local_4 + 0x18) = this;
      }
    }
  }
  *(undefined2 *)(piVar9 + 7) = 4;
  iVar1 = *(int *)(iVar7 + 4);
  *piVar9 = iVar1;
  piVar9[1] = iVar1 >> 0x1f;
  *(undefined1 *)((int)piVar9 + 0x1e) = 1;
  *(undefined2 *)(piVar9 + 0x11) = 4;
  iVar1 = *(int *)(iVar7 + 8);
  piVar9[10] = iVar1;
  piVar9[0xb] = iVar1 >> 0x1f;
  *(undefined1 *)((int)piVar9 + 0x46) = 1;
  piVar8 = piVar9 + 0x14;
  if ((char)in_EAX[0x18] == '\x01') {
    *(undefined2 *)(piVar9 + 0x1b) = 4;
    iVar7 = *(int *)(iVar7 + 0xc);
    *piVar8 = iVar7;
    piVar9[0x15] = iVar7 >> 0x1f;
    *(undefined1 *)((int)piVar9 + 0x6e) = 1;
    piVar8 = piVar9 + 0x1e;
  }
  bVar2 = FUN_00414b80((void *)0x20,(int)piVar8);
  if (CONCAT31(extraout_var_00,bVar2) == 0) {
    *(undefined2 *)(piVar8 + 7) = 0x602;
    pcVar4 = FUN_00419820((char *)piVar8[5],0x20);
    if (pcVar4 == (char *)piVar8[5]) {
      uVar5 = FUN_00408380((char *)piVar8[5]);
      piVar8[6] = uVar5;
      *(undefined1 *)((int)piVar8 + 0x1f) = 1;
    }
    else {
      FUN_0042e460(pcVar4,(void *)0xffffffff,'\x01');
    }
    *(undefined1 *)((int)piVar8 + 0x1e) = 3;
    if ((char)in_EAX[0x18] == '\x01') {
      bVar2 = FUN_00414b80((void *)0x4,(int)(piVar8 + 10));
      if (CONCAT31(extraout_var_01,bVar2) != 0) {
        return 1;
      }
      *(undefined2 *)(piVar8 + 0x11) = 0x602;
      piVar8[0x10] = 2;
      FUN_004189f0(3,piVar8[0xf],(undefined **)&DAT_004b7e88);
      *(undefined1 *)((int)piVar8 + 0x46) = 3;
      *(undefined1 *)((int)piVar8 + 0x47) = 1;
      *(undefined2 *)(piVar8 + 0x1b) = 1;
      *(undefined1 *)((int)piVar8 + 0x6e) = 5;
    }
    in_EAX[0x16] = 0;
    *(ushort *)(in_EAX + 0xc) = (*(byte *)(in_EAX + 0x18) - 1) * -5 + 8;
    return 100;
  }
  return 1;
}


/* END FUNCTION 0x0042e600 */
