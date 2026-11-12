/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10054f70
 * Name: FUN_10054f70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_10054f70(undefined4 param_1)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 local_4;
  
  piVar2 = (int *)FUN_10026f80();
  uVar3 = FUN_1001f470(&local_4,0x20,1);
  if ((char)uVar3 == '\0') {
    return uVar3;
  }
  piVar4 = (int *)FUN_100295f0(local_4);
  uVar6 = 0;
  uVar3 = 0;
  if (piVar2[1] != 0) {
    iVar5 = 0;
    do {
      cVar1 = FUN_10054de0(param_1,*(undefined4 *)(*piVar4 + uVar6 * 4),
                           *(undefined4 *)(*piVar2 + 0x20 + iVar5));
      if (cVar1 == '\0') {
        uVar3 = FUN_100298d0(local_4);
        return uVar3 & 0xffffff00;
      }
      uVar3 = piVar2[1];
      uVar6 = uVar6 + 1;
      iVar5 = iVar5 + 0x24;
    } while (uVar6 < uVar3);
  }
  return CONCAT31((int3)(uVar3 >> 8),1);
}


/* END FUNCTION 0x10054f70 */
