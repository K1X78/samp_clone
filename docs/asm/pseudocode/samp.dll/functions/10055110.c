/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10055110
 * Name: FUN_10055110
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_10055110(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined1 local_149;
  uint local_148;
  uint local_144;
  undefined1 local_140 [32];
  undefined1 local_120 [276];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10115cab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f280(param_1,param_2,0);
  local_4 = 0;
  cVar1 = FUN_1001f470(&local_148,0x20,1);
  if ((cVar1 == '\0') || (10000 < local_148)) {
    local_4 = 0xffffffff;
    FUN_1001f390();
    ExceptionList = local_c;
    return 0;
  }
  FUN_10029c60();
  uVar2 = 0;
  if (local_148 != 0) {
    do {
      uVar6 = 0;
      puVar5 = local_120;
      puVar3 = local_140;
      uVar4 = 0x20;
      FUN_100536f0(puVar3,0x20,puVar5,0);
      FUN_10053d90(puVar3,uVar4,puVar5,uVar6);
      FUN_1001f470(&local_149,8,1);
      FUN_10028a60(local_140,local_149);
      uVar2 = uVar2 + 1;
    } while (uVar2 < local_148);
  }
  cVar1 = FUN_1001f470(&local_144,0x20,1);
  if ((cVar1 != '\0') && (local_144 < 0x186a1)) {
    uVar2 = 0;
    if (local_144 != 0) {
      do {
        cVar1 = FUN_10054f70(local_120,param_3);
        if (cVar1 == '\0') goto LAB_10055249;
        uVar2 = uVar2 + 1;
      } while (uVar2 < local_144);
    }
    local_4 = 0xffffffff;
    FUN_1001f390();
    ExceptionList = local_c;
    return 1;
  }
LAB_10055249:
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return 0;
}


/* END FUNCTION 0x10055110 */
