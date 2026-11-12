/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c3b50
 * Name: FUN_100c3b50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_100c3b50(uint *param_1)

{
  int *piVar1;
  char *pcVar2;
  char *pcVar3;
  uint *puVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 *unaff_EBX;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint local_18;
  uint local_14;
  uint local_10;
  int *piStack_c;
  int *piStack_8;
  uint uStack_4;
  
  uVar7 = 0;
  if (unaff_EBX[0xc] == 0) {
    local_14 = FUN_100c2700(&local_18);
  }
  else {
    local_14 = unaff_EBX[8];
    local_18 = unaff_EBX[9];
  }
  uVar8 = local_18;
  local_10 = unaff_EBX[10];
  *param_1 = 0xffffffff;
  if (local_10 < 2) {
    return 1;
  }
  if (0x111 < local_10) {
    local_10 = 0x111;
  }
  pcVar2 = (char *)(*(code *)unaff_EBX[3])(*unaff_EBX);
  uVar10 = local_14;
  piStack_c = unaff_EBX + 0xd;
  pcVar3 = pcVar2 + -1;
  uStack_4 = 0;
  piStack_8 = (int *)0x0;
  do {
    pcVar5 = pcVar3 + -*piStack_c;
    if ((*pcVar3 == pcVar5[-1]) && (*pcVar2 == *pcVar5)) {
      uVar9 = 2;
      if (2 < local_10) {
        pcVar6 = pcVar2;
        do {
          pcVar6 = pcVar6 + 1;
          uVar8 = local_18;
          if (*pcVar6 != pcVar6[(int)(pcVar5 + -1) - (int)pcVar3]) break;
          uVar9 = uVar9 + 1;
        } while (uVar9 < local_10);
      }
      if ((uint)unaff_EBX[0xb] <= uVar9) {
        *param_1 = uVar7;
        FUN_100c26e0();
        return uVar9;
      }
      if (piStack_8 < uVar9) {
        piStack_8 = (int *)uVar9;
        uStack_4 = uVar7;
      }
    }
    piVar1 = piStack_8;
    uVar7 = uVar7 + 1;
    piStack_c = piStack_c + 1;
  } while (uVar7 < 4);
  if ((uint)unaff_EBX[0xb] <= local_14) {
    *param_1 = *(int *)((int)unaff_EBX + uVar8 * 4 + 0x30f25) + 4;
    FUN_100c26e0();
    return uVar10;
  }
  local_18 = 0;
  if (1 < local_14) {
    local_18 = *(uint *)((int)unaff_EBX + uVar8 * 4 + 0x30f25);
    if (2 < uVar8) {
      puVar4 = (uint *)((int)unaff_EBX + uVar8 * 4 + 0x30f1d);
      do {
        if ((local_14 != puVar4[-1] + 1) || (local_18 >> 7 <= *puVar4)) break;
        local_14 = puVar4[-1];
        local_18 = *puVar4;
        puVar4 = puVar4 + -2;
        uVar8 = uVar8 - 2;
      } while (2 < uVar8);
    }
    if ((local_14 == 2) && (0x7f < local_18)) {
      local_14 = 1;
    }
  }
  uVar7 = local_14;
  if ((1 < piStack_8) &&
     (((local_14 <= (int)piStack_8 + 1U || ((local_14 <= (int)piStack_8 + 2U && (0x1ff < local_18)))
       ) || ((local_14 <= (int)piStack_8 + 3U && (0x7fff < local_18)))))) {
    *param_1 = uStack_4;
    FUN_100c26e0();
    return (uint)piVar1;
  }
  if ((1 < local_14) && (2 < local_10)) {
    uVar8 = FUN_100c2700(unaff_EBX + 9);
    unaff_EBX[8] = uVar8;
    if ((uVar8 < 2) ||
       (((((uVar10 = *(uint *)((int)unaff_EBX + unaff_EBX[9] * 4 + 0x30f25), uVar8 < uVar7 ||
           (local_18 <= uVar10)) && ((uVar8 != uVar7 + 1 || (local_18 < uVar10 >> 7)))) &&
         (uVar8 <= uVar7 + 1)) &&
        (((uVar8 + 1 < uVar7 || (uVar7 < 3)) || (local_18 >> 7 <= uVar10)))))) {
      pcVar2 = (char *)(*(code *)unaff_EBX[3])(*unaff_EBX);
      uVar7 = local_14;
      piStack_8 = unaff_EBX + 0xd;
      pcVar3 = pcVar2 + -1;
      uStack_4 = 0;
      do {
        pcVar5 = pcVar3 + -*piStack_8;
        if ((*pcVar3 == pcVar5[-1]) && (*pcVar2 == *pcVar5)) {
          uVar8 = local_14 - 1;
          if (uVar8 < 3) {
            return 1;
          }
          uVar10 = 2;
          pcVar6 = pcVar2;
          while (pcVar6 = pcVar6 + 1, *pcVar6 == pcVar6[(int)(pcVar5 + -1) - (int)pcVar3]) {
            uVar10 = uVar10 + 1;
            if (uVar8 <= uVar10) {
              return 1;
            }
          }
          if (uVar8 <= uVar10) {
            return 1;
          }
        }
        uStack_4 = uStack_4 + 1;
        piStack_8 = piStack_8 + 1;
        if (3 < uStack_4) {
          *param_1 = local_18 + 4;
          FUN_100c26e0();
          return uVar7;
        }
      } while( true );
    }
  }
  return 1;
}


/* END FUNCTION 0x100c3b50 */
