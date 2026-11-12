/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x101109e0
 * Name: FUN_101109e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_101109e0(char *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int local_38;
  char *local_34;
  char *local_10;
  int local_c;
  int local_8;
  
  local_34 = param_1;
  local_c = 0;
  pcVar2 = local_34;
  while (local_34 = pcVar2, local_c < 5) {
    cVar1 = *local_34;
    pcVar2 = (char *)FUN_10111c60(0,local_34,0);
    local_c = (int)pcVar2 - (int)param_1;
    if ((((((cVar1 == -0x17) || (cVar1 == -0x20)) || (cVar1 == -0x3e)) || (cVar1 == -0x3d)) ||
        ((cVar1 == -1 && (local_34[1] == '%')))) ||
       ((((cVar1 == '&' || ((cVar1 == '.' || (cVar1 == '6')))) ||
         ((cVar1 == '>' || ((cVar1 == 'd' || (cVar1 == 'e')))))) &&
        ((local_34[1] == -1 && (local_34[2] == '%')))))) break;
  }
  if (local_c < 5) {
    uVar3 = 0;
  }
  else if (local_c < 0x1b) {
    FUN_10110870(param_2,0x20);
    FUN_10110870(param_1,local_c);
    iVar4 = FUN_10110c90(0x40);
    if (iVar4 == 0) {
      FUN_101108f0();
      FUN_101108f0();
      uVar3 = 0;
    }
    else {
      iVar4 = FUN_10110cd0();
      if (iVar4 == 0) {
        FUN_101108f0();
        FUN_101108f0();
        uVar3 = 0;
      }
      else {
        local_10 = param_1;
        local_8 = param_2;
        local_38 = 0;
        while (local_38 < local_c) {
          local_10 = (char *)FUN_10111c60(local_8,local_10,0);
          local_38 = (int)local_10 - (int)param_1;
          local_8 = param_2 + local_38;
        }
        if (local_38 == local_c) {
          iVar4 = FUN_10110d10(local_8,param_1 + local_c,5);
          if (iVar4 == 0) {
            FUN_101108f0();
            FUN_101108f0();
            uVar3 = 0;
          }
          else {
            *(undefined1 *)(param_2 + 0x1f) = (undefined1)local_c;
            iVar4 = FUN_10110d10(param_1,param_3,local_c);
            if (iVar4 == 0) {
              FUN_101108f0();
              FUN_101108f0();
              uVar3 = 0;
            }
            else {
              FUN_101108f0();
              FUN_101108f0();
              uVar3 = 1;
            }
          }
        }
        else {
          FUN_101108f0();
          FUN_101108f0();
          uVar3 = 0;
        }
      }
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


/* END FUNCTION 0x101109e0 */
