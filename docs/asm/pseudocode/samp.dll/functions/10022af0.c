/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10022af0
 * Name: FUN_10022af0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10022af0(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  undefined4 local_20;
  undefined2 local_1c;
  undefined1 local_1a;
  undefined1 local_17 [11];
  undefined4 local_c;
  undefined4 local_4;
  
  puVar1 = param_1;
  param_2 = thunk_FUN_100218b0();
  FUN_1001fbf0(&param_2,0x20,1);
  uVar8 = 0;
  iVar3 = thunk_FUN_100218b0();
  if (iVar3 != 0) {
    do {
      puVar4 = (undefined4 *)FUN_10022850(local_17,uVar8);
      param_2 = *puVar4;
      local_24 = *(undefined2 *)(puVar4 + 1);
      local_22 = *(undefined1 *)((int)puVar4 + 6);
      local_c = CONCAT22(local_c._2_2_,local_24);
      local_28 = param_2;
      FUN_1001faa0(&param_2,0x20,1);
      param_2 = local_c;
      FUN_1001faa0(&param_2,0x10,1);
      param_2 = CONCAT31(param_2._1_3_,local_22);
      FUN_1001faa0(&param_2,8,1);
      uVar5 = FUN_100227d0(uVar8);
      FUN_1001f420();
      local_2c = *puVar1;
      param_2 = uVar5;
      FUN_1001faa0(&param_2,0x10,1);
      iVar7 = 0;
      param_1 = (undefined4 *)0x0;
      iVar3 = FUN_100227d0(uVar8);
      if (iVar3 != 0) {
        do {
          FUN_100227f0(uVar8,param_1,&local_20,&local_30);
          cVar2 = thunk_FUN_10033200(&local_28);
          if (cVar2 != '\0') {
            param_2 = local_20;
            iVar7 = iVar7 + 1;
            local_4 = CONCAT22(local_4._2_2_,local_1c);
            FUN_1001faa0(&param_2,0x20,1);
            param_2 = local_4;
            FUN_1001faa0(&param_2,0x10,1);
            param_2 = CONCAT31(param_2._1_3_,local_1a);
            FUN_1001faa0(&param_2,8,1);
            param_2 = local_30;
            FUN_1001faa0(&param_2,0x10,1);
          }
          param_1 = (undefined4 *)((int)param_1 + 1);
          uVar6 = FUN_100227d0(uVar8);
        } while (param_1 < uVar6);
      }
      uVar5 = *puVar1;
      FUN_1001f7c0(local_2c);
      param_2 = iVar7;
      FUN_1001faa0(&param_2,0x10,1);
      FUN_1001f7c0(uVar5);
      uVar8 = uVar8 + 1;
      uVar6 = thunk_FUN_100218b0();
    } while (uVar8 < uVar6);
  }
  return;
}


/* END FUNCTION 0x10022af0 */
