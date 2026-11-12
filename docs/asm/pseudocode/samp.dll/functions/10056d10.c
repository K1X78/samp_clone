/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10056d10
 * Name: FUN_10056d10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void * __fastcall FUN_10056d10(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined1 local_8;
  undefined1 local_7;
  int local_4;
  
  if ((*(int *)(param_1 + 4) != 0) && (iVar3 = FUN_10055c60(), iVar3 != 0)) {
    bVar1 = **(byte **)(iVar3 + 0x10);
    local_4 = iVar3;
    if ((bVar1 < 0x7f) && ((bVar1 != 9 && (bVar1 != 0x1b)))) {
      iVar9 = 0;
      uVar8 = 0;
      if (*(int *)(param_1 + 0xc) != 0) {
        do {
          cVar2 = FUN_100331a0(iVar3 + 2);
          if (cVar2 != '\0') {
            iVar9 = *(int *)(*(int *)(param_1 + 8) + uVar8 * 4);
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(uint *)(param_1 + 0xc));
        if (iVar9 != 0) {
          FUN_10055bf0(*(undefined4 *)(iVar3 + 0x10),*(undefined4 *)(iVar3 + 8),
                       *(undefined4 *)(iVar3 + 2),*(undefined2 *)(iVar3 + 6));
          uVar8 = 0;
          if (*(int *)(iVar3 + 8) != 0) {
            do {
              if (*(char *)(uVar8 + *(int *)(iVar3 + 0x10)) == '\b') {
                local_8 = 0x20;
                local_7 = 8;
                FUN_10055bf0(&local_8,2,*(undefined4 *)(iVar3 + 2),*(undefined2 *)(iVar3 + 6));
              }
              cVar2 = FUN_10056af0(iVar9,*(undefined1 *)(*(int *)(iVar3 + 0x10) + uVar8));
              if ((cVar2 != '\0') && (*(char *)(iVar9 + 6) != '\0')) {
                pvVar4 = operator_new(0x15);
                pcVar5 = (char *)(iVar9 + 6);
                do {
                  cVar2 = *pcVar5;
                  pcVar5 = pcVar5 + 1;
                } while (cVar2 != '\0');
                iVar3 = (int)pcVar5 - (iVar9 + 7);
                *(int *)((int)pvVar4 + 8) = iVar3;
                pcVar6 = operator_new(iVar3 + 1);
                uVar8 = *(uint *)((int)pvVar4 + 8);
                *(char **)((int)pvVar4 + 0x10) = pcVar6;
                pcVar5 = (char *)(iVar9 + 6);
                for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                  *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
                  pcVar5 = pcVar5 + 4;
                  pcVar6 = pcVar6 + 4;
                }
                for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                  *pcVar6 = *pcVar5;
                  pcVar5 = pcVar5 + 1;
                  pcVar6 = pcVar6 + 1;
                }
                *(undefined1 *)(*(int *)((int)pvVar4 + 0x10) + *(int *)((int)pvVar4 + 8)) = 0;
                *(undefined4 *)((int)pvVar4 + 2) = *(undefined4 *)(local_4 + 2);
                *(undefined2 *)((int)pvVar4 + 6) = *(undefined2 *)(local_4 + 6);
                FUN_10055cc0(local_4);
                return pvVar4;
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 < *(uint *)(iVar3 + 8));
          }
        }
      }
    }
    FUN_10055cc0(iVar3);
  }
  return (void *)0x0;
}


/* END FUNCTION 0x10056d10 */
