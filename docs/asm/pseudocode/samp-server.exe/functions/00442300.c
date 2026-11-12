/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00442300
 * Name: FUN_00442300
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00442300(int *param_1,short *param_2,int param_3)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *local_c;
  
  iVar1 = *param_1;
  uVar5 = 0;
  local_c = (undefined4 *)0x0;
  if ((*(char *)(iVar1 + 0x1e) == '\0') && (uVar3 = FUN_00442130(), uVar3 == 0)) {
    pbVar2 = *(byte **)(param_2 + 4);
    FUN_00408380(*(char **)(param_2 + 6));
    if (0 < *(int *)(iVar1 + 4)) {
      do {
        uVar3 = uVar5;
        if ((int)uVar5 < 2) {
          uVar3 = uVar5 ^ 1;
        }
        if (((pbVar2 == (byte *)0x0) ||
            (iVar4 = FUN_00408450(*(byte **)(uVar3 * 0x10 + *(int *)(iVar1 + 8)),pbVar2), iVar4 == 0
            )) && (local_c = (undefined4 *)FUN_00409170(), local_c != (undefined4 *)0x0))
        goto LAB_004423d0;
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < *(int *)(iVar1 + 4));
      if (local_c != (undefined4 *)0x0) {
LAB_004423d0:
        FUN_0042d0c0(local_c);
        goto LAB_004423de;
      }
    }
    if (param_3 == 0) {
      FUN_00418b00((undefined **)"no such trigger: %S");
    }
    *(undefined1 *)((int)param_1 + 0x12) = 1;
  }
LAB_004423de:
  FUN_0040f240(param_2);
  return;
}


/* END FUNCTION 0x00442300 */
