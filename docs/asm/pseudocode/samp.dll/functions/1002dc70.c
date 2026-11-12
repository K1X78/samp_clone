/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1002dc70
 * Name: FUN_1002dc70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1002dc70(void)

{
  void *_Memory;
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = 0;
  iVar2 = thunk_FUN_1002cff0();
  if (iVar2 != 0) {
    do {
      FUN_1002d290(uVar6);
      cVar1 = FUN_100331a0(&stack0x00000004);
      if (cVar1 == '\0') {
        uVar6 = uVar6 + 1;
      }
      else {
        piVar3 = (int *)FUN_1002d290(uVar6);
        if (*(char *)(*piVar3 + 0x61d) != '\0') {
          puVar4 = (undefined4 *)FUN_1002d290(uVar6);
          _free(*(void **)*puVar4);
        }
        puVar4 = (undefined4 *)FUN_1002d290(uVar6);
        _Memory = (void *)*puVar4;
        if (_Memory != (void *)0x0) {
          FUN_1002c560();
          _free(_Memory);
        }
        FUN_1002d770(uVar6);
      }
      uVar5 = thunk_FUN_1002cff0();
    } while (uVar6 < uVar5);
  }
  return;
}


/* END FUNCTION 0x1002dc70 */
