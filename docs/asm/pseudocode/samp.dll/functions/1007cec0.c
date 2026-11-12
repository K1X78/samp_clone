/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1007cec0
 * Name: FUN_1007cec0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1007cec0(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_1007cbc0();
  iVar2 = FUN_1007a0c0();
  if (iVar2 != -1) {
    FUN_1007cbc0();
    uVar3 = FUN_1007a0c0();
    *param_1 = uVar3;
  }
  FUN_1007cbc0();
  cVar1 = FUN_1007a1c0();
  if (cVar1 != '\0') {
    param_1[0xc] = 0;
  }
  FUN_1007cbc0();
  cVar1 = FUN_1007a140();
  if (cVar1 != '\0') {
    param_1[0xc] = 1;
  }
  FUN_1007cbc0();
  cVar1 = FUN_1007a4c0();
  if (cVar1 == '\0') {
    FUN_1007cbc0();
    cVar1 = FUN_1007a440();
    if (cVar1 != '\0') {
      param_1[1] = 1;
    }
  }
  else {
    param_1[1] = 2;
  }
  FUN_1007cbc0();
  iVar2 = FUN_1007a340();
  if (iVar2 != 0) {
    FUN_1007cbc0();
    uVar3 = FUN_1007a340();
    param_1[4] = uVar3;
  }
  FUN_1007cbc0();
  iVar2 = FUN_1007a3c0();
  if (iVar2 != 0) {
    FUN_1007cbc0();
    uVar3 = FUN_1007a3c0();
    param_1[5] = uVar3;
  }
  FUN_1007cbc0();
  cVar1 = FUN_1007a540();
  if (cVar1 != '\0') {
    param_1[3] = param_1[3] & 0xffffffdf | 0x50;
    return;
  }
  FUN_1007cbc0();
  cVar1 = FUN_1007a5c0();
  if (cVar1 != '\0') {
    param_1[3] = param_1[3] & 0xffffffcf | 0x40;
    return;
  }
  FUN_1007cbc0();
  cVar1 = FUN_1007a640();
  if (cVar1 != '\0') {
    param_1[3] = param_1[3] & 0xffffffaf | 0x20;
  }
  return;
}


/* END FUNCTION 0x1007cec0 */
