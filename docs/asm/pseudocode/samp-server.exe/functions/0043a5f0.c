/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0043a5f0
 * Name: FUN_0043a5f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0043a5f0(char *param_1,undefined4 *param_2,byte *param_3)

{
  uint in_EAX;
  int iVar1;
  uint *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  void *this;
  uint *puVar6;
  uint *puVar7;
  
  *param_2 = 0;
  iVar1 = FUN_0043a410();
  if (iVar1 != 0) {
    return;
  }
  if (DAT_004ca12c == 0) {
    iVar1 = 0;
  }
  else if ((char)(in_EAX >> 8) < '\0') {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
    if ((in_EAX & 0x10000) == 0) {
      iVar1 = DAT_004ca130;
    }
  }
  if ((in_EAX & 0x40000) == 0) {
    if (DAT_004ca1dc != 0) {
      in_EAX = in_EAX | 0x20000;
    }
  }
  else {
    in_EAX = in_EAX & 0xfffdffff;
  }
  puVar2 = FUN_00412900();
  if (puVar2 != (uint *)0x0) {
    if (iVar1 != 0) {
      uVar3 = FUN_00407e10();
      puVar2[0x11] = uVar3;
      if (uVar3 == 0) {
        FUN_004080d0((int)puVar2);
        puVar2 = (uint *)0x0;
        goto LAB_0043a8b7;
      }
    }
    FUN_00407e50(puVar2[0x11]);
    uVar3 = puVar2[3];
    puVar2[6] = 0xff;
    puVar2[1] = 2;
    puVar2[0xe] = 0xf03b7906;
    puVar2[2] = (uint)(puVar2 + 0x6c);
    puVar6 = &DAT_004b5d40;
    puVar7 = puVar2 + 0x12;
    for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    puVar2[3] = uVar3 | 0x8100800;
    *(undefined1 *)(puVar2 + 7) = 1;
    *(undefined1 *)(puVar2 + 8) = 0xff;
    puVar2[9] = 0;
    FUN_00408fe0();
    FUN_00408fe0();
    uVar3 = FUN_004123c0(param_3);
    *puVar2 = uVar3;
    if (uVar3 == 0) {
      FUN_0042f990(1,(undefined **)"no such vfs: %s");
    }
    else {
      FUN_004338a0((int)puVar2,1,1,0,0x411410,0);
      FUN_004338a0((int)puVar2,3,1,0,0x411410,0);
      FUN_004338a0((int)puVar2,2,1,0,0x411410,0);
      FUN_004338a0((int)puVar2,1,0,1,0x411410,0);
      if (*(char *)((int)puVar2 + 0x1e) == '\0') {
        piVar4 = FUN_0041b6e0((int)puVar2,0,1);
        puVar2[0xb] = (uint)piVar4;
        FUN_004338a0((int)puVar2,1,2,0,0x411490,0);
        puVar2[4] = in_EAX & 0xfffe00e7;
        iVar1 = FUN_0042a6a0(puVar2,in_EAX & 0xfffe00e7 | 0x100,param_1,2000,
                             (undefined4 *)(puVar2[2] + 4));
        if (iVar1 == 0) {
          puVar5 = FUN_0041b960((int)puVar2);
          *(undefined4 **)(puVar2[2] + 0xc) = puVar5;
          puVar5 = FUN_0041b960((int)puVar2);
          *(undefined4 **)(puVar2[2] + 0x1c) = puVar5;
          *(undefined **)puVar2[2] = &DAT_004b89cc;
          *(undefined1 *)(puVar2[2] + 9) = 3;
          *(undefined **)(puVar2[2] + 0x10) = &DAT_004b257c;
          *(undefined1 *)(puVar2[2] + 0x19) = 1;
          puVar2[0xe] = 0xa029a697;
          if (*(char *)((int)puVar2 + 0x1e) == '\0') {
            FUN_0042f990(0,(undefined **)0x0);
            FUN_004385f0();
            FUN_00431b20(this,puVar2);
            uVar3 = FUN_00423100((int)puVar2);
            if (uVar3 == 0) {
              FUN_0042f990(0,(undefined **)0x0);
              FUN_00417990(DAT_004ca138,(undefined4 *)0x0);
              FUN_0043a5b0((int)puVar2,1000);
            }
          }
        }
        else {
          if (iVar1 == 0xc0a) {
            iVar1 = 7;
          }
          FUN_0042f990(iVar1,(undefined **)0x0);
        }
      }
    }
    FUN_00407e90(puVar2[0x11]);
  }
LAB_0043a8b7:
  uVar3 = FUN_00423100((int)puVar2);
  if (uVar3 != 7) {
    if (uVar3 != 0) {
      puVar2[0xe] = 0x4b771290;
    }
    *param_2 = puVar2;
    FUN_004340c0(uVar3);
    return;
  }
  FUN_004334e0((int)puVar2);
  *param_2 = 0;
  FUN_004340c0(7);
  return;
}


/* END FUNCTION 0x0043a5f0 */
