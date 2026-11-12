/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100223e0
 * Name: FUN_100223e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_100223e0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  
  uVar1 = param_1;
  cVar3 = FUN_10020c00(param_1);
  if (cVar3 != '\0') {
    return 1;
  }
  uVar4 = FUN_10021800(uVar1,&param_1);
  uVar2 = param_1;
  if ((char)param_1 != '\0') {
    FUN_10020bd0(uVar1,uVar4);
  }
  return uVar2 & 0xff;
}


/* END FUNCTION 0x100223e0 */
