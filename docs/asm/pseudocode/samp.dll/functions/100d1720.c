/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d1720
 * Name: FUN_100d1720
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100d1720(void)

{
  char *pcVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 local_80 [32];
  
  pcVar5 = (char *)**(undefined4 **)(in_EAX + 800);
  puVar4 = local_80;
  cVar2 = *pcVar5;
  while (cVar2 != '\0') {
    iVar3 = _tolower((int)cVar2);
    *(char *)puVar4 = (char)iVar3;
    pcVar1 = pcVar5 + 1;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    pcVar5 = pcVar5 + 1;
    cVar2 = *pcVar1;
  }
  *puVar4 = 0x6f72705f;
  *(undefined2 *)(puVar4 + 1) = 0x7978;
  *(undefined1 *)((int)puVar4 + 6) = 0;
  iVar3 = FUN_100eae90(local_80);
  if (iVar3 == 0) {
    iVar3 = FUN_100de830("http_proxy",local_80);
    if (iVar3 == 0) {
      FUN_100de940(local_80,local_80,0x80);
      iVar3 = FUN_100eae90(local_80);
      if (iVar3 != 0) {
        return;
      }
    }
    iVar3 = FUN_100eae90("all_proxy");
    if (iVar3 == 0) {
      FUN_100eae90("ALL_PROXY");
    }
  }
  return;
}


/* END FUNCTION 0x100d1720 */
