/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1007e000
 * Name: FUN_1007e000
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_1007e000(char param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  FUN_1007cbc0();
  iVar1 = FUN_100783e0();
  if (iVar1 == 0) {
    iVar1 = FUN_10083da0();
    iVar5 = iVar1;
    FUN_1007cbc0(iVar1);
    FUN_100783a0(iVar5);
  }
  else if (param_1 == '\0') {
    return iVar1;
  }
  uVar2 = FUN_1007d360();
  FUN_1007cbc0();
  uVar3 = FUN_1007ad80();
  FUN_1007cbc0(uVar3);
  uVar4 = FUN_1007a840();
  FUN_100839b0(uVar2,uVar4,uVar3);
  return iVar1;
}


/* END FUNCTION 0x1007e000 */
