/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x101105ee
 * Name: __setmode_lk
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __setmode_lk(uint param_1,int param_2)

{
  int *piVar1;
  byte *pbVar2;
  byte bVar3;
  undefined4 *puVar4;
  int iVar5;
  
  piVar1 = &DAT_102ad560 + ((int)param_1 >> 5);
  iVar5 = (param_1 & 0x1f) * 0x24;
  bVar3 = *(byte *)(*piVar1 + 4 + iVar5);
  if (param_2 == 0x8000) {
    pbVar2 = (byte *)(*piVar1 + 4 + iVar5);
    *pbVar2 = *pbVar2 & 0x7f;
  }
  else {
    if (param_2 != 0x4000) {
      puVar4 = (undefined4 *)FUN_100fdc77();
      *puVar4 = 0x16;
      return -1;
    }
    pbVar2 = (byte *)(*piVar1 + 4 + iVar5);
    *pbVar2 = *pbVar2 | 0x80;
  }
  return (-(uint)((bVar3 & 0x80) != 0) & 0xffffc000) + 0x8000;
}


/* END FUNCTION 0x101105ee */
