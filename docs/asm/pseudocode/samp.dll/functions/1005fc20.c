/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1005fc20
 * Name: FUN_1005fc20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1005fc20(char *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  int iVar7;
  int *piVar8;
  char *pcVar9;
  bool bVar10;
  char local_4000 [16380];
  undefined4 uStack_4;
  
  uStack_4 = 0x1005fc2a;
  iVar2 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 8);
  *param_1 = '\0';
  _sprintf(param_1,"\r\nState Information: Ped Context: %u\r\n",(uint)*DAT_10151960);
  uVar6 = 0;
  iVar7 = 0;
  piVar8 = (int *)(iVar2 + 0x26);
  do {
    if ((uVar6 < 0x3ec) && (piVar8[0x3ec] != 0)) {
      if (*piVar8 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(*piVar8 + 8);
      }
      _sprintf(local_4000,"P%u (%u,%u) ",iVar7,(uint)*(byte *)(iVar2 + 0x1a),
               (uint)*(ushort *)(iVar2 + 2));
      pcVar3 = local_4000;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      uVar4 = (int)pcVar3 - (int)local_4000;
      pcVar3 = param_1 + -1;
      do {
        pcVar9 = pcVar3 + 1;
        pcVar3 = pcVar3 + 1;
      } while (*pcVar9 != '\0');
      pcVar9 = local_4000;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar3 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar3 = pcVar3 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar3 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar3 = pcVar3 + 1;
      }
      if (uVar6 != 0) {
        uVar4 = iVar7 + 1U & 0x80000003;
        bVar10 = uVar4 == 0;
        if ((int)uVar4 < 0) {
          bVar10 = (uVar4 - 1 | 0xfffffffc) == 0xffffffff;
        }
        if (bVar10) {
          pcVar3 = param_1 + -1;
          do {
            pcVar9 = pcVar3;
            pcVar3 = pcVar9 + 1;
          } while (pcVar9[1] != '\0');
          pcVar3[0] = '\r';
          pcVar3[1] = '\n';
          pcVar9[3] = '\0';
        }
      }
    }
    uVar6 = uVar6 + 1;
    piVar8 = piVar8 + 1;
    iVar7 = iVar7 + 1;
  } while (uVar6 != 0x3ec);
  return;
}


/* END FUNCTION 0x1005fc20 */
