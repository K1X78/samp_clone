/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100547a0
 * Name: FUN_100547a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100547a0(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10115c28;
  local_c = ExceptionList;
  local_4 = 0;
  uVar4 = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_10054580();
  if (iVar1 != 0) {
    do {
      iVar1 = FUN_10054570(uVar4);
      if (*(char *)(iVar1 + 4) != '\0') {
        puVar2 = (undefined4 *)FUN_10054570(uVar4);
        _free((void *)*puVar2);
      }
      uVar4 = uVar4 + 1;
      uVar3 = FUN_10054580();
    } while (uVar4 < uVar3);
  }
  local_4 = 0xffffffff;
  FUN_10054740();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x100547a0 */
