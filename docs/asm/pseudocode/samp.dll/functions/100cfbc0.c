/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100cfbc0
 * Name: FUN_100cfbc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


byte * __fastcall FUN_100cfbc0(undefined4 param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  
  pbVar2 = (byte *)FUN_100cd220("%s:%d",param_1);
  if (pbVar2 != (byte *)0x0) {
    bVar1 = *pbVar2;
    for (pbVar4 = pbVar2; (bVar1 != 0 && (*pbVar4 != 0x3a)); pbVar4 = pbVar4 + 1) {
      iVar3 = _tolower((uint)*pbVar4);
      *pbVar4 = (byte)iVar3;
      bVar1 = pbVar4[1];
    }
  }
  return pbVar2;
}


/* END FUNCTION 0x100cfbc0 */
