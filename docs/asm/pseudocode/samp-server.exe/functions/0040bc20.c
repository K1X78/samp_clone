/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040bc20
 * Name: FUN_0040bc20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl
FUN_0040bc20(int param_1,int *param_2,undefined4 *param_3,undefined4 param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  bool bVar8;
  
  piVar1 = (int *)(param_1 + 0x38);
  iVar4 = 2;
  bVar8 = true;
  piVar6 = (int *)(param_1 + 0x40);
  piVar7 = (int *)(param_5 + 8);
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    bVar8 = *piVar6 == *piVar7;
    piVar6 = piVar6 + 1;
    piVar7 = piVar7 + 1;
  } while (bVar8);
  if (bVar8) {
    iVar4 = FUN_00408f80();
    if (iVar4 != 0) {
      uVar5 = (uint)(*(char *)(param_1 + 0x2d) == '\0');
      FUN_0040baa0(piVar1,8,uVar5,piVar1);
      FUN_0040baa0(piVar1,(uint)*(ushort *)(param_1 + 0x18),uVar5,piVar1);
      iVar2 = FUN_00408f80();
      if (*piVar1 == iVar2) {
        iVar2 = FUN_00408f80();
        if (*(int *)(param_1 + 0x3c) == iVar2) {
          *param_2 = iVar4;
          uVar3 = FUN_00408f80();
          *param_3 = uVar3;
          return 1;
        }
      }
    }
  }
  return 0;
}


/* END FUNCTION 0x0040bc20 */
