/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a3840
 * Name: FUN_100a3840
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_100a3840(int param_1)

{
  int iVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (param_1 == 0) {
    return 0xffff;
  }
  iVar1 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 8);
  uVar3 = FUN_100137c0(param_1);
  if (((short)uVar3 == -1) && (sVar2 = FUN_1001e650(param_1), sVar2 != -1)) {
    uVar5 = 0;
    if (-1 < *(int *)(iVar1 + 0x22)) {
      do {
        if (((ushort)uVar5 < 0x3ec) && (*(int *)(iVar1 + 0xfd6 + (uVar5 & 0xffff) * 4) != 0)) {
          iVar4 = *(int *)(iVar1 + (uVar5 & 0xffff) * 4 + 0x26);
          if (iVar4 == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = *(int *)(iVar4 + 8);
          }
          uVar3 = uVar5;
          if (*(short *)(iVar4 + 2) == sVar2) break;
        }
        uVar5 = uVar5 + 1;
        if (*(int *)(iVar1 + 0x22) < (int)uVar5) {
          return 0xffff;
        }
      } while( true );
    }
  }
  return uVar3 & 0xffff;
}


/* END FUNCTION 0x100a3840 */
