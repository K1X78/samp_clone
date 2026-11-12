/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f40b0
 * Name: FUN_100f40b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100f40b0(byte *param_1,int param_2)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined1 local_500 [256];
  undefined1 local_400 [1024];
  
  iVar4 = param_2;
  if ((*(int *)(param_2 + 8) == 0) || (*(int *)(param_2 + 0xc) == 0)) {
    while( true ) {
      bVar2 = *param_1;
      while ((bVar2 != 0 && (iVar5 = _isspace((uint)bVar2), iVar5 != 0))) {
        param_1 = param_1 + 1;
        bVar2 = *param_1;
      }
      iVar5 = FUN_100f8080(param_1,local_500,local_400,&param_1);
      if (iVar5 == 0) break;
      iVar5 = FUN_100de830(local_500,"realm");
      if (iVar5 != 0) {
        pcVar6 = (char *)(*(code *)PTR___strdup_101554c4)(local_400);
        if (pcVar6 == (char *)0x0) {
          return 0x1b;
        }
        (*(code *)PTR__free_101554bc)(*(undefined4 *)(iVar4 + 8));
        *(char **)(iVar4 + 8) = pcVar6;
        pcVar1 = pcVar6 + 1;
        do {
          cVar3 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar3 != '\0');
        uVar7 = FUN_100d9a10((int)pcVar6 - (int)pcVar1);
        *(undefined4 *)(iVar4 + 0xc) = uVar7;
      }
      bVar2 = *param_1;
      while ((bVar2 != 0 && (iVar5 = _isspace((uint)bVar2), iVar5 != 0))) {
        param_1 = param_1 + 1;
        bVar2 = *param_1;
      }
      if (*param_1 == 0x2c) {
        param_1 = param_1 + 1;
      }
    }
  }
  return 0;
}


/* END FUNCTION 0x100f40b0 */
