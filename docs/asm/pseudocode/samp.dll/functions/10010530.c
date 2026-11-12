/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10010530
 * Name: FUN_10010530
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10010530(undefined4 *param_1)

{
  undefined2 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  byte local_202;
  char local_201;
  undefined2 local_200 [2];
  int local_1fc;
  undefined4 local_1f8 [70];
  undefined1 local_e0 [212];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101130ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  puVar1 = *(undefined2 **)(*(int *)(DAT_102aca24 + 0x3de) + 8);
  local_1fc = 0;
  local_4 = 0;
  FUN_10008110(*(int *)(DAT_102aca24 + 0x3d5) + 0x21);
  FUN_10008110(*(undefined4 *)(DAT_102aca24 + 0x3d5));
  FUN_10008110(*(int *)(DAT_102aca24 + 0x3d5) + 0x15);
  FUN_10008110(*(int *)(DAT_102aca24 + 0x3d5) + 0x39);
  FUN_1001f470(*(int *)(DAT_102aca24 + 0x3d5) + 0x34,0x20,1);
  FUN_10008110(local_1f8);
  FUN_1001f470(*(int *)(DAT_102aca24 + 0x3d5) + 0x27,0x20,1);
  FUN_10008110(*(int *)(DAT_102aca24 + 0x3d5) + 0x1a);
  FUN_10008110(*(int *)(DAT_102aca24 + 0x3d5) + 0x2f);
  *(undefined1 *)(*(int *)(DAT_102aca24 + 0x3d5) + 0x2f) = 1;
  FUN_10008110(*(int *)(DAT_102aca24 + 0x3d5) + 0x2b);
  FUN_1001f470(*(int *)(DAT_102aca24 + 0x3d5) + 0x23,0x20,1);
  FUN_1001f470(local_200,0x10,1);
  FUN_10008110(*(int *)(DAT_102aca24 + 0x3d5) + 0x38);
  FUN_1001f470(*(int *)(DAT_102aca24 + 0x3d5) + 0x30,0x20,1);
  FUN_1001f470(*(int *)(DAT_102aca24 + 0x3d5) + 0x2c,8,1);
  FUN_1001f470(*(int *)(DAT_102aca24 + 0x3d5) + 0x2e,8,1);
  FUN_1001f470(*(int *)(DAT_102aca24 + 0x3d5) + 0x16,0x20,1);
  FUN_10008110(&local_201);
  FUN_1001f470(*(int *)(DAT_102aca24 + 0x3d5) + 1,0x20,1);
  FUN_10008110(*(int *)(DAT_102aca24 + 0x3d5) + 0x20);
  FUN_1001f470(&DAT_1013c0a8,0x20,1);
  FUN_1001f470(&DAT_1013c0ac,0x20,1);
  FUN_1001f470(&DAT_1013c0b0,0x20,1);
  FUN_1001f470(&DAT_1013c0b4,0x20,1);
  FUN_1001f470(&local_1fc,0x20,1);
  if (local_1fc == 1) {
    DAT_10156ab0 = 0;
  }
  else {
    if (local_1fc != 2) {
      DAT_10156ab0 = 2;
      goto LAB_10010800;
    }
    DAT_10156ab0 = 1;
  }
  FUN_100a6d50();
  if (DAT_102aca3c != 0) {
    FUN_100a19f0();
  }
LAB_10010800:
  FUN_1001f470(&local_202,8,1);
  if (local_202 != 0) {
    puVar3 = (undefined4 *)(DAT_102aca24 + 0x131);
    for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined1 *)puVar3 = 0;
    FUN_1001f960(DAT_102aca24 + 0x131,local_202);
  }
  *(undefined1 *)(local_202 + 0x131 + DAT_102aca24) = 0;
  FUN_1001f960(local_e0,0xd4);
  FUN_100a1430(local_e0);
  FUN_1001f470(*(int *)(DAT_102aca24 + 0x3d5) + 0x1b,0x20,1);
  *puVar1 = local_200[0];
  FUN_100a1360(local_1f8[0]);
  if (local_201 != '\0') {
    *(undefined4 *)(DAT_102aca24 + 0x239) = 1;
  }
  FUN_100085e0();
  FUN_100a1220(*(undefined4 *)(*(int *)(DAT_102aca24 + 0x3d5) + 0x16));
  if (*(char *)(*(int *)(DAT_102aca24 + 0x3d5) + 0x1a) != '\0') {
    FUN_100a1380();
  }
  if (*(int *)(*(int *)(DAT_102aca24 + 0x3d5) + 0x1b) != 0) {
    FUN_100a6f00();
  }
  FUN_100a0980(*(undefined1 *)(*(int *)(DAT_102aca24 + 0x3d5) + 0x2e));
  FUN_10067b60(DAT_102aca10,"Connected to {B9C9BF}%.64s",DAT_102aca24 + 0x131);
  *(undefined4 *)(DAT_102aca24 + 0x3cd) = 5;
  FUN_10003f60();
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10010530 */
