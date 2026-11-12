/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c4b00
 * Name: FUN_100c4b00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100c4b00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  int unaff_ESI;
  
  uVar1 = *(uint *)(unaff_ESI + 0x8c);
  uVar2 = 0;
  do {
    bVar4 = (byte)uVar2;
    if (uVar1 <= (uint)(1 << (bVar4 & 0x1f))) break;
    if (uVar1 <= (uint)(1 << (bVar4 + 1 & 0x1f))) {
      uVar2 = uVar2 + 1;
      break;
    }
    if (uVar1 <= (uint)(1 << (bVar4 + 2 & 0x1f))) {
      uVar2 = uVar2 + 2;
      break;
    }
    uVar2 = uVar2 + 3;
  } while (uVar2 < 0x1b);
  *(uint *)(unaff_ESI + 0x88) = uVar2 * 2;
  *(undefined4 *)(unaff_ESI + 0x6c) = 0;
  *(undefined4 *)(unaff_ESI + 0x90) = 0;
  iVar3 = FUN_100c4860(param_1,param_3);
  if (iVar3 == 0) {
    FUN_100c4960();
    FUN_100c4a90();
    *(undefined4 *)(unaff_ESI + 0x78) = 0;
    *(undefined4 *)(unaff_ESI + 0x7c) = 0;
    iVar3 = 0;
  }
  return iVar3;
}


/* END FUNCTION 0x100c4b00 */
