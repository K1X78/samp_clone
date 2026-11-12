/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1002d250
 * Name: FUN_1002d250
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_1002d250(uint param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  
  uVar1 = param_1;
  cVar3 = FUN_1002c7d0(param_1);
  if (cVar3 != '\0') {
    return 1;
  }
  uVar4 = FUN_1002cf30(uVar1,&param_1);
  uVar2 = param_1;
  if ((char)param_1 != '\0') {
    FUN_1002c7b0(uVar1,uVar4);
  }
  return uVar2 & 0xff;
}


/* END FUNCTION 0x1002d250 */
