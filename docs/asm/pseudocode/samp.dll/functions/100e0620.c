/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e0620
 * Name: FUN_100e0620
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined * FUN_100e0620(ushort param_1)

{
  char *pcVar1;
  undefined4 *puVar2;
  UINT UVar3;
  int iVar4;
  HMODULE hModule;
  FARPROC pFVar5;
  undefined4 *puVar6;
  char *local_22c;
  code *local_228;
  char *local_224;
  code *local_220;
  char *local_21c;
  undefined1 local_218 [4];
  CHAR local_214 [268];
  CHAR local_108 [264];
  
  local_22c = "getaddrinfo";
  local_228 = FUN_100e00f0;
  local_224 = "getnameinfo";
  local_220 = FUN_100e03e0;
  local_21c = "freeaddrinfo";
  local_218 = (undefined1  [4])FUN_100e00a0;
  if (DAT_102acd0c != 0) goto LAB_100e0772;
  UVar3 = GetSystemDirectoryA(local_108,0x104);
  if (UVar3 != 0) {
    iVar4 = 0;
    do {
      pcVar1 = local_108 + iVar4;
      local_214[iVar4] = *pcVar1;
      iVar4 = iVar4 + 1;
    } while (*pcVar1 != '\0');
    puVar2 = (undefined4 *)(local_218 + 3);
    do {
      puVar6 = puVar2;
      puVar2 = (undefined4 *)((int)puVar6 + 1);
    } while (*(char *)((int)puVar6 + 1) != '\0');
    *(undefined4 *)((int)puVar6 + 1) = 0x3273775c;
    *(undefined4 *)((int)puVar6 + 5) = 0x32335f;
    hModule = LoadLibraryA(local_214);
    if (hModule == (HMODULE)0x0) {
LAB_100e06dd:
      iVar4 = 0;
      do {
        pcVar1 = local_108 + iVar4;
        local_214[iVar4] = *pcVar1;
        iVar4 = iVar4 + 1;
      } while (*pcVar1 != '\0');
      puVar2 = (undefined4 *)(local_218 + 3);
      do {
        puVar6 = puVar2;
        puVar2 = (undefined4 *)((int)puVar6 + 1);
      } while (*(char *)((int)puVar6 + 1) != '\0');
      *(undefined4 *)((int)puVar6 + 1) = 0x6873775c;
      *(undefined4 *)((int)puVar6 + 5) = 0x367069;
      hModule = LoadLibraryA(local_214);
      if (hModule != (HMODULE)0x0) {
        pFVar5 = GetProcAddress(hModule,"getaddrinfo");
        if (pFVar5 != (FARPROC)0x0) goto LAB_100e072f;
LAB_100e0726:
        FreeLibrary(hModule);
      }
    }
    else {
      pFVar5 = GetProcAddress(hModule,"getaddrinfo");
      if (pFVar5 == (FARPROC)0x0) {
        FreeLibrary(hModule);
        goto LAB_100e06dd;
      }
LAB_100e072f:
      iVar4 = 0;
      do {
        pFVar5 = GetProcAddress(hModule,(&local_22c)[iVar4 * 2]);
        (&local_228)[iVar4 * 2] = pFVar5;
        if (pFVar5 == (FARPROC)0x0) goto LAB_100e0726;
        iVar4 = iVar4 + 1;
      } while (iVar4 < 3);
      PTR_FUN_10155528 = local_228;
      PTR_FUN_10155530 = local_220;
      PTR_FUN_10155538 = (undefined *)local_218;
    }
  }
  DAT_102acd0c = 1;
LAB_100e0772:
  return (&PTR_FUN_10155528)[(uint)param_1 * 2];
}


/* END FUNCTION 0x100e0620 */
