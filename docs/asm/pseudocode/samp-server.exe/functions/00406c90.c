/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00406c90
 * Name: FUN_00406c90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __fastcall FUN_00406c90(byte *param_1)

{
  byte *in_EAX;
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *param_1 - 0x20 & 0x3f;
  pbVar2 = param_1 + 1;
  uVar4 = uVar1;
  if (uVar1 != 0) {
    do {
      if (0 < (int)uVar4) {
        *in_EAX = (byte)((int)(pbVar2[1] - 0x20) >> 4) & 3 | (*pbVar2 - 0x20) * '\x04';
        in_EAX = in_EAX + 1;
      }
      iVar3 = uVar4 - 2;
      if (0 < (int)(uVar4 - 1)) {
        *in_EAX = (byte)((int)(pbVar2[2] - 0x20) >> 2) & 0xf | pbVar2[1] << 4;
        in_EAX = in_EAX + 1;
      }
      uVar4 = uVar4 - 3;
      if (0 < iVar3) {
        *in_EAX = pbVar2[3] - 0x20 & 0x3f | pbVar2[2] << 6;
        in_EAX = in_EAX + 1;
      }
      pbVar2 = pbVar2 + 4;
    } while (0 < (int)uVar4);
  }
  return uVar1;
}


/* END FUNCTION 0x00406c90 */
