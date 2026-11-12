/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00422ea0
 * Name: FUN_00422ea0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl
FUN_00422ea0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 unaff_EDI;
  
  if (DAT_004ca1e0 != 0) {
    uVar1 = FUN_0041d7c0();
    return uVar1;
  }
  switch(param_1) {
  case 1:
    DAT_004ca12c = 0;
    DAT_004ca130 = 0;
    return 0;
  case 2:
    DAT_004ca130 = 0;
    DAT_004ca12c = 1;
    return 0;
  case 3:
    DAT_004ca12c = 1;
    DAT_004ca130 = 1;
    return 0;
  case 4:
    puVar3 = &DAT_004ca140;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *param_2;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
    }
    return 0;
  case 5:
    if (DAT_004ca140 == 0) {
      FUN_0041d920(unaff_EDI);
    }
    puVar3 = &DAT_004ca140;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_2 = *puVar3;
      puVar3 = puVar3 + 1;
      param_2 = param_2 + 1;
    }
    return 0;
  case 6:
    DAT_004ca1c8 = param_4;
    DAT_004ca1c0 = param_2;
    DAT_004ca1c4 = param_3;
    return 0;
  case 7:
    DAT_004ca1d4 = param_4;
    DAT_004ca1cc = param_2;
    DAT_004ca1d0 = param_3;
    return 0;
  default:
    return 1;
  case 9:
    DAT_004ca128 = param_2;
    return 0;
  case 10:
    puVar3 = &DAT_004ca160;
    break;
  case 0xb:
    puVar3 = &DAT_004ca160;
    for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_2 = *puVar3;
      puVar3 = puVar3 + 1;
      param_2 = param_2 + 1;
    }
    return 0;
  case 0xd:
    DAT_004ca138 = param_2;
    DAT_004ca13c = param_3;
    return 0;
  case 0xe:
    puVar3 = &DAT_004ca184;
    for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *param_2;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
    }
    return 0;
  case 0xf:
    if (DAT_004ca188 == 0) {
      FUN_00423240();
    }
    puVar3 = &DAT_004ca184;
    for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_2 = *puVar3;
      puVar3 = puVar3 + 1;
      param_2 = param_2 + 1;
    }
    return 0;
  case 0x10:
    DAT_004ca1fc = param_2;
    DAT_004ca200 = param_3;
    return 0;
  }
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0;
}


/* END FUNCTION 0x00422ea0 */
