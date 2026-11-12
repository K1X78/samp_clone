/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00483320
 * Name: FUN_00483320
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00483320(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_14;
  int local_10;
  void *local_c;
  int local_8;
  uint local_4;
  
  local_14 = **(int **)((int)this + 4);
  local_c = this;
  if ((int *)local_14 != *(int **)((int)this + 4)) {
    do {
      *(int *)(*(int *)(local_14 + 0x10) + 0x103) =
           *(int *)(*(int *)(local_14 + 0x10) + 0x103) - param_1;
      if (*(int *)(*(int *)(local_14 + 0x10) + 0x103) < 1) {
        FUN_00482610(&local_14);
        local_8 = local_14;
        FUN_00482670(&local_14);
        iVar4 = local_14;
        if ((*(int *)(*(int *)(local_14 + 0x10) + 0x10b) == 0) && (*DAT_004fc438 != 0)) {
          piVar1 = *(int **)(*(byte **)(local_14 + 0x10) + 0x10f);
          if ((piVar1 != (int *)0x0) &&
             (iVar3 = FUN_00401710(piVar1,*(byte **)(local_14 + 0x10),&local_10), iVar3 == 0)) {
            iVar3 = *(int *)(*(int *)(iVar4 + 0x10) + 0x113);
            iVar5 = 0;
            if (0 < iVar3) {
              iVar2 = *(int *)(*(int *)(iVar4 + 0x10) + 0x117);
              do {
                FUN_00401c50(piVar1,*(undefined4 *)(iVar2 + iVar5 * 4));
                iVar5 = iVar5 + 1;
                iVar4 = local_14;
              } while (iVar5 < iVar3);
            }
            FUN_00401c90(piVar1,&local_4,local_10);
            this = local_c;
          }
        }
        iVar4 = *(int *)(iVar4 + 0x10);
        if (*(int *)(iVar4 + 0x107) == 0) {
          FUN_00482540(iVar4);
          FUN_004832c0(this);
        }
        else {
          *(undefined4 *)(iVar4 + 0x103) = *(undefined4 *)(iVar4 + 0xff);
        }
        local_14 = local_8;
      }
      iVar4 = *(int *)((int)this + 4);
    } while ((local_14 != iVar4) && (FUN_00482610(&local_14), local_14 != iVar4));
  }
  return;
}


/* END FUNCTION 0x00483320 */
