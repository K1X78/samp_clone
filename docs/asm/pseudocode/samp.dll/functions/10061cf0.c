/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10061cf0
 * Name: FUN_10061cf0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_10061cf0(undefined4 param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  HANDLE hFindFile;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 local_26c [4];
  void *local_268;
  undefined4 local_258;
  uint local_254;
  char local_250;
  undefined4 local_24f;
  _WIN32_FIND_DATAA local_148;
  
  pcVar2 = (char *)FUN_100c51a0();
  pcVar4 = pcVar2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_1000b490(pcVar2,(int)pcVar4 - (int)(pcVar2 + 1));
  local_250 = '\0';
  puVar6 = &local_24f;
  for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  *(undefined1 *)((int)puVar6 + 2) = 0;
  iVar5 = 0;
  do {
    iVar3 = FUN_10061c40(local_26c,param_1,"\\screens\\sa-mp-%03i.png");
    if (*(uint *)(iVar3 + 0x18) < 0x10) {
      pcVar4 = (char *)(iVar3 + 4);
    }
    else {
      pcVar4 = *(char **)(iVar3 + 4);
    }
    _sprintf(&local_250,pcVar4,iVar5);
    if (0xf < local_254) {
      _free(local_268);
    }
    local_254 = 0xf;
    local_258 = 0;
    local_268 = (void *)((uint)local_268 & 0xffffff00);
    hFindFile = FindFirstFileA(&local_250,&local_148);
    if (hFindFile == (HANDLE)0xffffffff) break;
    FindClose(hFindFile);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 1000);
  pcVar4 = &local_250;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_1000b490(&local_250,(int)pcVar4 - (int)&local_24f);
  return iVar5;
}


/* END FUNCTION 0x10061cf0 */
