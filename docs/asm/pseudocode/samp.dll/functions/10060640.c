/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10060640
 * Name: FUN_10060640
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10060640(int param_1,uint param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  
  param_3 = param_3 ^ 0x92f9;
  uVar2 = 0;
  if (param_2 != 0) {
    do {
      bVar1 = *(byte *)(uVar2 + param_1);
      *(byte *)(uVar2 + param_1) = bVar1 ^ (byte)(param_3 >> 8);
      param_3 = (bVar1 + param_3) * -0x29d7 + 0x664a;
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_2);
  }
  return;
}


/* END FUNCTION 0x10060640 */
