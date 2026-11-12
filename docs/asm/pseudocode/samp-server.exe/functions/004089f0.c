/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004089f0
 * Name: FUN_004089f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_004089f0(undefined4 param_1,byte *param_2)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  bool bVar5;
  bool bVar6;
  
  iVar2 = 0x12;
  bVar5 = false;
  iVar1 = 0;
  bVar6 = true;
  pbVar3 = param_2;
  pbVar4 = &DAT_004b6a78;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *pbVar3 < *pbVar4;
    bVar6 = *pbVar3 == *pbVar4;
    pbVar3 = pbVar3 + 1;
    pbVar4 = pbVar4 + 1;
  } while (bVar6);
  if (!bVar6) {
    iVar1 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
  }
  iVar1 = iVar1 * 10;
  if (iVar1 == 0) {
    iVar1 = (char)param_2[0x12] + -0x38;
  }
  return iVar1;
}


/* END FUNCTION 0x004089f0 */
