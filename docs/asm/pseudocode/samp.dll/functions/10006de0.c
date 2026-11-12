/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10006de0
 * Name: FUN_10006de0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10006de0(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  float10 fVar5;
  
  iVar2 = FUN_100a70f0();
  iVar4 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0xc);
  if ((((*(short *)(iVar2 + 0x10) != 0) && (*(short *)(iVar2 + 0x40) == 0)) &&
      (uVar3 = FUN_1001e6c0(), (ushort)uVar3 < 2000)) &&
     (*(int *)(iVar4 + 0x3074 + (uVar3 & 0xffff) * 4) != 0)) {
    iVar4 = FUN_10001120(uVar3);
    fVar5 = (float10)FUN_1009ef00();
    if (fVar5 < (float10)8.0) {
      cVar1 = FUN_100ab870();
      if (cVar1 == '.') {
        FUN_100abc80(0,0);
      }
      FUN_100ac030(*(undefined4 *)(iVar4 + 0x44),1);
      FUN_10005920(uVar3,1);
    }
  }
  return;
}


/* END FUNCTION 0x10006de0 */
