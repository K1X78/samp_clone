/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10060070
 * Name: FUN_10060070
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_10060070(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  bool bVar9;
  char local_4000 [16380];
  undefined4 uStack_4;
  
  uStack_4 = 0x1006007a;
  pcVar5 = local_4000;
  _sprintf((char *)&DAT_1015fa70,
           "SA-MP %s\r\nException At Address: 0x%08X\r\nBase: 0x%08X\r\n\r\nRegisters:\r\nEAX: 0x%08X\tEBX: 0x%08X\tECX: 0x%08X\tEDX: 0x%08X\r\nESI: 0x%08X\tEDI: 0x%08X\tEBP: 0x%08X\tESP: 0x%08X\r\nEFLAGS: 0x%08X\r\n\r\nStack:\r\n"
           ,"0.3.DL-R1",*(undefined4 *)(DAT_1015fa68 + 0xb8),DAT_102ac9c8,
           *(undefined4 *)(DAT_1015fa68 + 0xb0),*(undefined4 *)(DAT_1015fa68 + 0xa4),
           *(undefined4 *)(DAT_1015fa68 + 0xac),*(undefined4 *)(DAT_1015fa68 + 0xa8),
           *(undefined4 *)(DAT_1015fa68 + 0xa0),*(undefined4 *)(DAT_1015fa68 + 0x9c),
           *(undefined4 *)(DAT_1015fa68 + 0xb4),*(undefined4 *)(DAT_1015fa68 + 0xc4),
           *(undefined4 *)(DAT_1015fa68 + 0xc0));
  FUN_1005fd50(*(undefined4 *)(DAT_1015fa68 + 0xc4),0x280,&DAT_1015fa70,1);
  _sprintf(local_4000,"\r\nSCM Op: 0x%X, lDbg: %d LastRendObj: %u\r\n",DAT_102a93f4,DAT_102a93f8,
           (uint)DAT_1018f584);
  pcVar3 = local_4000;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  uVar4 = (int)pcVar3 - (int)local_4000;
  pcVar3 = (char *)0x1015fa6f;
  do {
    pcVar7 = pcVar3 + 1;
    pcVar3 = pcVar3 + 1;
  } while (*pcVar7 != '\0');
  pcVar7 = local_4000;
  for (uVar6 = uVar4 >> 2; iVar2 = DAT_102ac9b8, uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar3 = pcVar3 + 4;
  }
  bVar9 = DAT_102ac9b8 == 1;
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar3 = pcVar3 + 1;
  }
  if (bVar9) {
    pcVar3 = "US 1.0";
  }
  else {
    pcVar3 = "EU 1.0";
    if (iVar2 != 2) {
      pcVar3 = "UNKNOWN";
    }
  }
  _sprintf(local_4000,"\r\nGame Version: %s\r\n",pcVar3);
  pcVar3 = local_4000;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  uVar4 = (int)pcVar3 - (int)local_4000;
  pcVar3 = (char *)0x1015fa6f;
  do {
    pcVar7 = pcVar3 + 1;
    pcVar3 = pcVar3 + 1;
  } while (*pcVar7 != '\0');
  pcVar7 = local_4000;
  for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar3 = pcVar3 + 4;
  }
  bVar9 = DAT_102aca24 != 0;
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar3 = pcVar3 + 1;
  }
  if (bVar9) {
    FUN_1005fc20(local_4000);
    pcVar3 = local_4000;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    uVar4 = (int)pcVar3 - (int)local_4000;
    pcVar3 = (char *)0x1015fa6f;
    do {
      pcVar7 = pcVar3 + 1;
      pcVar3 = pcVar3 + 1;
    } while (*pcVar7 != '\0');
    pcVar7 = local_4000;
    for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar3 = pcVar3 + 1;
    }
  }
  if (param_1 != 0) {
    FUN_1005fee0(local_4000);
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    puVar8 = (undefined4 *)0x1015fa6f;
    do {
      pcVar3 = (char *)((int)puVar8 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    } while (*pcVar3 != '\0');
    pcVar3 = local_4000;
    for (uVar4 = (uint)((int)pcVar5 - (int)local_4000) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar8 = *(undefined4 *)pcVar3;
      pcVar3 = (char *)((int)pcVar3 + 4);
      puVar8 = puVar8 + 1;
    }
    for (uVar4 = (int)pcVar5 - (int)local_4000 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(char *)puVar8 = *pcVar3;
      pcVar3 = (char *)((int)pcVar3 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
  }
  return;
}


/* END FUNCTION 0x10060070 */
