/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10003110
 * Name: FUN_10003110
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10003110(undefined1 param_1)

{
  int iVar1;
  
  switch(param_1) {
  case 0:
    iVar1 = FUN_100ad760();
    if (iVar1 != 0) {
      FUN_100ad720();
    }
    iVar1 = FUN_100adca0();
    if (iVar1 != 0) {
      FUN_100adc70(0);
    }
    iVar1 = FUN_100ade60();
    if (iVar1 != 0) {
      FUN_100adde0();
    }
    iVar1 = FUN_100ad890();
    if (iVar1 != 0) {
      FUN_100ad800();
    }
    iVar1 = FUN_100ac9e0();
    if (iVar1 != 0) {
      FUN_100ac980();
    }
    iVar1 = FUN_100acb10();
    if (iVar1 != 0) {
      FUN_100acb20(0);
    }
    iVar1 = FUN_100aca60();
    if (iVar1 != 0) {
      FUN_100aca70(0);
      return;
    }
    break;
  case 2:
    iVar1 = FUN_100ac9e0();
    if (iVar1 == 0) {
      FUN_100ac930();
      return;
    }
    break;
  case 5:
    FUN_100ad6d0(0);
    return;
  case 6:
    FUN_100ad6d0(1);
    return;
  case 7:
    FUN_100ad6d0(2);
    return;
  case 8:
    FUN_100ad6d0(3);
    return;
  case 10:
    FUN_100ac730();
    return;
  case 0xb:
    iVar1 = FUN_100aba90();
    if (iVar1 == 0) {
      FUN_100adc70(1);
      return;
    }
    break;
  case 0xd:
    iVar1 = FUN_100adca0();
    if (iVar1 != 0) {
      FUN_100adc70(0);
      return;
    }
    break;
  case 0x14:
    iVar1 = FUN_100aba90();
    if (iVar1 == 0) {
      FUN_100afed0(1);
      return;
    }
    break;
  case 0x15:
    iVar1 = FUN_100aba90();
    if (iVar1 == 0) {
      FUN_100afed0(4);
      return;
    }
    break;
  case 0x16:
    iVar1 = FUN_100aba90();
    if (iVar1 == 0) {
      FUN_100afed0(2);
      return;
    }
    break;
  case 0x17:
    iVar1 = FUN_100aba90();
    if (iVar1 == 0) {
      FUN_100afed0(3);
      return;
    }
    break;
  case 0x18:
    iVar1 = FUN_100acb10();
    if (iVar1 == 0) {
      FUN_100acb20(1);
      return;
    }
    break;
  case 0x19:
    iVar1 = FUN_100aca60();
    if (iVar1 == 0) {
      FUN_100aca70(1);
    }
    break;
  case 0x44:
    iVar1 = FUN_100aba90();
    if (iVar1 == 0) {
      FUN_100add00();
      return;
    }
  }
  return;
}


/* END FUNCTION 0x10003110 */
