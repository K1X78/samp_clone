/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1008ab80
 * Name: FUN_1008ab80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1008ab80(int param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 local_248 [63];
  char acStack_209 [2];
  undefined4 local_207;
  undefined1 auStack_8 [4];
  
  acStack_209[1] = 0;
  puVar5 = &local_207;
  for (iVar3 = 0x7f; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = 0;
  *(undefined1 *)((int)puVar5 + 2) = 0;
  if (param_1 != 0) {
    iVar3 = 0;
    if (0 < param_2) {
      do {
        FUN_1007bc80(local_248,0x40,"%.4f ",(double)*(float *)(param_1 + iVar3 * 4));
        iVar4 = 0x200;
        pcVar2 = acStack_209;
        do {
          pcVar2 = pcVar2 + 1;
          if (*pcVar2 == '\0') {
            if (iVar4 != 0) {
              FUN_10077b90(auStack_8 + -iVar4,0x200 - (-iVar4 + 0x200),local_248);
            }
            break;
          }
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        iVar3 = iVar3 + 1;
      } while (iVar3 < param_2);
      if (0 < param_2) {
        pcVar2 = acStack_209 + 1;
        do {
          cVar1 = *pcVar2;
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        if (pcVar2 != (char *)&local_207) {
          pcVar2 = acStack_209;
          do {
            pcVar2 = pcVar2 + 1;
          } while (*pcVar2 != '\0');
          pcVar2[-1] = '\0';
        }
      }
    }
    FUN_10085000(acStack_209 + 1,0);
  }
  return;
}


/* END FUNCTION 0x1008ab80 */
