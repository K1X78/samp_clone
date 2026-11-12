/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004073f0
 * Name: FUN_004073f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_004073f0(byte *param_1)

{
  byte **ppbVar1;
  byte bVar2;
  byte *pbVar3;
  byte **ppbVar4;
  byte **ppbVar5;
  int iVar6;
  byte *pbVar7;
  int local_10;
  
  local_10 = 0;
  ppbVar4 = &param_1;
  while( true ) {
    pbVar7 = ppbVar4[1];
    ppbVar1 = ppbVar4 + 2;
    ppbVar5 = ppbVar4 + 3;
    pbVar3 = ppbVar4[4];
    ppbVar4 = ppbVar4 + 5;
    iVar6 = 0;
    while (pbVar7 != (byte *)0x0) {
      bVar2 = *param_1;
      pbVar7 = pbVar7 + -1;
      if (((&DAT_004b29c8)[bVar2] & 4) == 0) {
        return local_10;
      }
      param_1 = param_1 + 1;
      iVar6 = (char)bVar2 + -0x30 + iVar6 * 10;
    }
    if (((iVar6 < (int)*ppbVar1) || ((int)*ppbVar5 < iVar6)) ||
       ((pbVar3 != (byte *)0x0 && (pbVar3 != (byte *)(int)(char)*param_1)))) break;
    param_1 = param_1 + 1;
    local_10 = local_10 + 1;
    *(int *)*ppbVar4 = iVar6;
    if (pbVar3 == (byte *)0x0) {
      return local_10;
    }
  }
  return local_10;
}


/* END FUNCTION 0x004073f0 */
