/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00420a50
 * Name: FUN_00420a50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00420a50(int param_1)

{
  int iVar1;
  int in_EAX;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int local_4;
  
  if (param_1 == 0) {
    FUN_0040c380(in_EAX);
  }
  if (param_1 < *(int *)(in_EAX + 4)) {
    iVar3 = param_1 << 4;
    iVar4 = param_1;
    do {
      iVar1 = *(int *)(*(int *)(in_EAX + 8) + iVar3 + 0xc);
      if (iVar1 != 0) {
        FUN_0041b890(iVar1);
      }
      if (0 < param_1) {
        return;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x10;
    } while (iVar4 < *(int *)(in_EAX + 4));
  }
  *(uint *)(in_EAX + 0xc) = *(uint *)(in_EAX + 0xc) & 0xfffffdff;
  FUN_00410450();
  FUN_0040c430();
  iVar4 = 2;
  local_4 = 2;
  if (2 < *(int *)(in_EAX + 4)) {
    iVar3 = 0x20;
    param_1 = 0x20;
    do {
      iVar1 = *(int *)(in_EAX + 8);
      puVar5 = (undefined4 *)(iVar3 + iVar1);
      if (*(int *)(iVar3 + 4 + iVar1) == 0) {
        FUN_00408130(in_EAX);
        *puVar5 = 0;
      }
      else {
        if (iVar4 < local_4) {
          puVar2 = (undefined4 *)(param_1 + iVar1);
          *puVar2 = *puVar5;
          puVar2[1] = puVar5[1];
          puVar2[2] = puVar5[2];
          puVar2[3] = puVar5[3];
        }
        iVar4 = iVar4 + 1;
        param_1 = param_1 + 0x10;
      }
      local_4 = local_4 + 1;
      iVar3 = iVar3 + 0x10;
    } while (local_4 < *(int *)(in_EAX + 4));
  }
  puVar5 = (undefined4 *)(iVar4 * 0x10 + *(int *)(in_EAX + 8));
  for (iVar3 = (*(int *)(in_EAX + 4) - iVar4 & 0xfffffffU) << 2; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)puVar5 = 0;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  *(int *)(in_EAX + 4) = iVar4;
  if (iVar4 < 3) {
    puVar5 = (undefined4 *)(in_EAX + 0x1b0);
    if (*(undefined4 **)(in_EAX + 8) != puVar5) {
      puVar2 = *(undefined4 **)(in_EAX + 8);
      puVar6 = puVar5;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar6 = puVar6 + 1;
      }
      FUN_00408130(in_EAX);
      *(undefined4 **)(in_EAX + 8) = puVar5;
    }
  }
  return;
}


/* END FUNCTION 0x00420a50 */
