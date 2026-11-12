/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10053fd0
 * Name: FUN_10053fd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10053fd0(int param_1,uint param_2)

{
  byte *pbVar1;
  void *_Memory;
  char cVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  void *pvStack_41c;
  int local_418 [257];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_10115bae;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  cVar2 = FUN_10053b40(&stack0x0000000c);
  if (cVar2 != '\0') {
    puVar3 = (undefined4 *)FUN_10053af0(&stack0x0000000c);
    _Memory = (void *)*puVar3;
    if (_Memory != (void *)0x0) {
      FUN_10026a60();
      _free(_Memory);
    }
  }
  if (param_2 != 0) {
    uVar4 = 0;
    piVar6 = local_418;
    for (iVar5 = 0x100; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar6 = 0;
      piVar6 = piVar6 + 1;
    }
    if (param_2 != 0) {
      do {
        pbVar1 = (byte *)(uVar4 + param_1);
        uVar4 = uVar4 + 1;
        local_418[*pbVar1] = local_418[*pbVar1] + 1;
      } while (uVar4 < param_2);
    }
    pvStack_41c = operator_new(0x604);
    uStack_c = 0;
    if (pvStack_41c == (void *)0x0) {
      pvStack_41c = (void *)0x0;
    }
    else {
      pvStack_41c = (void *)FUN_10026220();
    }
    uStack_c = 0xffffffff;
    FUN_10026a80(local_418);
    FUN_10053e80(&stack0x0000000c,&pvStack_41c);
  }
  ExceptionList = pvStack_14;
  return;
}


/* END FUNCTION 0x10053fd0 */
