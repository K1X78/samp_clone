/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0046a910
 * Name: FUN_0046a910
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool __cdecl FUN_0046a910(byte *param_1,byte *param_2,uint *param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  bVar2 = DAT_004fb2f8;
  bVar1 = *param_2;
  uVar3 = *param_3 - 1;
  *param_3 = uVar3;
  pbVar5 = param_2 + 1;
  pbVar6 = param_1;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pbVar6 = *(undefined4 *)pbVar5;
    pbVar5 = pbVar5 + 4;
    pbVar6 = pbVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pbVar6 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    pbVar6 = pbVar6 + 1;
  }
  FUN_0046a8c0(0,bVar2,(int)param_1,*param_3);
  bVar2 = FUN_0046a890((int)param_1,*param_3);
  return (bool)('\x01' - (bVar2 != bVar1));
}


/* END FUNCTION 0x0046a910 */
