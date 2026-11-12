/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10023410
 * Name: FUN_10023410
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_10023410(ushort param_1,uint param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  undefined1 local_1d;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  undefined1 local_10 [4];
  undefined1 local_c [2];
  undefined1 local_a [2];
  undefined1 local_8 [4];
  undefined1 local_4 [2];
  undefined1 local_2 [2];
  
  local_1d = 0;
  FUN_1001f530(&local_14,0x20,1);
  uVar1 = param_2;
  local_18 = 0;
  uVar3 = 0;
  if (local_14 != 0) {
    do {
      FUN_1001f470(local_8,0x20,1);
      FUN_1001f470(local_4,0x10,1);
      FUN_1001f470(local_2,8,1);
      FUN_1001f440();
      uVar3 = FUN_1001f470(&param_1,0x10,1);
      if ((char)uVar3 == '\0') {
LAB_100235b7:
        return uVar3 & 0xffffff00;
      }
      param_2 = 0;
      if (param_1 != 0) {
        do {
          FUN_1001f470(local_10,0x20,1);
          FUN_1001f470(local_c,0x10,1);
          FUN_1001f470(local_a,8,1);
          uVar3 = FUN_1001f470(&local_1c,0x10,1);
          if ((char)uVar3 == '\0') goto LAB_100235b7;
          cVar2 = FUN_10022280(local_a);
          if ((cVar2 != '\0') && (cVar2 = FUN_10022280(local_2), cVar2 != '\0')) {
            cVar2 = FUN_10022d90(local_8,local_10,uVar1);
            if (cVar2 != '\0') {
              FUN_10021400(local_8,local_10,local_1c,uVar1);
            }
            cVar2 = FUN_10022770(local_8,local_10);
            if (cVar2 == '\0') {
              local_1d = 1;
            }
            FUN_100232a0(local_8,local_10,local_1c);
          }
          param_2 = param_2 + 1;
        } while (param_2 < param_1);
      }
      uVar3 = local_18 + 1;
      local_18 = uVar3;
    } while (uVar3 < local_14);
  }
  return CONCAT31((int3)(uVar3 >> 8),local_1d);
}


/* END FUNCTION 0x10023410 */
