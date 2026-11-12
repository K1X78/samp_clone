/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1002b0f0
 * Name: FUN_1002b0f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_1002b0f0(undefined4 param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char local_21a;
  char local_219;
  uint local_218;
  char *local_214;
  void *local_210;
  uint local_20c;
  uint local_208;
  undefined1 local_204 [4];
  char local_200 [512];
  
  cVar1 = FUN_1001f530(&local_218,0x20,1);
  if ((cVar1 == '\0') || (10000 < local_218)) {
    return 0;
  }
  FUN_1002af90();
  uVar4 = 0;
  if (local_218 != 0) {
    do {
      FUN_1001f530(local_204,8,1);
      uVar7 = 0;
      pcVar2 = local_200;
      uVar5 = 0x200;
      uVar6 = param_1;
      FUN_100536f0(pcVar2,0x200,param_1,0);
      FUN_10053d90(pcVar2,uVar5,uVar6,uVar7);
      FUN_10008110(&local_21a);
      if (local_21a == '\0') {
        local_20c = 0;
        local_210 = (void *)0x0;
      }
      else {
        FUN_1001f530(&local_20c,0x20,1);
        if (200000000 < local_20c) {
          return 0;
        }
        local_210 = operator_new(local_20c);
        FUN_1001f960(local_210,local_20c);
      }
      cVar1 = FUN_10008110(&local_219);
      if (local_219 == '\0') {
        cVar1 = FUN_1001f530(&local_208,0x20,1);
      }
      else {
        local_208 = local_20c;
      }
      if (cVar1 == '\0') {
        FUN_1002af90();
        return 0;
      }
      pcVar2 = local_200;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      local_214 = operator_new((uint)(pcVar2 + (1 - (int)(local_200 + 1))));
      pcVar2 = local_200;
      pcVar3 = local_214;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
        *pcVar3 = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      FUN_1002acc0(local_214,local_210,local_20c,local_208,local_204[0]);
      uVar4 = uVar4 + 1;
    } while (uVar4 < local_218);
  }
  return 1;
}


/* END FUNCTION 0x1002b0f0 */
