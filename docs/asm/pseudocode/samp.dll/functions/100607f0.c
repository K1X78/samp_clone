/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100607f0
 * Name: FUN_100607f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100607f0(uint *param_1)

{
  short sVar1;
  char cVar2;
  int iVar3;
  DWORD DVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  HANDLE Process;
  BOOL BVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined4 *puVar14;
  char acStackY_370 [260];
  undefined4 uStackY_26c;
  PROCESS_MEMORY_COUNTERS *ppsmemCounters;
  char *pcStack_22c;
  PROCESS_MEMORY_COUNTERS PStack_210;
  undefined4 auStack_1e0 [54];
  char acStack_108 [260];
  
  if (((DAT_102aca24 != 0) && (*(int **)(DAT_102aca24 + 0x2c) != (int *)0x0)) &&
     (cVar2 = (**(code **)(**(int **)(DAT_102aca24 + 0x2c) + 0x48))(), cVar2 != '\0')) {
    iVar3 = (**(code **)(**(int **)(DAT_102aca24 + 0x2c) + 0xcc))();
    DVar4 = GetTickCount();
    if (1000 < DVar4 - param_1[2]) {
      DVar4 = GetTickCount();
      param_1[2] = DVar4;
      param_1[4] = (*(uint *)(iVar3 + 0xd8) >> 3 | *(int *)(iVar3 + 0xdc) << 0x1d) - param_1[1];
      param_1[1] = *(uint *)(iVar3 + 0xd8) >> 3 | *(int *)(iVar3 + 0xdc) << 0x1d;
      param_1[3] = (*(uint *)(iVar3 + 0xb8) >> 3 | *(int *)(iVar3 + 0xbc) << 0x1d) - *param_1;
      *param_1 = *(uint *)(iVar3 + 0xb8) >> 3 | *(int *)(iVar3 + 0xbc) << 0x1d;
    }
    iVar3 = **(int **)(*(int *)(*(int *)(DAT_102aca24 + 0x3de) + 8) + 0x1e);
    _sprintf((char *)&DAT_10167e78,"Download Rate: %.2f KB/s\nUpload Rate: %.2f KB/s\n");
    puVar14 = auStack_1e0;
    for (iVar9 = 0x35; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar14 = 0;
      puVar14 = puVar14 + 1;
    }
    iVar9 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0xc);
    uVar13 = 0;
    if (*(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0x14) != 0) {
      FUN_10012730();
    }
    if (iVar9 != 0) {
      FUN_100a1410();
      do {
        if ((ushort)uVar13 < 2000) {
          uVar5 = uVar13 & 0xffff;
          iVar6 = *(int *)(iVar9 + 0x3074 + uVar5 * 4);
          if (iVar6 != 0) {
            if (iVar6 == 0) {
              iVar10 = 0;
            }
            else {
              iVar10 = *(int *)(iVar9 + 0x1134 + uVar5 * 4);
            }
            if (*(int *)(iVar10 + 0x4c) != 0) {
              if (iVar6 == 0) {
                iVar6 = 0;
              }
              else {
                iVar6 = *(int *)(iVar9 + 0x1134 + uVar5 * 4);
              }
              sVar1 = *(short *)(*(int *)(iVar6 + 0x4c) + 0x22);
              acStackY_370[sVar1] = acStackY_370[sVar1] + '\x01';
            }
          }
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 != 2000);
      iVar9 = 0;
      do {
        iVar9 = iVar9 + 1;
      } while (iVar9 != 0xd4);
      FUN_100b3a00();
      FUN_1009ff30();
      FUN_100a15a0();
      uStackY_26c = 0x10060a3a;
      _sprintf(acStack_108,
               "Vehicles: %u\nVehicle Models: %u\nVehicle Models Loaded: %u\nRWObjects: %u\nPedSlotsUsed: %u\nObjectSlotsUsed: %u\nShotCompMode: %u\nFreeIDEs: %u\n"
              );
      pcVar7 = acStack_108;
      do {
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      uVar13 = (int)pcVar7 - (int)acStack_108;
      pcVar7 = (char *)0x10167e77;
      do {
        pcVar11 = pcVar7 + 1;
        pcVar7 = pcVar7 + 1;
      } while (*pcVar11 != '\0');
      pcVar11 = acStack_108;
      for (uVar5 = uVar13 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
        *pcVar7 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar7 = pcVar7 + 1;
      }
    }
    if (iVar3 != 0) {
      iVar3 = FUN_100aba90();
      if (iVar3 == 0) {
        FUN_10003a00();
        pcVar7 = "OnFoot Send Rate: %u\n";
      }
      else {
        FUN_100039c0();
        pcVar7 = "InCar Send Rate: %u\n";
      }
      _sprintf((char *)&DAT_10163e78,pcVar7);
      pcVar7 = (char *)&DAT_10163e78;
      do {
        pcVar11 = pcVar7;
        pcVar7 = pcVar11 + 1;
      } while (*pcVar11 != '\0');
      puVar14 = (undefined4 *)0x10167e77;
      do {
        pcVar7 = (char *)((int)puVar14 + 1);
        puVar14 = (undefined4 *)((int)puVar14 + 1);
      } while (*pcVar7 != '\0');
      puVar12 = &DAT_10163e78;
      for (uVar13 = (uint)(pcVar11 + -0x10163e77) >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *puVar14 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar14 = puVar14 + 1;
      }
      for (uVar13 = (uint)(pcVar11 + -0x10163e77) & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined1 *)puVar14 = *(undefined1 *)puVar12;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
        puVar14 = (undefined4 *)((int)puVar14 + 1);
      }
    }
    if (DAT_102aca3c != 0) {
      iVar3 = FUN_100a13f0();
      iVar9 = FUN_100a1400();
      if ((iVar3 != 0) && (iVar9 != 0)) {
        _sprintf((char *)&DAT_10163e78,"Streaming Mem: %uMB Total: %uMB System: %uMB\n");
      }
      pcVar7 = (char *)&DAT_10163e78;
      do {
        pcVar11 = pcVar7;
        pcVar7 = pcVar11 + 1;
      } while (*pcVar11 != '\0');
      puVar14 = (undefined4 *)0x10167e77;
      do {
        pcVar7 = (char *)((int)puVar14 + 1);
        puVar14 = (undefined4 *)((int)puVar14 + 1);
      } while (*pcVar7 != '\0');
      puVar12 = &DAT_10163e78;
      for (uVar13 = (uint)(pcVar11 + -0x10163e77) >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *puVar14 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar14 = puVar14 + 1;
      }
      for (uVar13 = (uint)(pcVar11 + -0x10163e77) & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined1 *)puVar14 = *(undefined1 *)puVar12;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
        puVar14 = (undefined4 *)((int)puVar14 + 1);
      }
    }
    PStack_210.cb = 0;
    PStack_210.PageFaultCount = 0;
    PStack_210.PeakWorkingSetSize = 0;
    PStack_210.WorkingSetSize = 0;
    PStack_210.QuotaPeakPagedPoolUsage = 0;
    PStack_210.QuotaPagedPoolUsage = 0;
    PStack_210.QuotaPeakNonPagedPoolUsage = 0;
    PStack_210.QuotaNonPagedPoolUsage = 0;
    ppsmemCounters = &PStack_210;
    PStack_210.PagefileUsage = 0;
    DVar4 = 0x28;
    PStack_210.PeakPagefileUsage = 0;
    Process = GetCurrentProcess();
    BVar8 = GetProcessMemoryInfo(Process,ppsmemCounters,DVar4);
    if (BVar8 != 0) {
      _sprintf((char *)&DAT_10163e78,"Process Mem: %uKB Working Set: %uKB\n");
      pcVar7 = (char *)&DAT_10163e78;
      do {
        pcVar11 = pcVar7;
        pcVar7 = pcVar11 + 1;
      } while (*pcVar11 != '\0');
      puVar14 = (undefined4 *)0x10167e77;
      do {
        pcVar7 = (char *)((int)puVar14 + 1);
        puVar14 = (undefined4 *)((int)puVar14 + 1);
      } while (*pcVar7 != '\0');
      puVar12 = &DAT_10163e78;
      for (uVar13 = (uint)(pcVar11 + -0x10163e77) >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *puVar14 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar14 = puVar14 + 1;
      }
      for (uVar13 = (uint)(pcVar11 + -0x10163e77) & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined1 *)puVar14 = *(undefined1 *)puVar12;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
        puVar14 = (undefined4 *)((int)puVar14 + 1);
      }
    }
    FUN_100360d0();
    pcVar7 = (char *)&DAT_10163e78;
    do {
      pcVar11 = pcVar7;
      pcVar7 = pcVar11 + 1;
    } while (*pcVar11 != '\0');
    puVar14 = (undefined4 *)0x10167e77;
    do {
      pcVar7 = (char *)((int)puVar14 + 1);
      puVar14 = (undefined4 *)((int)puVar14 + 1);
    } while (*pcVar7 != '\0');
    puVar12 = &DAT_10163e78;
    for (uVar13 = (uint)(pcVar11 + -0x10163e77) >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *puVar14 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar14 = puVar14 + 1;
    }
    for (uVar13 = (uint)(pcVar11 + -0x10163e77) & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined1 *)puVar14 = *(undefined1 *)puVar12;
      puVar12 = (undefined4 *)((int)puVar12 + 1);
      puVar14 = (undefined4 *)((int)puVar14 + 1);
    }
    FUN_1006ac40();
    FUN_1006ac40();
    iVar3 = 0;
    pcStack_22c = (char *)&DAT_10167e78;
    FUN_1006ada0();
    cVar2 = (char)DAT_10167e78;
    while (cVar2 != '\0') {
      cVar2 = *pcStack_22c;
      (&DAT_10163a78)[iVar3] = cVar2;
      if (cVar2 == '\n') {
        (&DAT_10163a78)[iVar3] = 0;
        FUN_1006ada0();
        iVar3 = 0;
      }
      else {
        iVar3 = iVar3 + 1;
      }
      pcVar7 = pcStack_22c + 1;
      pcStack_22c = pcStack_22c + 1;
      cVar2 = *pcVar7;
    }
  }
  return;
}


/* END FUNCTION 0x100607f0 */
