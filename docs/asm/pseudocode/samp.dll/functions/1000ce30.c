/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000ce30
 * Name: FUN_1000ce30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_1000ce30(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  uVar1 = param_1[1];
  uVar2 = 0;
  if (uVar1 != 0) {
    bVar5 = uVar1 != 0;
    do {
      if (bVar5) {
        iVar4 = *(int *)(*param_1 + uVar2 * 4);
      }
      else {
        iVar4 = 0;
      }
      if ((*(int *)(iVar4 + 0x10) == param_2) && (*(char *)(iVar4 + 7) == '\x01')) {
        iVar3 = FUN_1000c1c0(*(undefined4 *)(iVar4 + 0xc),*(undefined4 *)(iVar4 + 0x10),
                             *(undefined4 *)(iVar4 + 0x46),*(undefined4 *)(iVar4 + 0x4a));
        if (iVar3 == 0) {
          return 0;
        }
        *(undefined1 *)(iVar4 + 0x59) = 0;
        *(undefined1 *)(iVar4 + 0x58) = 1;
        return 1;
      }
      uVar2 = uVar2 + 1;
      bVar5 = uVar2 < uVar1;
    } while (uVar2 != uVar1);
  }
  return 0;
}


/* END FUNCTION 0x1000ce30 */
