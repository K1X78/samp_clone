/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10054a70
 * Name: FUN_10054a70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_10054a70(ushort param_1)

{
  char cVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined4 local_8;
  undefined2 local_4 [2];
  
  cVar1 = FUN_1001f470(&param_1,0x10,1);
  if (cVar1 == '\0') {
    return 0;
  }
  FUN_100209c0(0);
  uVar2 = 0;
  if (param_1 != 0) {
    do {
      FUN_1001f470(&local_8,0x20,1);
      uVar3 = 0;
      cVar1 = FUN_1001f470(local_4,0x10,1);
      if (cVar1 == '\0') {
        FUN_100209c0(0);
        return 0;
      }
      FUN_10020700(local_8,CONCAT22(uVar3,local_4[0]));
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_1);
  }
  return 1;
}


/* END FUNCTION 0x10054a70 */
