/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042d5d0
 * Name: FUN_0042d5d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_0042d5d0(int param_1,undefined4 *param_2)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int extraout_ECX;
  
  if ((*(byte *)(param_1 + 0x43) < 2) || (uVar4 = FUN_0042d320(), uVar4 == 0)) {
    *(undefined1 *)(param_1 + 0x41) = 0;
    if (*(char *)(param_1 + 0x43) == '\0') {
      *param_2 = 1;
      return 0;
    }
    iVar3 = *(int *)(param_1 + 0x50);
    *(undefined4 *)(param_1 + 0x50) = 0;
    if (iVar3 < 0) {
      *param_2 = 0;
      return 0;
    }
    if (*(char *)(*(int *)(param_1 + 0x60 + *(short *)(param_1 + 0x5c) * 4) + 3) == '\0') {
      FUN_00408f80();
      uVar4 = FUN_0042add0(extraout_ECX);
      if (uVar4 == 0) {
        uVar4 = FUN_0042afd0();
        *param_2 = 0;
        return uVar4;
      }
    }
    else {
      sVar2 = *(short *)(param_1 + 0xb0 + *(short *)(param_1 + 0x5c) * 2);
      while (sVar2 == 0) {
        if (*(short *)(param_1 + 0x5c) == 0) {
          *(undefined1 *)(param_1 + 0x43) = 0;
          *param_2 = 1;
          return 0;
        }
        FUN_004286e0();
        sVar2 = *(short *)(param_1 + 0xb0 + *(short *)(param_1 + 0x5c) * 2);
      }
      *(undefined2 *)(param_1 + 0x3e) = 0;
      *(undefined1 *)(param_1 + 0x42) = 0;
      psVar1 = (short *)(param_1 + 0xb0 + *(short *)(param_1 + 0x5c) * 2);
      *psVar1 = *psVar1 + -1;
      iVar3 = *(int *)(param_1 + 0x60 + *(short *)(param_1 + 0x5c) * 4);
      if ((*(char *)(iVar3 + 2) != '\0') && (*(char *)(iVar3 + 3) == '\0')) {
        uVar4 = FUN_0042d5d0(param_1,param_2);
        *param_2 = 0;
        return uVar4;
      }
      uVar4 = 0;
      *param_2 = 0;
    }
  }
  return uVar4;
}


/* END FUNCTION 0x0042d5d0 */
