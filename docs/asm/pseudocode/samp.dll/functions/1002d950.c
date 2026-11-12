/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1002d950
 * Name: FUN_1002d950
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_1002d950(int param_1,char param_2)

{
  char cVar1;
  undefined4 *puVar2;
  void *_Memory;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  uint local_340;
  undefined4 local_33c;
  int local_338;
  undefined4 local_334;
  uint local_330;
  int local_32c;
  undefined4 local_328;
  undefined4 local_324;
  undefined1 local_320 [276];
  undefined1 local_20c [512];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011473b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f280(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 8),0);
  local_4 = 0;
  FUN_1001f7b0(8);
  if (param_2 == '\0') {
    FUN_1001f470(&local_330,0x20,1);
    FUN_1001f470(&local_328,0x20,1);
    FUN_1001f470(&local_324,0x20,1);
    FUN_1001f7b0(8);
  }
  FUN_1001f470(&local_334,8,1);
  FUN_1001f470(&local_33c,0x10,1);
  cVar1 = FUN_1002d250(&local_33c);
  if (cVar1 == '\0') {
    local_4 = 0xffffffff;
    FUN_1001f390();
    ExceptionList = local_c;
    return 0;
  }
  puVar2 = (undefined4 *)FUN_1002d200(&local_33c);
  puVar2 = (undefined4 *)*puVar2;
  cVar1 = FUN_100331d0(param_1 + 2);
  if (cVar1 != '\0') {
    local_4 = 0xffffffff;
    FUN_1001f390();
    ExceptionList = local_c;
    return 0;
  }
  FUN_1001f530(&local_338,0x20,1);
  FUN_1001f530(&local_340,0x20,1);
  uVar4 = local_330;
  if (*(char *)((int)puVar2 + 0x61e) != '\0') {
    FUN_1001f530(&local_32c,0x20,1);
    uVar4 = local_32c + 7U >> 3;
  }
  uVar8 = 0;
  puVar7 = local_320;
  puVar5 = local_20c;
  uVar6 = 0x200;
  FUN_100536f0(puVar5,0x200,puVar7,0);
  cVar1 = FUN_10053d90(puVar5,uVar6,puVar7,uVar8);
  if (cVar1 == '\0') {
LAB_1002db37:
    local_4 = 0xffffffff;
    FUN_1001f390();
    uVar6 = 0;
  }
  else {
    if (param_2 == '\0') {
      (**(code **)(*(int *)*puVar2 + 4))
                (local_338,local_20c,uVar4,local_340,local_33c,puVar2[0x184],puVar2[0x185],
                 puVar2[0x186],local_334,local_330,local_328,local_324);
    }
    else {
      _Memory = operator_new(local_340);
      if (*(char *)((int)puVar2 + 0x61e) == '\0') {
        FUN_1001f960(_Memory,local_340);
      }
      else {
        uVar3 = FUN_10026230(local_320,local_32c,local_340,_Memory);
        if (uVar3 != local_340) {
          _free(_Memory);
          goto LAB_1002db37;
        }
      }
      (*(code *)**(undefined4 **)*puVar2)
                (local_338,local_20c,_Memory,uVar4,local_340,local_33c,puVar2[0x184],puVar2[0x185],
                 puVar2[0x186],local_334);
      _free(_Memory);
      if (puVar2[0x184] == local_338 + 1) {
        if (*(char *)((int)puVar2 + 0x61d) != '\0') {
          _free((void *)*puVar2);
        }
        FUN_10026a60();
        _free(puVar2);
        FUN_1002d710(&local_33c);
      }
    }
    local_4 = 0xffffffff;
    FUN_1001f390();
    uVar6 = 1;
  }
  ExceptionList = local_c;
  return uVar6;
}


/* END FUNCTION 0x1002d950 */
