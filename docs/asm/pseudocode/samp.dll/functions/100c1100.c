/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c1100
 * Name: FUN_100c1100
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool FUN_100c1100(int param_1,uint param_2,undefined4 *param_3,uint *param_4,int param_5,
                 undefined4 *param_6)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint local_8;
  
  local_8 = *param_4;
  *param_4 = 0;
  FUN_100c0950();
  *param_6 = 0;
  iVar2 = *(int *)(param_1 + 0x48);
  do {
    if (iVar2 == 0x112) {
      if (*(int *)(param_1 + 0x20) == 0) {
        *param_6 = 1;
      }
      return *(int *)(param_1 + 0x20) != 0;
    }
    if (*(int *)(param_1 + 0x4c) != 0) {
      while ((local_8 != 0 && (*(uint *)(param_1 + 0x58) < 5))) {
        *(undefined1 *)(*(uint *)(param_1 + 0x58) + 0x5c + param_1) = *(undefined1 *)param_3;
        param_3 = (undefined4 *)((int)param_3 + 1);
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
        local_8 = local_8 - 1;
        *param_4 = *param_4 + 1;
      }
      if (*(uint *)(param_1 + 0x58) < 5) {
        *param_6 = 3;
        return false;
      }
      if (*(char *)(param_1 + 0x5c) != '\0') {
        return true;
      }
      *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
      *(uint *)(param_1 + 0x20) =
           CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(param_1 + 0x5d),
                                      *(undefined1 *)(param_1 + 0x5e)),
                             *(undefined1 *)(param_1 + 0x5f)),*(undefined1 *)(param_1 + 0x60));
      *(undefined4 *)(param_1 + 0x4c) = 0;
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    uVar5 = 0;
    bVar1 = false;
    if (param_2 <= *(uint *)(param_1 + 0x24)) {
      if ((*(int *)(param_1 + 0x48) == 0) && (*(int *)(param_1 + 0x20) == 0)) {
        *param_6 = 4;
        return false;
      }
      if (param_5 == 0) {
        *param_6 = 2;
        return false;
      }
      if (*(int *)(param_1 + 0x48) != 0) goto LAB_100c13d7;
      bVar1 = true;
    }
    if (*(int *)(param_1 + 0x50) != 0) {
      FUN_100c10b0();
    }
    uVar3 = *(uint *)(param_1 + 0x58);
    if (uVar3 == 0) {
      if ((local_8 < 0x14) || (bVar1)) {
        iVar2 = FUN_100c0a40(param_3);
        if (iVar2 == 0) {
          puVar6 = (undefined4 *)(param_1 + 0x5c);
          for (uVar5 = local_8 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar6 = *param_3;
            param_3 = param_3 + 1;
            puVar6 = puVar6 + 1;
          }
          for (uVar5 = local_8 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined1 *)puVar6 = *(undefined1 *)param_3;
            param_3 = (undefined4 *)((int)param_3 + 1);
            puVar6 = (undefined4 *)((int)puVar6 + 1);
          }
          *(uint *)(param_1 + 0x58) = local_8;
          *param_4 = *param_4 + local_8;
          *param_6 = 3;
          return false;
        }
        if ((bVar1) && (iVar2 != 2)) {
LAB_100c13d7:
          *param_6 = 2;
          return true;
        }
      }
      *(undefined4 **)(param_1 + 0x18) = param_3;
      iVar2 = FUN_100c09d0();
      if (iVar2 != 0) {
        return true;
      }
      iVar2 = *(int *)(param_1 + 0x18) - (int)param_3;
      *param_4 = *param_4 + iVar2;
    }
    else {
      for (; (uVar3 < 0x14 && (uVar5 < local_8)); uVar5 = uVar5 + 1) {
        *(undefined1 *)(uVar3 + 0x5c + param_1) = *(undefined1 *)(uVar5 + (int)param_3);
        uVar3 = uVar3 + 1;
      }
      *(uint *)(param_1 + 0x58) = uVar3;
      if ((uVar3 < 0x14) || (bVar1)) {
        iVar2 = FUN_100c0a40(param_1 + 0x5c);
        if (iVar2 == 0) {
          *param_4 = *param_4 + uVar5;
          *param_6 = 3;
          return false;
        }
        if ((bVar1) && (iVar2 != 2)) {
          *param_6 = 2;
          return true;
        }
      }
      *(int *)(param_1 + 0x18) = param_1 + 0x5c;
      iVar2 = FUN_100c09d0();
      if (iVar2 != 0) {
        return true;
      }
      uVar4 = (*(int *)(param_1 + 0x18) - param_1) - 0x5c;
      if ((uVar3 < uVar4) || (uVar3 = uVar3 - uVar4, uVar5 < uVar3)) {
        return (bool)0xb;
      }
      iVar2 = uVar5 - uVar3;
      *param_4 = *param_4 + iVar2;
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    param_3 = (undefined4 *)((int)param_3 + iVar2);
    local_8 = local_8 - iVar2;
    iVar2 = *(int *)(param_1 + 0x48);
  } while( true );
}


/* END FUNCTION 0x100c1100 */
