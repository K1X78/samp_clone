/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100176a0
 * Name: FUN_100176a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100176a0(byte *param_1,undefined1 *param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  bVar1 = *param_1;
  if (bVar1 == 0) {
    *param_2 = 0;
    return;
  }
  do {
    uVar4 = (bVar1 & 3) << 4;
    bVar2 = param_1[1];
    if (bVar2 == 0) {
      uVar5 = 0x40;
      pbVar3 = param_1 + 1;
LAB_100176f7:
      param_1 = pbVar3;
      uVar6 = 0x40;
    }
    else {
      uVar4 = uVar4 | bVar2 >> 4;
      uVar5 = (bVar2 & 0xf) << 2;
      bVar2 = param_1[2];
      pbVar3 = param_1 + 2;
      if (bVar2 == 0) goto LAB_100176f7;
      uVar6 = bVar2 & 0x3f;
      uVar5 = uVar5 | bVar2 >> 6;
      param_1 = param_1 + 3;
    }
    *param_2 = PTR_s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_1013c4b4[bVar1 >> 2];
    param_2[1] = PTR_s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_1013c4b4[uVar4];
    param_2[2] = PTR_s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_1013c4b4[uVar5];
    param_2[3] = PTR_s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_1013c4b4[uVar6];
    bVar1 = *param_1;
    param_2 = param_2 + 4;
    if (bVar1 == 0) {
      *param_2 = 0;
      return;
    }
  } while( true );
}


/* END FUNCTION 0x100176a0 */
