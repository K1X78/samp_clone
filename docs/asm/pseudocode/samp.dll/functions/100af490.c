/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100af490
 * Name: FUN_100af490
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_100af490(int param_1,undefined4 *param_2)

{
  char cVar1;
  float *pfVar2;
  int local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_40 [64];
  
  local_9c = 0;
  if (*(int *)(param_1 + 0x2a4) != 0) {
    if (*(char *)(param_1 + 0x2b0) == '\0') {
      cVar1 = FUN_1009c340();
    }
    else {
      cVar1 = FUN_1009c330(CONCAT31((int3)((uint)*(int *)(param_1 + 0x2a4) >> 8),
                                    *(char *)(param_1 + 0x2b0)));
    }
    if (cVar1 == '\x04') {
      FUN_1009e950(local_40);
      pfVar2 = (float *)FUN_1009c400();
      FUN_100ae080(8,&local_98);
      local_80 = *pfVar2 * 0.2 + local_98;
      local_7c = pfVar2[1] * 0.2 + local_94;
      local_78 = pfVar2[2] * 0.2 + local_90;
      local_8c = *pfVar2 * 50.0 + local_98;
      local_88 = pfVar2[1] * 50.0 + local_94;
      local_84 = pfVar2[2] * 50.0 + local_90;
      FUN_100b3710(&local_80,&local_8c,&local_74,&local_9c,1,1,1,1,0,1,0,1);
      if (local_9c != 0) {
        *param_2 = local_74;
        param_2[1] = uStack_70;
        param_2[2] = uStack_6c;
      }
      return local_9c;
    }
  }
  return 0;
}


/* END FUNCTION 0x100af490 */
