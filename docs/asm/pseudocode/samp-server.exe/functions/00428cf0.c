/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00428cf0
 * Name: FUN_00428cf0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_00428cf0(undefined1 *param_1,void *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *in_EAX;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  int local_14;
  uint local_10;
  void *local_c;
  int local_8;
  int local_4;
  
  puVar3 = param_1;
  iVar6 = *(int *)(param_1 + 0xc);
  local_14 = 0;
  local_c = (void *)0x0;
  local_8 = iVar6;
  if (in_EAX == (undefined1 *)0x0) {
    in_EAX = (undefined1 *)FUN_0040ca60();
    param_1 = in_EAX;
  }
  else {
    param_1 = in_EAX;
    thunk_FUN_0040a330();
  }
  local_10 = FUN_00423650(*(int *)(iVar6 + 0x44));
  uVar4 = local_10;
  if (local_10 == 0) {
    iVar2 = *(int *)(iVar6 + 0x40);
    local_4 = FUN_00408f80();
    FUN_00408fa0((undefined1 *)(iVar2 + 0x24));
    if (puVar3[0x12] != '\0') {
      if (((in_EAX == (undefined1 *)0x0) &&
          (uVar4 = FUN_004238d0(param_2,(int *)&param_1), in_EAX = param_1, uVar4 != 0)) ||
         (local_10 = FUN_00423650(*(int *)(in_EAX + 0x44)), uVar4 = local_10, local_10 != 0))
      goto LAB_00428e59;
      uVar1 = *(ushort *)(*(int *)(in_EAX + 0x3c) + 0x16);
      puVar7 = *(undefined4 **)(in_EAX + 0x40);
      for (uVar4 = (uint)(uVar1 >> 2); uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      for (uVar4 = uVar1 & 3; in_EAX = param_1, uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar7 = 0;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
    }
    if ((puVar3[0x14] == '\0') ||
       (FUN_00427460('\x02',0), iVar6 = local_8, uVar4 = local_10, local_10 == 0)) {
      if (local_4 != 0) {
        local_c = (void *)FUN_00408f80();
        uVar4 = FUN_004238d0(local_c,&local_14);
        in_EAX = param_1;
        if (uVar4 != 0) goto LAB_00428e59;
        uVar5 = FUN_00408f80();
        if ((*(ushort *)(puVar3 + 0x18) >> 2) - 2 < uVar5) {
          uVar4 = FUN_0041d790();
          in_EAX = param_1;
          goto LAB_00428e59;
        }
        in_EAX = param_1;
        if (uVar5 < (*(ushort *)(puVar3 + 0x18) >> 2) - 8) {
          uVar4 = FUN_00423650(*(int *)(local_14 + 0x44));
          iVar6 = local_14;
          in_EAX = param_1;
          if (uVar4 == 0) {
            FUN_00408fa0((undefined1 *)(*(int *)(local_14 + 0x40) + 4));
            FUN_00408fa0((undefined1 *)(*(int *)(iVar6 + 0x40) + 8 + uVar5 * 4));
            if ((param_1 != (undefined1 *)0x0) && (puVar3[0x12] == '\0')) {
              FUN_0040b8f0(*(int *)(param_1 + 0x44));
            }
            uVar4 = FUN_00414990();
            in_EAX = param_1;
          }
          goto LAB_00428e59;
        }
      }
      if (((in_EAX != (undefined1 *)0x0) ||
          (uVar4 = FUN_004238d0(param_2,(int *)&param_1), in_EAX = param_1, uVar4 == 0)) &&
         (uVar4 = FUN_00423650(*(int *)(in_EAX + 0x44)), uVar4 == 0)) {
        FUN_00408fa0(*(undefined1 **)(in_EAX + 0x40));
        FUN_00408fa0((undefined1 *)(*(int *)(in_EAX + 0x40) + 4));
        FUN_00408fa0((undefined1 *)(*(int *)(iVar6 + 0x40) + 0x20));
      }
    }
  }
LAB_00428e59:
  if (in_EAX != (undefined1 *)0x0) {
    *in_EAX = 0;
  }
  FUN_00427610();
  FUN_00427610();
  return uVar4;
}


/* END FUNCTION 0x00428cf0 */
