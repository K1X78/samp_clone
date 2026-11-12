/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a74d6
 * Name: ___libm_error_support
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
___libm_error_support(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 local_28;
  char *local_24;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined4 local_8;
  
  local_8 = DAT_004ec7b4;
  if (0xa1 < param_4) {
    if (param_4 < 0x3eb) {
      if (param_4 != 0x3ea) {
        if (param_4 == 0xa2) {
          local_28 = 4;
          goto LAB_004a7688;
        }
        if (param_4 == 0xa6) {
          local_28 = 3;
          local_24 = "exp10";
        }
        else {
          if (param_4 != 0xaa) {
            if (param_4 == 0xab) {
              local_24 = "log2";
              goto LAB_004a7721;
            }
            if (param_4 == 1000) {
              local_24 = "log";
            }
            else {
              if (param_4 != 0x3e9) {
                return;
              }
              local_24 = "log10";
            }
            goto LAB_004a7717;
          }
          local_28 = 2;
          local_24 = "log2";
        }
        goto LAB_004a768f;
      }
      local_24 = "exp";
    }
    else if (param_4 == 0x3eb) {
      local_24 = "atan";
    }
    else if (param_4 == 0x3ec) {
      local_24 = "ceil";
    }
    else if (param_4 == 0x3ed) {
      local_24 = "floor";
    }
    else {
      if (param_4 == 0x3ee) goto LAB_004a76ef;
      if (param_4 != 0x3ef) {
        return;
      }
      local_24 = "modf";
    }
LAB_004a7717:
    *param_3 = *param_1;
    goto LAB_004a7721;
  }
  if (param_4 == 0xa1) {
    local_28 = 3;
LAB_004a7688:
    local_24 = "exp2";
    goto LAB_004a768f;
  }
  if (param_4 < 0x19) {
    if (param_4 == 0x18) {
      local_28 = 3;
      goto LAB_004a7580;
    }
    if (param_4 == 2) {
      local_28 = 2;
      local_24 = "log";
    }
    else {
      if (param_4 == 3) {
        local_24 = "log";
LAB_004a7721:
        local_20 = *param_1;
        local_28 = 1;
        local_18 = *param_2;
        local_10 = *param_3;
        iVar1 = (*(code *)PTR_FUN_004ec660)(&local_28);
        if (iVar1 == 0) {
          piVar2 = FUN_004a5f9b();
          *piVar2 = 0x21;
        }
        goto LAB_004a7754;
      }
      if (param_4 == 8) {
        local_28 = 2;
        local_24 = "log10";
      }
      else {
        if (param_4 == 9) {
          local_24 = "log10";
          goto LAB_004a7721;
        }
        if (param_4 != 0xe) {
          if (param_4 != 0xf) {
            return;
          }
          local_24 = "exp";
          goto LAB_004a75cd;
        }
        local_28 = 3;
        local_24 = "exp";
      }
    }
  }
  else {
    if (param_4 == 0x19) {
      local_24 = "pow";
LAB_004a75cd:
      local_20 = *param_1;
      local_18 = *param_2;
      local_10 = *param_3;
      local_28 = 4;
      (*(code *)PTR_FUN_004ec660)(&local_28);
      goto LAB_004a7754;
    }
    if (param_4 == 0x1a) {
      *param_3 = 0x3ff0000000000000;
      return;
    }
    if (param_4 != 0x1b) {
      if (param_4 != 0x1c) {
        if (param_4 != 0x1d) {
          return;
        }
        local_24 = "pow";
        goto LAB_004a7717;
      }
LAB_004a76ef:
      local_24 = "pow";
      goto LAB_004a7721;
    }
    local_28 = 2;
LAB_004a7580:
    local_24 = "pow";
  }
LAB_004a768f:
  local_20 = *param_1;
  local_18 = *param_2;
  local_10 = *param_3;
  iVar1 = (*(code *)PTR_FUN_004ec660)(&local_28);
  if (iVar1 == 0) {
    piVar2 = FUN_004a5f9b();
    *piVar2 = 0x22;
  }
LAB_004a7754:
  *param_3 = local_10;
  return;
}


/* END FUNCTION 0x004a74d6 */
