/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10103b30
 * Name: ___ascii_stricmp
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl ___ascii_stricmp(char *_Str1,char *_Str2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  
  bVar3 = 0xff;
  do {
    do {
      cVar4 = '\0';
      if (bVar3 == 0) goto LAB_10103b76;
      bVar3 = *_Str2;
      _Str2 = _Str2 + 1;
      bVar2 = *_Str1;
      _Str1 = _Str1 + 1;
    } while (bVar2 == bVar3);
    bVar1 = bVar3 + 0xbf + (-((byte)(bVar3 + 0xbf) < 0x1a) & 0x20U) + 0x41;
    bVar2 = bVar2 + 0xbf;
    bVar3 = bVar2 + (-(bVar2 < 0x1a) & 0x20U) + 0x41;
  } while (bVar3 == bVar1);
  cVar4 = (bVar3 < bVar1) * -2 + '\x01';
LAB_10103b76:
  return (int)cVar4;
}


/* END FUNCTION 0x10103b30 */
