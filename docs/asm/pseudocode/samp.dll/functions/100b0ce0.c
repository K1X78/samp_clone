/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b0ce0
 * Name: FUN_100b0ce0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_100b0ce0(int param_1,undefined4 *param_2)

{
  char cVar1;
  int local_50;
  undefined1 local_4c [12];
  undefined1 local_40 [12];
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_50 = 0;
  if (*(int *)(param_1 + 0x2a4) != 0) {
    if (*(char *)(param_1 + 0x2b0) == '\0') {
      cVar1 = FUN_1009c340();
    }
    else {
      cVar1 = FUN_1009c330(CONCAT31((int3)((uint)*(int *)(param_1 + 0x2a4) >> 8),
                                    *(char *)(param_1 + 0x2b0)));
    }
    if (((cVar1 == '5') || (cVar1 == '7')) || (cVar1 == 'A')) {
      FUN_100af870(local_40,local_4c);
      FUN_100b3710(local_40,local_4c,&local_34,&local_50,0,1,1,1,0,0,0,0);
      if (local_50 != 0) {
        *param_2 = local_34;
        param_2[1] = uStack_30;
        param_2[2] = uStack_2c;
      }
      return local_50;
    }
  }
  return 0;
}


/* END FUNCTION 0x100b0ce0 */
