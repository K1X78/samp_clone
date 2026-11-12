/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004374a0
 * Name: FUN_004374a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_004374a0(int param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  undefined **ppuVar3;
  
  iVar1 = 10;
  FUN_00407e50(*(int *)(param_1 + 0x44));
  if ((param_2 != (byte *)0x0) && (*param_2 != 0)) {
    iVar1 = FUN_0040ef20(param_2);
    if (iVar1 < 0) {
      ppuVar3 = (undefined **)0x4b8920;
      uVar2 = 1;
      goto LAB_004374ed;
    }
  }
  uVar2 = FUN_004251b0(iVar1);
  ppuVar3 = (undefined **)0x0;
LAB_004374ed:
  FUN_0042f990(uVar2,ppuVar3);
  uVar2 = FUN_004340c0(uVar2);
  FUN_00407e90(*(int *)(param_1 + 0x44));
  return uVar2;
}


/* END FUNCTION 0x004374a0 */
