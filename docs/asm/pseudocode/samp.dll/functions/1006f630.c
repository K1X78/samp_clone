/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006f630
 * Name: FUN_1006f630
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_1006f630(int param_1,char *param_2,int *param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int local_120;
  int local_11c;
  int local_118;
  char local_110 [268];
  
  FUN_1008c270();
  *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x4d) = 0;
  local_118 = 0;
  local_120 = 0;
  local_11c = 0;
  while ((param_2 != (char *)0x0 && (*param_2 != '\0'))) {
    pcVar2 = local_110;
    for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
      pcVar2[0] = '\0';
      pcVar2[1] = '\0';
      pcVar2[2] = '\0';
      pcVar2[3] = '\0';
      pcVar2 = pcVar2 + 4;
    }
    param_2 = (char *)FUN_1006f260(param_2,local_110,0x100);
    pcVar2 = local_110;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    if (pcVar2 != local_110 + 1) {
      iVar3 = FUN_1006f120(local_110);
      if (local_120 < iVar3) {
        local_120 = iVar3;
      }
      iVar3 = FUN_1006f1e0();
      local_11c = local_11c + iVar3;
      FUN_1008a270(local_110,local_118,0xffffffff);
      local_118 = local_118 + 1;
    }
    if (param_2 == (char *)0x0) break;
    if (*param_2 == '\n') {
      param_2 = param_2 + 1;
    }
  }
  if (param_3 != (int *)0x0) {
    *param_3 = local_120 + 0x14;
    param_3[1] = local_11c;
  }
  return 1;
}


/* END FUNCTION 0x1006f630 */
