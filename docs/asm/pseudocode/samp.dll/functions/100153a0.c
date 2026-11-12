/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100153a0
 * Name: FUN_100153a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100153a0(int param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [48];
  float local_10;
  float local_c;
  
  if ((*(int *)(param_1 + 4) != 0) && (*(int *)(param_1 + 8) != 0)) {
    FUN_1009e950(local_40);
    if (*(float *)(param_2 + 0x30) < local_10) {
      local_10 = local_10 - *(float *)(param_2 + 0x30);
    }
    else {
      local_10 = *(float *)(param_2 + 0x30) - local_10;
    }
    if (*(float *)(param_2 + 0x34) < local_c) {
      local_c = local_c - *(float *)(param_2 + 0x34);
    }
    else {
      local_c = *(float *)(param_2 + 0x34) - local_c;
    }
    if ((10.0 < local_c) || (10.0 < local_10)) {
      FUN_1009ee80(*(undefined4 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x34),
                   *(undefined4 *)(param_2 + 0x38));
    }
    FUN_1009eb20(&local_4c);
    local_4c = *param_3;
    local_48 = param_3[1];
    local_44 = param_3[2];
    FUN_1009eb50(local_4c,local_48,local_44);
    FUN_100b7440(param_4);
  }
  return;
}


/* END FUNCTION 0x100153a0 */
