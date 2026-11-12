/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10094b60
 * Name: FUN_10094b60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10094b60(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50 [19];
  
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  switch(param_2) {
  case 0:
    local_68 = 0x3f800000;
    local_6c = 0;
    break;
  case 1:
    local_60 = 0;
    local_68 = 0xbf800000;
    local_6c = local_60;
    break;
  case 2:
    local_74 = 0;
    local_6c = 0;
    local_70 = 0x3f800000;
    local_64 = 0;
    local_60 = 0xbf800000;
    goto LAB_10094c51;
  case 3:
    local_74 = 0;
    local_6c = 0;
    local_70 = 0xbf800000;
    local_64 = 0;
    local_60 = 0x3f800000;
    goto LAB_10094c51;
  case 4:
    local_60 = 0x3f800000;
    goto LAB_10094c2d;
  case 5:
    local_60 = 0xbf800000;
LAB_10094c2d:
    local_68 = 0;
    local_6c = local_60;
    break;
  default:
    goto switchD_10094b89_default;
  }
  local_70 = 0;
  local_64 = 0x3f800000;
  local_60 = 0;
  local_74 = local_68;
LAB_10094c51:
  local_68 = 0;
  local_80 = 0;
  local_7c = local_64;
  local_78 = local_60;
switchD_10094b89_default:
  D3DXMatrixLookAtLH(local_50,&local_5c,&local_74,&local_80);
  puVar2 = local_50;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


/* END FUNCTION 0x10094b60 */
