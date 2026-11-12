/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00424790
 * Name: FUN_00424790
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00424790(int param_1,char *param_2)

{
  undefined1 uVar1;
  ushort uVar2;
  undefined4 *puVar3;
  int *piVar4;
  bool bVar5;
  char *pcVar6;
  undefined4 uVar7;
  uint uVar8;
  short *psVar9;
  int iVar10;
  byte *pbVar11;
  bool bVar12;
  int local_10;
  
  puVar3 = *(undefined4 **)(param_1 + 0xc);
  uVar2 = *(ushort *)(param_2 + 2);
  piVar4 = (int *)*puVar3;
  if ((uVar2 & 4) != 0) {
    return 1;
  }
  *(ushort *)(param_2 + 2) = uVar2 | 4;
  switch(*param_2) {
  case '\x14':
  case 'H':
  case 't':
    if ((uVar2 & 0x800) != 0) {
      iVar10 = puVar3[3];
      if (*(char *)((int)puVar3 + 0x16) != '\0') {
        FUN_00418b00((undefined **)"subqueries prohibited in CHECK constraints");
      }
      FUN_00415750(param_1,*(int *)(param_2 + 0x10));
      if (iVar10 != puVar3[3]) {
        param_2[2] = param_2[2] | 0x20;
      }
    }
    break;
  case '\x1a':
    uVar7 = FUN_004241c0(piVar4,(byte *)0x0,(byte *)0x0,*(byte **)(param_2 + 4),(int)puVar3,param_2)
    ;
    return uVar7;
  case 'v':
    pcVar6 = *(char **)(param_2 + 0xc);
    if (*pcVar6 == '\x1a') {
      iVar10 = *(int *)(param_2 + 8);
      pbVar11 = (byte *)0x0;
    }
    else {
      iVar10 = *(int *)(pcVar6 + 8);
      pbVar11 = *(byte **)(*(int *)(param_2 + 8) + 4);
      pcVar6 = *(char **)(pcVar6 + 0xc);
    }
    uVar7 = FUN_004241c0(piVar4,pbVar11,*(byte **)(iVar10 + 4),*(byte **)(pcVar6 + 4),(int)puVar3,
                         param_2);
    return uVar7;
  case -0x7b:
    if (*(char *)((int)puVar3 + 0x16) != '\0') {
      FUN_00418b00((undefined **)"parameters prohibited in CHECK constraints");
    }
    break;
  case -0x69:
  case -0x65:
    if (*(int **)(param_2 + 0x10) == (int *)0x0) {
      local_10 = 0;
    }
    else {
      local_10 = **(int **)(param_2 + 0x10);
    }
    iVar10 = *piVar4;
    pbVar11 = *(byte **)(param_2 + 4);
    bVar5 = false;
    bVar12 = false;
    uVar1 = *(undefined1 *)(*(int *)(*(int *)(iVar10 + 8) + 0xc) + 0x49);
    uVar8 = FUN_00408380((char *)pbVar11);
    psVar9 = FUN_0041b710(iVar10,pbVar11,uVar8,local_10,uVar1,0);
    if (psVar9 == (short *)0x0) {
      psVar9 = FUN_0041b710(*piVar4,pbVar11,uVar8,-1,uVar1,0);
      if (psVar9 == (short *)0x0) {
        FUN_00418b00((undefined **)"no such function: %.*s");
        puVar3[4] = puVar3[4] + 1;
        goto LAB_004249ab;
      }
      bVar5 = true;
    }
    else {
      bVar12 = *(int *)(psVar9 + 6) == 0;
    }
    iVar10 = FUN_0041ab60(0x1f,0,*(undefined4 *)(psVar9 + 0xc),0);
    if (iVar10 != 0) {
      if (iVar10 == 1) {
        FUN_00418b00((undefined **)"not authorized to use function: %s");
        puVar3[4] = puVar3[4] + 1;
      }
      *param_2 = 'b';
      return 1;
    }
    if ((bVar12) && (*(char *)(puVar3 + 5) == '\0')) {
      FUN_00418b00((undefined **)"misuse of aggregate function %.*s()");
      puVar3[4] = puVar3[4] + 1;
      bVar12 = false;
    }
    else {
      if (bVar5) {
        FUN_00418b00((undefined **)"wrong number of arguments to function %.*s()");
        puVar3[4] = puVar3[4] + 1;
      }
      if (bVar12) {
        *param_2 = -0x67;
        *(undefined1 *)((int)puVar3 + 0x15) = 1;
        *(undefined1 *)(puVar3 + 5) = 0;
      }
    }
LAB_004249ab:
    FUN_0040e2c0();
    if (bVar12) {
      *(undefined1 *)(puVar3 + 5) = 1;
    }
    return 1;
  }
  if ((piVar4[0x10] == 0) && (*(char *)(*piVar4 + 0x1e) == '\0')) {
    return 0;
  }
  return 2;
}


/* END FUNCTION 0x00424790 */
