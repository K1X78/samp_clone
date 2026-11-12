/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00419710
 * Name: FUN_00419710
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00419710(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *unaff_EBX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  FUN_0040d1e0();
  puVar3 = param_1;
  puVar4 = unaff_EBX;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(byte *)((int)unaff_EBX + 0x1d) = *(byte *)((int)unaff_EBX + 0x1d) & 0xfb;
  if (((*(ushort *)(unaff_EBX + 7) & 0x12) != 0) && ((*(byte *)((int)param_1 + 0x1d) & 8) == 0)) {
    *(ushort *)(unaff_EBX + 7) = *(ushort *)(unaff_EBX + 7) | 0x1000;
    uVar1 = FUN_004196b0();
    return uVar1;
  }
  return 0;
}


/* END FUNCTION 0x00419710 */
