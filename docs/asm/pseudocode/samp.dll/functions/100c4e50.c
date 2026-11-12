/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c4e50
 * Name: FUN_100c4e50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100c4e50(int param_1,char *param_2,uint *param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = *(uint *)(param_1 + 0x8c);
  if (*param_3 < 5) {
    return 5;
  }
  *param_3 = 5;
  *param_2 = (*(char *)(param_1 + 0x50) * '\x05' + *(char *)(param_1 + 0x4c)) * '\t' +
             *(char *)(param_1 + 0x48);
  if (uVar3 < 0x400000) {
    uVar2 = 0xb;
    do {
      bVar1 = (byte)uVar2;
      if (uVar3 <= (uint)(2 << (bVar1 & 0x1f))) {
        iVar4 = 2;
LAB_100c4eda:
        uVar3 = iVar4 << (bVar1 & 0x1f);
        break;
      }
      if (uVar3 <= (uint)(3 << (bVar1 & 0x1f))) {
        iVar4 = 3;
        goto LAB_100c4eda;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x1f);
  }
  else if (uVar3 < 0xfff00000) {
    uVar3 = uVar3 + 0xfffff & 0xfff00000;
  }
  param_2[2] = (char)(uVar3 >> 8);
  param_2[1] = (char)uVar3;
  param_2[3] = (char)(uVar3 >> 0x10);
  param_2[4] = (char)(uVar3 >> 0x18);
  return 0;
}


/* END FUNCTION 0x100c4e50 */
