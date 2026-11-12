/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044de90
 * Name: FUN_0044de90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0044de90(uint *param_1)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  
  FUN_0044dc30(param_1,1);
  iVar1 = (int)*param_1 >> 3;
  uVar3 = *param_1 & 7;
  if (uVar3 == 0) {
    *(undefined1 *)(iVar1 + param_1[3]) = 0x80;
    *param_1 = *param_1 + 1;
    return;
  }
  pbVar2 = (byte *)(iVar1 + param_1[3]);
  *pbVar2 = *pbVar2 | (byte)(0x80 >> (sbyte)uVar3);
  *param_1 = *param_1 + 1;
  return;
}


/* END FUNCTION 0x0044de90 */
