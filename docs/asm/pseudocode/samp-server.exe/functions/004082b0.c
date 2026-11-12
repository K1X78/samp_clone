/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004082b0
 * Name: FUN_004082b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_004082b0(byte *param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  
  iVar3 = 0;
  if (param_2 < 0) {
    pbVar4 = (byte *)0xffffffff;
  }
  else {
    pbVar4 = param_1 + param_2;
  }
  bVar2 = *param_1;
  while ((bVar2 != 0 && (param_1 < pbVar4))) {
    bVar2 = *param_1;
    param_1 = param_1 + 1;
    if (0xbf < bVar2) {
      bVar2 = *param_1;
      while ((bVar2 & 0xc0) == 0x80) {
        pbVar1 = param_1 + 1;
        param_1 = param_1 + 1;
        bVar2 = *pbVar1;
      }
    }
    bVar2 = *param_1;
    iVar3 = iVar3 + 1;
  }
  return iVar3;
}


/* END FUNCTION 0x004082b0 */
