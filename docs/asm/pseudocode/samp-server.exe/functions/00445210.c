/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00445210
 * Name: FUN_00445210
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl
FUN_00445210(uint param_1,undefined4 param_2,undefined4 param_3,byte *param_4,undefined4 param_5,
            undefined4 param_6,uint param_7,undefined4 *param_8)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined **ppuVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  int *this;
  char *pcVar9;
  uint *puVar10;
  undefined **local_14;
  uint local_10;
  int local_c;
  int local_4;
  
  this = (int *)0x0;
  *param_8 = 0;
  local_4 = 0;
  local_10 = 0;
  local_14 = (undefined **)0x0;
  FUN_00407e50(*(int *)(param_1 + 0x44));
  puVar1 = FUN_00412930(0x230);
  if (puVar1 == (uint *)0x0) {
    local_10 = 7;
    goto LAB_0044571e;
  }
  do {
    puVar10 = puVar1;
    for (iVar7 = 0x8c; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    *puVar1 = param_1;
    FUN_0040c380(param_1);
    iVar7 = FUN_00442730();
    if (iVar7 == 0) {
LAB_0044553d:
      if (puVar1[2] != 0) {
        FUN_00408130(param_1);
        local_14 = (undefined **)puVar1[2];
        puVar1[2] = 0;
      }
      local_10 = 1;
      FUN_0040c430();
      goto LAB_004456f4;
    }
    if ((*(byte *)(iVar7 + 0x22) & 0x10) != 0) {
      pcVar9 = "cannot open virtual table: %s";
LAB_00445531:
      FUN_00418b00((undefined **)pcVar9);
      goto LAB_0044553d;
    }
    if (*(int *)(iVar7 + 0x1c) != 0) {
      pcVar9 = "cannot open view: %s";
      goto LAB_00445531;
    }
    local_c = 0;
    iVar4 = *(int *)(iVar7 + 0xc);
    if (0 < iVar4) {
      puVar8 = *(undefined4 **)(iVar7 + 0x10);
      do {
        iVar2 = FUN_00408450((byte *)*puVar8,param_4);
        if (iVar2 == 0) break;
        local_c = local_c + 1;
        puVar8 = puVar8 + 6;
      } while (local_c < iVar4);
    }
    if (local_c == iVar4) {
      FUN_00408130(param_1);
      local_14 = (undefined **)FUN_00418920((undefined **)"no such column: \"%s\"");
      local_10 = 1;
      FUN_0040c430();
      goto LAB_004456f4;
    }
    if (param_7 != 0) {
      pcVar9 = (char *)0x0;
      if ((*(uint *)(param_1 + 0xc) & 0x4000000) != 0) {
        for (iVar4 = *(int *)(iVar7 + 0x24); iVar4 != 0; iVar4 = *(int *)(iVar4 + 4)) {
          iVar2 = *(int *)(iVar4 + 0x14);
          if (0 < iVar2) {
            piVar3 = (int *)(iVar4 + 0x24);
            do {
              if (*piVar3 == local_c) {
                pcVar9 = "foreign key";
              }
              piVar3 = piVar3 + 2;
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
          }
        }
      }
      for (iVar4 = *(int *)(iVar7 + 0x14); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x20)) {
        iVar2 = *(int *)(iVar4 + 4);
        if (0 < iVar2) {
          piVar3 = *(int **)(iVar4 + 8);
          do {
            if (*piVar3 == local_c) {
              pcVar9 = "indexed";
            }
            piVar3 = piVar3 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
      if (pcVar9 != (char *)0x0) {
        FUN_00408130(param_1);
        local_14 = (undefined **)FUN_00418920((undefined **)"cannot open %s column for writing");
        local_10 = 1;
        FUN_0040c430();
        goto LAB_004456f4;
      }
    }
    this = (int *)FUN_00419780();
    if (this != (int *)0x0) {
      iVar4 = FUN_0040fc30(param_1);
      FUN_00414ef0(0xb,0x4b306c);
      param_7 = (uint)(param_7 != 0);
      FUN_0040d600(this,iVar4);
      FUN_0040d620(this,param_7);
      FUN_0040d600(this,iVar4);
      FUN_0040d620(this,**(undefined4 **)(iVar7 + 0x44));
      FUN_0040d720(iVar4);
      FUN_0040d600(this,iVar4);
      FUN_0040d620(this,*(undefined4 *)(iVar7 + 0x18));
      FUN_0040d640(this,param_7);
      FUN_00415110(-9,*(char **)(iVar7 + 4),this);
      FUN_004150c0(4 - param_7,this);
      FUN_0040d620(this,*(undefined4 *)(iVar7 + 0x18));
      FUN_0040d640(this,iVar4);
      FUN_00415110(-0xe,(char *)(*(int *)(iVar7 + 0xc) + 1),this);
      FUN_0040d620(this,*(undefined4 *)(iVar7 + 0xc));
      if (*(char *)(param_1 + 0x1e) == '\0') {
        FUN_00419b40(1,1,1,0,0,0);
      }
    }
    FUN_0040c430();
    if (*(char *)(param_1 + 0x1e) != '\0') goto LAB_004456f4;
    FUN_0042fec0(this,1,param_5,param_6);
    local_10 = FUN_004416d0(this);
    if (local_10 != 100) {
      local_4 = local_4 + 1;
      local_10 = FUN_00434350(this);
      FUN_00408130(param_1);
      ppuVar5 = (undefined **)FUN_00423080(param_1);
      local_14 = (undefined **)FUN_00418920(ppuVar5);
      this = (int *)0x0;
    }
  } while ((local_4 < 5) && (local_10 == 0x11));
  if (local_10 == 100) {
    uVar6 = *(uint *)(*(int *)(*(int *)this[0xd] + 0x4c) + local_c * 4);
    if (uVar6 < 0xc) {
      FUN_00408130(param_1);
      if (uVar6 == 0) {
        local_14 = (undefined **)FUN_00418920((undefined **)"cannot open value of type %s");
      }
      else {
        local_14 = (undefined **)FUN_00418920((undefined **)"cannot open value of type %s");
      }
LAB_004456e8:
      local_10 = 1;
    }
    else {
      puVar1 = FUN_00417b70();
      if (*(char *)(param_1 + 0x1e) == '\0') {
        *puVar1 = param_7;
        puVar1[3] = **(uint **)this[0xd];
        FUN_0040c360();
        FUN_0040d0c0();
        FUN_0040c370();
        puVar1[4] = (uint)this;
        puVar1[2] = *(uint *)(*(int *)(*(int *)this[0xd] + 0x50) + local_c * 4);
        uVar6 = FUN_0040d9a0();
        puVar1[1] = uVar6;
        puVar1[5] = param_1;
        *param_8 = puVar1;
        local_10 = 0;
      }
      else {
        FUN_00408130(param_1);
      }
    }
  }
  else if (local_10 == 0) {
    FUN_00408130(param_1);
    local_14 = (undefined **)FUN_00418920((undefined **)"no such rowid: %lld");
    goto LAB_004456e8;
  }
LAB_004456f4:
  if ((this != (int *)0x0) && ((local_10 != 0 || (*(char *)(param_1 + 0x1e) != '\0')))) {
    FUN_0042fc30();
  }
LAB_0044571e:
  FUN_0042f990(local_10,local_14);
  FUN_00408130(param_1);
  FUN_00408130(param_1);
  uVar6 = FUN_004340c0(local_10);
  FUN_00407e90(*(int *)(param_1 + 0x44));
  return uVar6;
}


/* END FUNCTION 0x00445210 */
