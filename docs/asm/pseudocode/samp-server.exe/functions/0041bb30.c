/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041bb30
 * Name: FUN_0041bb30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl
FUN_0041bb30(int *param_1,int param_2,int param_3,int *param_4,undefined4 *param_5)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 *local_c;
  
  iVar1 = *(int *)(param_3 + 0x14);
  pbVar2 = *(byte **)(param_3 + 0x28);
  local_c = (undefined4 *)0x0;
  if (iVar1 == 1) {
    if (-1 < *(int *)(param_2 + 8)) {
      if (pbVar2 == (byte *)0x0) {
        return 0;
      }
      iVar4 = FUN_00408450(*(byte **)(*(int *)(param_2 + 0x10) + *(int *)(param_2 + 8) * 0x18),
                           pbVar2);
      if (iVar4 == 0) {
        return 0;
      }
    }
  }
  else if (param_5 != (undefined4 *)0x0) {
    local_c = FUN_00412930(iVar1 * 4);
    if (local_c == (undefined4 *)0x0) {
      return 1;
    }
    *param_5 = local_c;
  }
  iVar4 = *(int *)(param_2 + 0x14);
  do {
    if (iVar4 == 0) {
      if (*(char *)((int)param_1 + 0x1ba) == '\0') {
        FUN_00418b00((undefined **)"foreign key mismatch");
      }
      FUN_00408130(*param_1);
      return 1;
    }
    if ((*(int *)(iVar4 + 4) == iVar1) && (*(char *)(iVar4 + 0x18) != '\0')) {
      if (pbVar2 == (byte *)0x0) {
        if (*(char *)(iVar4 + 0x19) == '\x02') {
          if ((local_c != (undefined4 *)0x0) && (iVar5 = 0, 0 < iVar1)) {
            puVar8 = (undefined4 *)(param_3 + 0x24);
            do {
              local_c[iVar5] = *puVar8;
              iVar5 = iVar5 + 1;
              puVar8 = puVar8 + 2;
            } while (iVar5 < iVar1);
          }
LAB_0041bc3d:
          *param_4 = iVar4;
          return 0;
        }
      }
      else {
        iVar5 = 0;
        if (0 < iVar1) {
          while( true ) {
            puVar8 = (undefined4 *)
                     (*(int *)(param_2 + 0x10) + *(int *)(*(int *)(iVar4 + 8) + iVar5 * 4) * 0x18);
            pcVar9 = (char *)puVar8[4];
            if ((byte *)pcVar9 == (byte *)0x0) {
              pcVar9 = "BINARY";
            }
            iVar6 = FUN_00408450(*(byte **)(*(int *)(iVar4 + 0x2c) + iVar5 * 4),(byte *)pcVar9);
            if (iVar6 != 0) break;
            pbVar3 = (byte *)*puVar8;
            iVar6 = 0;
            puVar8 = (undefined4 *)(param_3 + 0x28);
            do {
              iVar7 = FUN_00408450((byte *)*puVar8,pbVar3);
              if (iVar7 == 0) {
                if (local_c != (undefined4 *)0x0) {
                  local_c[iVar5] = *(undefined4 *)(param_3 + 0x24 + iVar6 * 8);
                }
                break;
              }
              iVar6 = iVar6 + 1;
              puVar8 = puVar8 + 2;
            } while (iVar6 < iVar1);
            if ((iVar6 == iVar1) || (iVar5 = iVar5 + 1, iVar1 <= iVar5)) break;
          }
        }
        if (iVar5 == iVar1) goto LAB_0041bc3d;
      }
    }
    iVar4 = *(int *)(iVar4 + 0x20);
  } while( true );
}


/* END FUNCTION 0x0041bb30 */
