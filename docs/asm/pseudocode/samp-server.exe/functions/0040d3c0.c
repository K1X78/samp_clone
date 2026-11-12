/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040d3c0
 * Name: FUN_0040d3c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0040d3c0(undefined4 *param_1,ushort param_2)

{
  int iVar1;
  undefined4 *unaff_EBX;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  FUN_0040d1e0();
  puVar2 = param_1;
  puVar3 = unaff_EBX;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  unaff_EBX[8] = 0;
  if ((*(byte *)((int)param_1 + 0x1d) & 8) == 0) {
    *(ushort *)(unaff_EBX + 7) = *(ushort *)(unaff_EBX + 7) & 0xe3ff | param_2;
  }
  return;
}


/* END FUNCTION 0x0040d3c0 */
