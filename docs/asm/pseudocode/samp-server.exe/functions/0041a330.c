/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041a330
 * Name: FUN_0041a330
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


short * __cdecl FUN_0041a330(int param_1,short *param_2,uint param_3)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined1 *puVar8;
  short *psVar9;
  int local_c;
  
  if (param_2 == (short *)0x0) {
    return (short *)0x0;
  }
  if (*param_2 < 1) {
    iVar2 = 0;
  }
  else {
    iVar2 = (*param_2 + -1) * 0x38;
  }
  psVar3 = (short *)FUN_00412930(iVar2 + 0x40);
  if (psVar3 != (short *)0x0) {
    sVar1 = *param_2;
    psVar3[1] = sVar1;
    *psVar3 = sVar1;
    local_c = 0;
    if (0 < *param_2) {
      puVar8 = (undefined1 *)((int)param_2 + 0x1d);
      psVar9 = psVar3 + 6;
      do {
        pcVar4 = FUN_00412a70();
        *(char **)(psVar9 + -2) = pcVar4;
        pcVar4 = FUN_00412a70();
        *(char **)psVar9 = pcVar4;
        pcVar4 = FUN_00412a70();
        *(char **)(psVar9 + 2) = pcVar4;
        *(undefined1 *)((int)psVar9 + 0x11) = *puVar8;
        *(undefined4 *)(psVar9 + 10) = *(undefined4 *)(puVar8 + 3);
        *(undefined1 *)(psVar9 + 8) = puVar8[-1];
        pcVar4 = FUN_00412a70();
        *(char **)(psVar9 + 0x16) = pcVar4;
        *(undefined1 *)(psVar9 + 9) = puVar8[1];
        *(undefined4 *)(psVar9 + 0x18) = *(undefined4 *)(puVar8 + 0x1f);
        iVar2 = *(int *)(puVar8 + -9);
        *(int *)(psVar9 + 4) = iVar2;
        if (iVar2 != 0) {
          *(short *)(iVar2 + 0x20) = *(short *)(iVar2 + 0x20) + 1;
        }
        puVar5 = FUN_0041a470(param_1,*(undefined4 **)(puVar8 + -5),param_3);
        *(undefined4 **)(psVar9 + 6) = puVar5;
        uVar6 = FUN_00420310(param_1,*(undefined4 **)(puVar8 + 7),param_3);
        *(undefined4 *)(psVar9 + 0xc) = uVar6;
        piVar7 = FUN_00415a40(param_1,*(int **)(puVar8 + 0xb));
        *(int **)(psVar9 + 0xe) = piVar7;
        *(undefined4 *)(psVar9 + 0x12) = *(undefined4 *)(puVar8 + 0x13);
        *(undefined4 *)(psVar9 + 0x14) = *(undefined4 *)(puVar8 + 0x17);
        local_c = local_c + 1;
        psVar9 = psVar9 + 0x1c;
        puVar8 = puVar8 + 0x38;
      } while (local_c < *param_2);
    }
    return psVar3;
  }
  return (short *)0x0;
}


/* END FUNCTION 0x0041a330 */
