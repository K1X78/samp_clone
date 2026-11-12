/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040c380
 * Name: FUN_0040c380
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0040c380(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = param_1;
  piVar1 = (int *)(param_1 + 4);
  iVar5 = 0;
  param_1 = 0;
  if (0 < *piVar1) {
    do {
      iVar6 = *(int *)(*(int *)(iVar4 + 8) + 4 + iVar5);
      if (((iVar6 != 0) && (*(char *)(iVar6 + 9) != '\0')) &&
         (*(int *)(iVar6 + 0xc) = *(int *)(iVar6 + 0xc) + 1, *(char *)(iVar6 + 10) == '\0')) {
        for (iVar3 = *(int *)(iVar6 + 0x18); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x18)) {
          iVar6 = iVar3;
        }
        cVar2 = *(char *)(iVar6 + 10);
        while ((cVar2 != '\0' && (iVar3 = *(int *)(iVar6 + 0x14), iVar3 != 0))) {
          cVar2 = *(char *)(iVar3 + 10);
          iVar6 = iVar3;
        }
        for (iVar3 = *(int *)(iVar6 + 0x14); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x14)) {
          if (*(char *)(iVar3 + 10) != '\0') {
            FUN_0040c2a0();
          }
        }
        do {
          FUN_0040c280();
          iVar6 = *(int *)(iVar6 + 0x14);
        } while (iVar6 != 0);
      }
      param_1 = param_1 + 1;
      iVar5 = iVar5 + 0x10;
    } while (param_1 < *(int *)(iVar4 + 4));
  }
  return;
}


/* END FUNCTION 0x0040c380 */
