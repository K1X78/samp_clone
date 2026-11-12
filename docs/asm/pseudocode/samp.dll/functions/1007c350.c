/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1007c350
 * Name: FUN_1007c350
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1007c350(void)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  void *_Memory;
  undefined4 *puVar5;
  char unaff_retaddr;
  undefined4 uVar6;
  
  piVar2 = (int *)FUN_1007b4a0();
  if (piVar2 != (int *)0x0) {
    uVar6 = 1;
    FUN_1007cbc0(1);
    FUN_10079a40(uVar6);
    FUN_1007cbc0();
    cVar1 = FUN_10079c00();
    if (cVar1 == '\x01') {
      FUN_1007cbc0();
      pcVar3 = (code *)FUN_1007aa40();
      if (pcVar3 != (code *)0x0) {
        FUN_1007cbc0();
        uVar6 = FUN_1007af80();
        (*pcVar3)(uVar6);
      }
      uVar6 = 0;
      FUN_1007cbc0(0);
      FUN_10079bc0(uVar6);
      FUN_10099260();
      FUN_10098630();
    }
    FUN_1007cbc0();
    cVar1 = FUN_10079b80();
    if (cVar1 == '\x01') {
      FUN_1007cbc0();
      pcVar3 = (code *)FUN_1007aac0();
      if (pcVar3 != (code *)0x0) {
        FUN_1007cbc0();
        uVar6 = FUN_1007b000();
        (*pcVar3)(uVar6);
      }
      uVar6 = 0;
      FUN_1007cbc0(0);
      FUN_10079b40(uVar6);
      FUN_10099260();
      FUN_100986f0();
    }
    uVar6 = 0;
    FUN_1007cbc0(0);
    FUN_10079a40(uVar6);
    iVar4 = (**(code **)(*piVar2 + 8))(piVar2);
    if (iVar4 != 0) {
      FUN_1007bf40(0x80040904);
    }
    uVar6 = 0;
    FUN_1007cbc0(0);
    FUN_10078320(uVar6);
    if (unaff_retaddr != '\0') {
      FUN_1007cbc0();
      _Memory = (void *)FUN_10078460();
      if (_Memory != (void *)0x0) {
        _free(_Memory);
      }
      uVar6 = 0;
      FUN_1007cbc0(0);
      FUN_10078420(uVar6);
    }
    FUN_1007cbc0();
    puVar5 = (undefined4 *)FUN_100784a0();
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    FUN_1007cbc0();
    puVar5 = (undefined4 *)FUN_100784e0();
    uVar6 = 0;
    for (iVar4 = 0x4c; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    FUN_1007cbc0(0);
    FUN_10079840(uVar6);
  }
  return;
}


/* END FUNCTION 0x1007c350 */
