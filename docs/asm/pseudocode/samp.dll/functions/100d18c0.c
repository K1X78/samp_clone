/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d18c0
 * Name: FUN_100d18c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4
FUN_100d18c0(char *param_1,uint param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar5;
  char *local_18;
  char *local_14;
  char *local_10;
  char *local_c;
  char *local_8;
  char *local_4;
  char *pcVar4;
  
  pcVar2 = (char *)0x0;
  local_18 = (char *)0x0;
  local_c = (char *)0x0;
  local_4 = (char *)0x0;
  local_14 = (char *)0x0;
  if ((param_4 != (undefined4 *)0x0) &&
     (local_14 = _strchr(param_1,0x3a), param_1 + param_2 <= local_14)) {
    local_14 = (char *)0x0;
  }
  if ((param_5 != (undefined4 *)0x0) &&
     (pcVar2 = _strchr(param_1,0x3b), param_1 + param_2 <= pcVar2)) {
    pcVar2 = (char *)0x0;
  }
  if (local_14 == (char *)0x0) {
    uVar3 = param_2;
    if (pcVar2 != (char *)0x0) {
      uVar3 = (int)pcVar2 - (int)param_1;
    }
    local_10 = (char *)0x0;
  }
  else {
    pcVar4 = local_14;
    if ((pcVar2 != (char *)0x0) && (pcVar2 < local_14)) {
      pcVar4 = pcVar2;
    }
    uVar3 = (int)pcVar4 - (int)param_1;
    if ((pcVar2 == (char *)0x0) || (pcVar2 <= local_14)) {
      local_10 = param_1 + (param_2 - (int)local_14) + -1;
    }
    else {
      local_10 = pcVar2 + (-1 - (int)local_14);
    }
  }
  if (pcVar2 == (char *)0x0) {
    local_8 = (char *)0x0;
  }
  else if ((local_14 == (char *)0x0) || (local_14 <= pcVar2)) {
    local_8 = param_1 + (param_2 - (int)pcVar2) + -1;
  }
  else {
    local_8 = local_14 + (-1 - (int)pcVar2);
  }
  if (((param_3 == (undefined4 *)0x0) || (uVar3 == 0)) ||
     (local_18 = (char *)(*(code *)PTR__malloc_101554b8)(uVar3 + 1), local_18 != (char *)0x0)) {
    if (((param_4 != (undefined4 *)0x0) && (local_10 != (char *)0x0)) &&
       (local_c = (char *)(*(code *)PTR__malloc_101554b8)(local_10 + 1), local_c == (char *)0x0)) {
      (*(code *)PTR__free_101554bc)(local_18);
      return 0x1b;
    }
    if (((param_5 == (undefined4 *)0x0) || (local_8 == (char *)0x0)) ||
       (local_4 = (char *)(*(code *)PTR__malloc_101554b8)(local_8 + 1), local_4 != (char *)0x0)) {
      if (local_18 != (char *)0x0) {
        pcVar4 = local_18;
        for (uVar1 = uVar3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
          *(undefined4 *)pcVar4 = *(undefined4 *)param_1;
          param_1 = param_1 + 4;
          pcVar4 = pcVar4 + 4;
        }
        for (uVar1 = uVar3 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
          *pcVar4 = *param_1;
          param_1 = param_1 + 1;
          pcVar4 = pcVar4 + 1;
        }
        local_18[uVar3] = '\0';
        (*(code *)PTR__free_101554bc)(*param_3);
        *param_3 = local_18;
      }
      if (local_c != (char *)0x0) {
        pcVar4 = local_14 + 1;
        pcVar5 = local_c;
        for (uVar3 = (uint)local_10 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + 4;
          pcVar5 = pcVar5 + 4;
        }
        for (uVar3 = (uint)local_10 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *pcVar5 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          pcVar5 = pcVar5 + 1;
        }
        local_c[(int)local_10] = '\0';
        (*(code *)PTR__free_101554bc)(*param_4);
        *param_4 = local_c;
      }
      if (local_4 != (char *)0x0) {
        pcVar2 = pcVar2 + 1;
        pcVar4 = local_4;
        for (uVar3 = (uint)local_8 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
          pcVar2 = pcVar2 + 4;
          pcVar4 = pcVar4 + 4;
        }
        for (uVar3 = (uint)local_8 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *pcVar4 = *pcVar2;
          pcVar2 = pcVar2 + 1;
          pcVar4 = pcVar4 + 1;
        }
        local_4[(int)local_8] = '\0';
        (*(code *)PTR__free_101554bc)(*param_5);
        *param_5 = local_4;
      }
      return 0;
    }
    (*(code *)PTR__free_101554bc)(local_c);
    (*(code *)PTR__free_101554bc)(local_18);
  }
  return 0x1b;
}


/* END FUNCTION 0x100d18c0 */
