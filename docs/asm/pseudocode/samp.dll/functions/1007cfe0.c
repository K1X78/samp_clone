/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1007cfe0
 * Name: FUN_1007cfe0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1007cfe0(char param_1,char param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  FUN_1007cbc0();
  iVar1 = FUN_10079e40();
  iVar1 = iVar1 + (uint)(param_1 != '\0') * 2 + -1;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  iVar2 = iVar1;
  FUN_1007cbc0(iVar1);
  FUN_10079e00(iVar2);
  FUN_1007cbc0();
  iVar2 = FUN_10079dc0();
  iVar2 = iVar2 + (uint)(param_2 != '\0') * 2 + -1;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  iVar4 = iVar2;
  FUN_1007cbc0(iVar2);
  FUN_10079d80(iVar4);
  FUN_10095e30();
  if (iVar1 < 1) {
    FUN_10093060();
  }
  else {
    FUN_100930d0();
  }
  uVar3 = (uint)(0 < iVar2);
  FUN_1007cbc0(uVar3);
  FUN_10079cc0(uVar3);
  uVar3 = (uint)(0 < iVar1);
  FUN_1007cbc0(uVar3);
  FUN_10079d40(uVar3);
  return;
}


/* END FUNCTION 0x1007cfe0 */
