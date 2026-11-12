/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10021f10
 * Name: FUN_10021f10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_10021f10(undefined4 param_1,ushort param_2)

{
  char cVar1;
  uint uVar2;
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  FUN_1001f470(&param_2,0x10,1);
  uVar2 = 0;
  if (param_2 != 0) {
    do {
      FUN_1001f470(local_8,0x20,1);
      cVar1 = FUN_1001f470(local_4,0x10,1);
      if (cVar1 == '\0') {
        return 0;
      }
      FUN_10021630(local_8,local_8);
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_2);
  }
  return 1;
}


/* END FUNCTION 0x10021f10 */
