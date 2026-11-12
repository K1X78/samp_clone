/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00442b50
 * Name: FUN_00442b50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00442b50(short *param_1,int param_2)

{
  undefined4 uVar1;
  int *in_EAX;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = *in_EAX;
  if ((*(char *)(iVar9 + 0x1e) == '\0') && (uVar2 = FUN_00442130(), uVar2 == 0)) {
    puVar3 = (undefined4 *)FUN_0040ee60(*(char **)(param_1 + 6),*(byte **)(param_1 + 4));
    if (puVar3 == (undefined4 *)0x0) {
      if (param_2 == 0) {
        FUN_00418b00((undefined **)"no such index: %S");
      }
      *(undefined1 *)((int)in_EAX + 0x12) = 1;
    }
    else if (*(char *)((int)puVar3 + 0x19) == '\0') {
      iVar4 = FUN_0040fc30(iVar9);
      iVar8 = puVar3[4];
      uVar1 = *(undefined4 *)(iVar4 * 0x10 + *(int *)(iVar9 + 8));
      pcVar5 = "sqlite_temp_master";
      if (iVar4 != 1) {
        pcVar5 = "sqlite_master";
      }
      iVar6 = FUN_0041ab60(9,pcVar5,0,uVar1);
      if (iVar6 == 0) {
        uVar7 = 0xc;
        if (iVar4 == 0) {
          uVar7 = 10;
        }
        iVar8 = FUN_0041ab60(uVar7,*puVar3,*(undefined4 *)(iVar8 + 4),uVar1);
        if ((iVar8 == 0) && (iVar8 = FUN_0041c720(), iVar8 != 0)) {
          FUN_0042cdb0((byte)iVar4,1);
          FUN_0041abf0((undefined **)"DELETE FROM %Q.%s WHERE name=%Q");
          iVar9 = FUN_0040edd0(iVar9,"sqlite_stat1",*(byte **)(iVar4 * 0x10 + *(int *)(iVar9 + 8)));
          if (iVar9 != 0) {
            FUN_0041abf0((undefined **)"DELETE FROM %Q.sqlite_stat1 WHERE idx=%Q");
          }
          FUN_004164c0(iVar4);
          FUN_00420c90(in_EAX,puVar3[5]);
          FUN_004197c0(0,iVar4,0x66,(char *)*puVar3,0);
        }
      }
    }
    else {
      FUN_00418b00((undefined **)
                   "index associated with UNIQUE or PRIMARY KEY constraint cannot be dropped");
    }
  }
  FUN_0040f240(param_1);
  return;
}


/* END FUNCTION 0x00442b50 */
