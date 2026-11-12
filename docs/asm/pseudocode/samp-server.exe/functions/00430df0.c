/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00430df0
 * Name: FUN_00430df0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00430df0(undefined4 param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  
  pbVar2 = (byte *)FUN_0041ffb0();
  uVar3 = FUN_0041ff70();
  if ((pbVar2 != (byte *)0x0) &&
     (pbVar4 = (byte *)FUN_0042f250(uVar3 + 1,((int)uVar3 >> 0x1f) + (uint)(0xfffffffe < uVar3)),
     pbVar4 != (byte *)0x0)) {
    pbVar6 = pbVar4;
    for (uVar5 = uVar3 + 1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pbVar6 = *(undefined4 *)pbVar2;
      pbVar2 = pbVar2 + 4;
      pbVar6 = pbVar6 + 4;
    }
    for (uVar3 = uVar3 + 1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pbVar6 = *pbVar2;
      pbVar2 = pbVar2 + 1;
      pbVar6 = pbVar6 + 1;
    }
    bVar1 = *pbVar4;
    pbVar2 = pbVar4;
    while (bVar1 != 0) {
      *pbVar2 = (&DAT_004b28c8)[*pbVar2];
      pbVar6 = pbVar2 + 1;
      pbVar2 = pbVar2 + 1;
      bVar1 = *pbVar6;
    }
    FUN_0042fcb0(param_1,pbVar4,(void *)0xffffffff);
  }
  return;
}


/* END FUNCTION 0x00430df0 */
