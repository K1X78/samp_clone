/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100cea50
 * Name: FUN_100cea50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100cea50(int *param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int local_14;
  int *local_10;
  uint local_c;
  byte *local_8;
  
  piVar2 = param_1;
  iVar1 = *param_1;
  if ((param_1[0x3c] == 2) && (param_1[param_4 + 0xc1] == 0)) {
    local_10 = param_1 + 0x94;
    local_14 = param_1[0x3f];
    param_1 = (int *)param_1[0x39];
  }
  else {
    local_10 = param_1 + 0x88;
    local_14 = param_1[0x40];
    param_1 = (int *)param_1[0x28];
  }
  iVar4 = 0;
  *param_2 = 0;
  if ((piVar2[0x3c] == 2) && (piVar2[(uint)(piVar2[0x67] != -1) * 4 + 0x81] != 2)) {
    iVar3 = *(int *)(iVar1 + 0x470);
  }
  else {
    iVar3 = *(int *)(iVar1 + 0x408);
  }
  if (iVar3 == 0) {
    return 1;
  }
  local_8 = *(byte **)(iVar1 + 0x6c);
  if ((local_8 == (byte *)0x0) || ((*local_8 & 0x10) == 0)) {
    local_8 = (byte *)(iVar1 + 0x4878);
  }
  else {
    local_8 = local_8 + 100;
  }
  local_c = 0;
  if (*(int *)(iVar1 + 0x4c4) == 0) {
    return 1;
  }
  do {
    puVar5 = (undefined4 *)(*(int *)(iVar1 + 0x4874) + iVar4);
    if ((*(int *)(*(int *)(iVar1 + 0x4874) + 0xc + iVar4) != 0) &&
       (iVar3 = FUN_100de830(param_1,*puVar5), iVar3 != 0)) {
      if (piVar2[0xa3] == 0) {
        if (puVar5[1] == 0) {
LAB_100ceb9c:
          if (piVar2[0xa4] == 0) {
            if (puVar5[7] == -1) {
LAB_100cebc0:
              if (((local_14 == puVar5[6]) &&
                  (iVar3 = FUN_100de830(*(undefined4 *)piVar2[200],puVar5[2]), iVar3 != 0)) &&
                 (iVar3 = FUN_100ce5a0(local_10,puVar5 + 8), iVar3 != 0)) {
                iVar1 = *(int *)local_8;
                *(int *)local_8 = iVar1 + 1;
                puVar5[5] = iVar1 + 1;
                *param_2 = puVar5[3];
                if (param_3 != (undefined4 *)0x0) {
                  *param_3 = puVar5[4];
                }
                return 0;
              }
            }
          }
          else if ((puVar5[7] != -1) && (piVar2[0x41] == puVar5[7])) goto LAB_100cebc0;
        }
      }
      else if ((puVar5[1] != 0) && (iVar3 = FUN_100de830(piVar2[0x2d],puVar5[1]), iVar3 != 0))
      goto LAB_100ceb9c;
    }
    local_c = local_c + 1;
    iVar4 = iVar4 + 0x50;
    if (*(uint *)(iVar1 + 0x4c4) <= local_c) {
      return 1;
    }
  } while( true );
}


/* END FUNCTION 0x100cea50 */
