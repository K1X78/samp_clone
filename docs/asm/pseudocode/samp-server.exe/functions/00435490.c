/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00435490
 * Name: FUN_00435490
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00435490(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  char *local_18;
  int local_10;
  char *local_c;
  byte *local_8;
  int local_4;
  
  iVar1 = *param_1;
  if (param_1[0x10] != 0) {
    return;
  }
  if (*(char *)(iVar1 + 0x1e) != '\0') {
    return;
  }
  iVar4 = param_1[0x80];
  iVar2 = FUN_0040fc30(iVar1);
  pbVar5 = *(byte **)(iVar2 * 0x10 + *(int *)(iVar1 + 8));
  local_18 = *(char **)(*(int *)(iVar4 + 0x10) + -0x14 + *(int *)(iVar4 + 0xc) * 0x18);
  local_c = (char *)(*(int *)(iVar4 + 4) + 0x10);
  local_10 = *(int *)(iVar4 + 0x10) + -0x18 + *(int *)(iVar4 + 0xc) * 0x18;
  local_8 = pbVar5;
  local_4 = FUN_0040edd0(iVar1,local_c,pbVar5);
  iVar3 = FUN_0041ab60(0x1a,pbVar5,*(undefined4 *)(local_4 + 4),0);
  if (iVar3 != 0) {
    return;
  }
  if ((local_18 != (char *)0x0) && (*local_18 == 'b')) {
    local_18 = (char *)0x0;
  }
  if (*(char *)(local_10 + 0x15) != '\0') {
    FUN_00418b00((undefined **)"Cannot add a PRIMARY KEY column");
    return;
  }
  if (*(int *)(iVar4 + 0x14) != 0) {
    FUN_00418b00((undefined **)"Cannot add a UNIQUE column");
    return;
  }
  if ((((*(uint *)(iVar1 + 0xc) & 0x4000000) != 0) && (*(int *)(iVar4 + 0x24) != 0)) &&
     (local_18 != (char *)0x0)) {
    FUN_00418b00((undefined **)"Cannot add a REFERENCES column with non-NULL default value");
    return;
  }
  if (*(char *)(local_10 + 0x14) == '\0') {
    if (local_18 == (char *)0x0) goto LAB_00435611;
  }
  else if (local_18 == (char *)0x0) {
    FUN_00418b00((undefined **)"Cannot add a NOT NULL column with default value NULL");
    return;
  }
  iVar4 = FUN_00434100(iVar1,local_18,1,0x62,&local_10);
  if (iVar4 != 0) {
    *(undefined1 *)(iVar1 + 0x1e) = 1;
    return;
  }
  if (local_10 == 0) {
    FUN_00418b00((undefined **)"Cannot add a column with non-constant default");
    return;
  }
  FUN_0040d430();
LAB_00435611:
  pbVar5 = (byte *)FUN_00412ab0();
  if (pbVar5 != (byte *)0x0) {
    local_10 = *(int *)(iVar1 + 0xc);
    pbVar6 = pbVar5 + *(int *)(param_2 + 4) + -1;
    while ((pbVar5 < pbVar6 && ((*pbVar6 == 0x3b || (((&DAT_004b29c8)[*pbVar6] & 1) != 0))))) {
      *pbVar6 = 0;
      pbVar6 = pbVar6 + -1;
    }
    *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) | 0x10000000;
    FUN_0041abf0((undefined **)
                 "UPDATE \"%w\".%s SET sql = substr(sql,1,%d) || \', \' || %Q || substr(sql,%d) WHERE type = \'table\' AND name = %Q"
                );
    FUN_00408130(iVar1);
    *(int *)(iVar1 + 0xc) = local_10;
  }
  FUN_00420760(iVar2,(local_18 != (char *)0x0) + 2);
  FUN_00420680(param_1,local_4);
  return;
}


/* END FUNCTION 0x00435490 */
