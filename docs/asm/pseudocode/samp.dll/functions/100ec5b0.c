/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ec5b0
 * Name: FUN_100ec5b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100ec5b0(int *param_1,char *param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  char *pcVar10;
  char *pcVar11;
  undefined4 auStack_c [3];
  
  iVar2 = *param_1;
  if (*(int *)(iVar2 + 0x134) != 0) {
    param_2 = param_2 + -0xc;
    *(int *)(iVar2 + 300) = *(int *)(iVar2 + 300) + 10;
  }
  pcVar3 = (char *)(**(code **)(iVar2 + 0x4b10))
                             (*(undefined4 *)(iVar2 + 300),1,param_2,*(undefined4 *)(iVar2 + 0x4b14)
                             );
  if (pcVar3 == (char *)0x10000000) {
    FUN_100d8ba0(iVar2,"operation aborted by callback");
    *param_3 = 0;
    return 0x2a;
  }
  if (pcVar3 != (char *)0x10000001) {
    if (param_2 < pcVar3) {
      *param_3 = 0;
      FUN_100d8ba0(iVar2,"read function returned funny value");
      return 0x1a;
    }
    if ((*(int *)(iVar2 + 0x13c) == 0) && (*(int *)(iVar2 + 0x134) != 0)) {
      pcVar4 = "\n";
      if (*(int *)(iVar2 + 0x3b8) == 0) {
        pcVar4 = "\r\n";
      }
      pcVar5 = (char *)FUN_100cc780(auStack_c,0xb,&DAT_10128864,pcVar3,pcVar4);
      puVar8 = (undefined4 *)(*(int *)(iVar2 + 300) - (int)pcVar5);
      pcVar3 = pcVar3 + (int)pcVar5;
      *(undefined4 **)(iVar2 + 300) = puVar8;
      puVar9 = auStack_c;
      for (uVar6 = (uint)pcVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar8 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar6 = (uint)pcVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      pcVar7 = pcVar4;
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      pcVar10 = pcVar4;
      pcVar11 = pcVar3 + *(int *)(iVar2 + 300);
      for (uVar6 = (uint)((int)pcVar7 - (int)(pcVar4 + 1)) >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar6 = (int)pcVar7 - (int)(pcVar4 + 1) & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar11 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar11 = pcVar11 + 1;
      }
      if (pcVar3 == pcVar5) {
        *(undefined4 *)(iVar2 + 0x114) = 1;
        FUN_100d8ae0(iVar2,"Signaling end of chunked upload via terminating chunk.\n");
      }
      pcVar5 = pcVar4 + 1;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      pcVar3 = pcVar4 + ((int)pcVar3 - (int)pcVar5);
    }
    *param_3 = pcVar3;
    return 0;
  }
  if ((*(byte *)(param_1[200] + 0x44) & 0x10) != 0) {
    FUN_100d8ba0(iVar2,"Read callback asked for PAUSE when not supported!");
    return 0x1a;
  }
  *(uint *)(iVar2 + 0x110) = *(uint *)(iVar2 + 0x110) | 0x20;
  if (*(int *)(iVar2 + 0x134) != 0) {
    *(int *)(iVar2 + 300) = *(int *)(iVar2 + 300) + -10;
  }
  *param_3 = 0;
  return 0;
}


/* END FUNCTION 0x100ec5b0 */
