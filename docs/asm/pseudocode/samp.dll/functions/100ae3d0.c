/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ae3d0
 * Name: FUN_100ae3d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Removing unreachable block (ram,0x100ae41f) */

void __thiscall FUN_100ae3d0(int param_1,uint param_2)

{
  char cVar1;
  int *piVar2;
  byte bVar3;
  byte bVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  bool bVar9;
  char local_40 [32];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  piVar2 = *(int **)(param_1 + 0x2a4);
  if (((piVar2 != (int *)0x0) && (*piVar2 != 0x863c40)) && (piVar2[6] != 0)) {
    uVar8 = 0;
    bVar3 = (byte)(param_2 >> 0x18);
    bVar4 = bVar3 >> 4 & 3;
    if (bVar4 == 2) {
      uVar8 = 1;
    }
    else if (bVar4 == 1) {
      uVar8 = 0xffffffff;
    }
    else if (bVar4 == 0) {
      uVar8 = 0;
    }
    pcVar5 = (char *)FUN_1009c950(param_2);
    local_40[0] = '\0';
    local_40[1] = '\0';
    local_40[2] = '\0';
    local_40[3] = '\0';
    local_20 = 0;
    local_40[4] = '\0';
    local_40[5] = '\0';
    local_40[6] = '\0';
    local_40[7] = '\0';
    local_1c = 0;
    local_40[8] = '\0';
    local_40[9] = '\0';
    local_40[10] = '\0';
    local_40[0xb] = '\0';
    local_18 = 0;
    local_40[0xc] = '\0';
    local_40[0xd] = '\0';
    local_40[0xe] = '\0';
    local_40[0xf] = '\0';
    local_14 = 0;
    local_40[0x10] = '\0';
    local_40[0x11] = '\0';
    local_40[0x12] = '\0';
    local_40[0x13] = '\0';
    local_10 = 0;
    local_40[0x14] = '\0';
    local_40[0x15] = '\0';
    local_40[0x16] = '\0';
    local_40[0x17] = '\0';
    local_c = 0;
    local_40[0x18] = '\0';
    local_40[0x19] = '\0';
    local_40[0x1a] = '\0';
    local_40[0x1b] = '\0';
    local_8 = 0;
    local_40[0x1c] = '\0';
    local_40[0x1d] = '\0';
    local_40[0x1e] = '\0';
    local_40[0x1f] = '\0';
    local_4 = 0;
    if ((pcVar5 != (char *)0x0) && (pcVar6 = _strchr(pcVar5,0x3a), pcVar6 != (char *)0x0)) {
      _strncpy(local_40,pcVar5,(int)pcVar6 - (int)pcVar5);
      pcVar6 = pcVar6 + 1;
      iVar7 = (int)&local_20 - (int)pcVar6;
      do {
        cVar1 = *pcVar6;
        pcVar6[iVar7] = cVar1;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      FUN_100ace50(&local_20,local_40,(float)(param_2 >> 0x10 & 0xff),bVar3 & 1,bVar3 >> 1 & 1,
                   bVar3 >> 2 & 1,bVar3 >> 3 & 1,uVar8);
    }
    iVar7 = 10;
    bVar9 = true;
    pcVar5 = local_40;
    pcVar6 = "PARACHUTE";
    do {
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      bVar9 = *pcVar5 == *pcVar6;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    } while (bVar9);
    if (bVar9) {
      FUN_100ad240(&local_20);
    }
  }
  return;
}


/* END FUNCTION 0x100ae3d0 */
