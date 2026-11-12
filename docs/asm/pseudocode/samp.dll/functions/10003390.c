/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10003390
 * Name: FUN_10003390
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


byte __fastcall FUN_10003390(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_100ac9e0();
  if (iVar1 != 0) {
    return 2;
  }
  iVar1 = FUN_100ad760();
  if (iVar1 != 0) {
    switch(*(undefined4 *)(*param_1 + 0x2d6)) {
    case 0:
      return 5;
    case 1:
      return 6;
    case 2:
      return 7;
    case 3:
      return 8;
    }
  }
  iVar1 = FUN_100ac780();
  if (iVar1 != 0) {
    return 10;
  }
  iVar1 = FUN_100adca0();
  if (iVar1 != 0) {
    return 0xb;
  }
  iVar1 = FUN_100ade60();
  if (iVar1 != 0) {
    return 0x44;
  }
  iVar1 = FUN_100ac2b0();
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = FUN_100ac1f0();
  if (iVar1 != 0) {
    return 3;
  }
  iVar1 = FUN_100ac260();
  if (iVar1 != 0) {
    return 4;
  }
  iVar1 = FUN_100ad890();
  if (iVar1 != 0) {
    iVar1 = FUN_100ad890();
    if (iVar1 == 1) {
      return 0x14;
    }
    iVar1 = FUN_100ad890();
    if (iVar1 == 2) {
      return 0x16;
    }
    iVar1 = FUN_100ad890();
    if (iVar1 == 3) {
      return 0x17;
    }
    iVar1 = FUN_100ad890();
    if (iVar1 == 4) {
      return 0x15;
    }
  }
  iVar1 = FUN_100acb10();
  if (iVar1 == 0) {
    iVar1 = FUN_100aca60();
    return -(iVar1 != 0) & 0x19;
  }
  return 0x18;
}


/* END FUNCTION 0x10003390 */
