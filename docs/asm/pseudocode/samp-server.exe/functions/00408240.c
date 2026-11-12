/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00408240
 * Name: FUN_00408240
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __fastcall FUN_00408240(undefined4 param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  undefined4 *unaff_EDI;
  
  uVar3 = (uint)*param_2;
  pbVar4 = param_2 + 1;
  if (uVar3 < 0xc0) {
    *unaff_EDI = pbVar4;
    return uVar3;
  }
  uVar3 = (uint)(byte)(&DAT_004b2c00)[uVar3];
  bVar2 = *pbVar4;
  while ((bVar2 & 0xc0) == 0x80) {
    uVar3 = uVar3 * 0x40 + (bVar2 & 0x3f);
    pbVar1 = pbVar4 + 1;
    pbVar4 = pbVar4 + 1;
    bVar2 = *pbVar1;
  }
  if (((0x7f < (int)uVar3) && ((uVar3 & 0xfffff800) != 0xd800)) && ((uVar3 & 0xfffffffe) != 0xfffe))
  {
    *unaff_EDI = pbVar4;
    return uVar3;
  }
  *unaff_EDI = pbVar4;
  return 0xfffd;
}


/* END FUNCTION 0x00408240 */
