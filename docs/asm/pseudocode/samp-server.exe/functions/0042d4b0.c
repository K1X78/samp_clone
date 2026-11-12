/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042d4b0
 * Name: FUN_0042d4b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_0042d4b0(int param_1,undefined4 *param_2)

{
  short *psVar1;
  ushort uVar2;
  int iVar3;
  short sVar4;
  uint uVar5;
  int extraout_ECX;
  
  if ((1 < *(byte *)(param_1 + 0x43)) && (uVar5 = FUN_0042d320(), uVar5 != 0)) {
    return uVar5;
  }
  if (*(char *)(param_1 + 0x43) == '\0') {
    *param_2 = 1;
    return 0;
  }
  iVar3 = *(int *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (iVar3 < 1) {
    iVar3 = *(int *)(param_1 + 0x60 + *(short *)(param_1 + 0x5c) * 4);
    psVar1 = (short *)(param_1 + 0xb0 + *(short *)(param_1 + 0x5c) * 2);
    *psVar1 = *psVar1 + 1;
    sVar4 = *(short *)(param_1 + 0x5c);
    uVar2 = *(ushort *)(param_1 + 0xb0 + sVar4 * 2);
    *(undefined2 *)(param_1 + 0x3e) = 0;
    *(undefined1 *)(param_1 + 0x42) = 0;
    if (uVar2 < *(ushort *)(iVar3 + 0x10)) {
      *param_2 = 0;
      if (*(char *)(iVar3 + 3) == '\0') {
        uVar5 = FUN_0042af70();
        return uVar5;
      }
    }
    else {
      if (*(char *)(iVar3 + 3) == '\0') {
        FUN_00408f80();
        uVar5 = FUN_0042add0(extraout_ECX);
        if (uVar5 != 0) {
          return uVar5;
        }
        uVar5 = FUN_0042af70();
        *param_2 = 0;
        return uVar5;
      }
      do {
        if (sVar4 == 0) {
          *param_2 = 1;
          *(undefined1 *)(param_1 + 0x43) = 0;
          return 0;
        }
        FUN_004286e0();
        sVar4 = *(short *)(param_1 + 0x5c);
        iVar3 = *(int *)(param_1 + 0x60 + sVar4 * 4);
      } while (*(ushort *)(iVar3 + 0x10) <= *(ushort *)(param_1 + 0xb0 + sVar4 * 2));
      *param_2 = 0;
      if (*(char *)(iVar3 + 2) != '\0') {
        uVar5 = FUN_0042d4b0(param_1,param_2);
        return uVar5;
      }
    }
    return 0;
  }
  *param_2 = 0;
  return 0;
}


/* END FUNCTION 0x0042d4b0 */
