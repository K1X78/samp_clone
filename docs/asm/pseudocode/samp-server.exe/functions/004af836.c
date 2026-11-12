/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004af836
 * Name: __setmode_lk
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl __setmode_lk(uint param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = &DAT_0051c940 + ((int)param_1 >> 5);
  iVar4 = (param_1 & 0x1f) * 0x24;
  bVar2 = *(byte *)(*piVar3 + 4 + iVar4);
  if (param_2 == 0x8000) {
    pbVar1 = (byte *)(*piVar3 + 4 + iVar4);
    *pbVar1 = *pbVar1 & 0x7f;
  }
  else {
    if (param_2 != 0x4000) {
      piVar3 = FUN_004a5f9b();
      *piVar3 = 0x16;
      return -1;
    }
    pbVar1 = (byte *)(*piVar3 + 4 + iVar4);
    *pbVar1 = *pbVar1 | 0x80;
  }
  return (-(uint)((bVar2 & 0x80) != 0) & 0xffffc000) + 0x8000;
}


/* END FUNCTION 0x004af836 */
