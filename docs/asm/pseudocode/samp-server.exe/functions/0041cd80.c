/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041cd80
 * Name: FUN_0041cd80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0041cd80(int *param_1)

{
  int iVar1;
  int *in_EAX;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  byte *extraout_ECX;
  
  iVar5 = param_1[0x80];
  iVar1 = *param_1;
  if (iVar5 != 0) {
    FUN_00416d80();
    param_1[0x83] = 0;
    if (0 < *(int *)(iVar5 + 0x38)) {
      if (*(char *)(iVar1 + 0x7c) == '\0') {
        if (in_EAX != (int *)0x0) {
          param_1[0x7c] = (in_EAX[1] - param_1[0x7b]) + *in_EAX;
        }
        FUN_00418920((undefined **)"CREATE VIRTUAL TABLE %T");
        iVar2 = FUN_0040fc30(iVar1);
        FUN_0041abf0((undefined **)
                     "UPDATE %Q.%s SET type=\'table\', name=%Q, tbl_name=%Q, rootpage=0, sql=%Q WHERE rowid=#%d"
                    );
        FUN_00408130(iVar1);
        FUN_0041c720();
        FUN_004164c0(iVar2);
        FUN_00414e70(0,0x7a);
        pcVar3 = (char *)FUN_00418920((undefined **)"name=\'%q\'");
        FUN_004197c0(1,iVar2,99,pcVar3,-1);
        pcVar3 = *(char **)(iVar5 + 4);
        uVar4 = FUN_00408380(pcVar3);
        FUN_004197c0(0,iVar2,0x7d,pcVar3,uVar4 + 1);
        return;
      }
      iVar2 = *(int *)(iVar5 + 0x44);
      FUN_00408380(*(char **)(iVar5 + 4));
      iVar5 = FUN_00412f40((void *)(iVar2 + 4),extraout_ECX,iVar5);
      if (iVar5 != 0) {
        *(undefined1 *)(iVar1 + 0x1e) = 1;
        return;
      }
      *(int *)(iVar2 + 0x50) = *param_1;
      param_1[0x80] = 0;
    }
  }
  return;
}


/* END FUNCTION 0x0041cd80 */
