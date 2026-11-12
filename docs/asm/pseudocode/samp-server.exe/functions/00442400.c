/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00442400
 * Name: FUN_00442400
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00442400(int param_1)

{
  uint uVar1;
  uint *puVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int extraout_EDX;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  byte *pbStack0000000c;
  void *local_c;
  undefined4 *local_8;
  char *local_4;
  
  uVar8 = 0;
  puVar2 = (uint *)FUN_0040de20(param_1);
  local_c = (void *)0x0;
  pcVar3 = (char *)FUN_0041ffb0();
  local_4 = pcVar3;
  pbStack0000000c = (byte *)FUN_0041ffb0();
  if (pcVar3 == (char *)0x0) {
    local_4 = "";
  }
  if (pbStack0000000c == (byte *)0x0) {
    pbStack0000000c = &DAT_004b6404;
  }
  if ((int)puVar2[1] < (int)(puVar2[0x19] + 2)) {
    if ((char)puVar2[7] == '\0') {
      local_c = (void *)FUN_00418920((undefined **)"cannot ATTACH database within transaction");
      goto LAB_004426d2;
    }
    iVar7 = 0;
    if (0 < (int)puVar2[1]) {
      puVar5 = (undefined4 *)puVar2[2];
      do {
        iVar4 = FUN_00408450((byte *)*puVar5,pbStack0000000c);
        if (iVar4 == 0) {
          local_c = (void *)FUN_00418920((undefined **)"database %s is already in use");
          goto LAB_004426d2;
        }
        iVar7 = iVar7 + 1;
        puVar5 = puVar5 + 4;
      } while (iVar7 < (int)puVar2[1]);
    }
    if ((uint *)puVar2[2] == puVar2 + 0x6c) {
      puVar5 = FUN_00412930(0x30);
      if (puVar5 == (undefined4 *)0x0) {
        return;
      }
      puVar6 = (undefined4 *)puVar2[2];
      puVar9 = puVar5;
      for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar9 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar9 = puVar9 + 1;
      }
    }
    else {
      puVar5 = FUN_004129a0(puVar2[1],(puVar2[1] + 1) * 0x10,(int)puVar2,(uint *)puVar2[2]);
      if (puVar5 == (undefined4 *)0x0) {
        return;
      }
    }
    puVar2[2] = (uint)puVar5;
    puVar5 = puVar5 + puVar2[1] * 4;
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    local_8 = puVar5;
    uVar8 = FUN_0042a6a0(puVar2,puVar2[4] | 0x100,local_4,2000,puVar5 + 1);
    puVar2[1] = puVar2[1] + 1;
    if (uVar8 == 0x13) {
      uVar8 = 1;
      local_c = (void *)FUN_00418920((undefined **)"database is already attached");
    }
    else if (uVar8 == 0) {
      puVar6 = FUN_0041b960((int)puVar2);
      puVar5[3] = puVar6;
      if (puVar6 == (undefined4 *)0x0) {
        uVar8 = 7;
      }
      else if ((*(char *)(puVar6 + 0x12) != '\0') &&
              (*(char *)((int)puVar6 + 0x49) != *(char *)(*(int *)(puVar2[2] + 0xc) + 0x49))) {
        local_c = (void *)FUN_00418920((undefined **)
                                       "attached databases must use the same text encoding as main database"
                                      );
        uVar8 = 1;
      }
      FUN_0040d020();
      FUN_0040b9c0(extraout_EDX);
      FUN_0040cc20(*(int *)(puVar2[2] + 4));
      FUN_0040cc20(puVar5[1]);
    }
    *(undefined1 *)((int)puVar5 + 9) = 3;
    pcVar3 = FUN_00412a70();
    *local_8 = pcVar3;
    if (uVar8 == 0) {
      if (pcVar3 == (char *)0x0) {
        uVar8 = 7;
      }
      else {
        FUN_0040c380((int)puVar2);
        uVar8 = FUN_00442070(&local_c);
        FUN_0040c430();
        if (uVar8 == 0) {
          return;
        }
      }
    }
    uVar1 = puVar2[1];
    iVar4 = (uVar1 - 1) * 0x10;
    iVar7 = *(int *)(iVar4 + 4 + puVar2[2]);
    if (iVar7 != 0) {
      FUN_0042d3b0(iVar7);
      *(undefined4 *)(iVar4 + 4 + puVar2[2]) = 0;
      *(undefined4 *)(iVar4 + 0xc + puVar2[2]) = 0;
    }
    FUN_00420a50(0);
    puVar2[1] = uVar1 - 1;
    if ((uVar8 == 7) || (uVar8 == 0xc0a)) {
      *(undefined1 *)((int)puVar2 + 0x1e) = 1;
      FUN_00408130((int)puVar2);
      local_c = (void *)FUN_00418920((undefined **)"out of memory");
      goto LAB_004426d2;
    }
    if (local_c == (void *)0x0) {
      local_c = (void *)FUN_00418920((undefined **)"unable to open database: %s");
      goto LAB_004426d2;
    }
  }
  else {
    local_c = (void *)FUN_00418920((undefined **)"too many attached databases - max %d");
LAB_004426d2:
    if (local_c == (void *)0x0) goto LAB_004426f5;
  }
  FUN_0042e970(param_1,local_c,(void *)0xffffffff);
  FUN_00408130((int)puVar2);
LAB_004426f5:
  if (uVar8 != 0) {
    FUN_0042e9e0(param_1,uVar8);
  }
  return;
}


/* END FUNCTION 0x00442400 */
