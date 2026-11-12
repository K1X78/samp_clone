/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004326d0
 * Name: FUN_004326d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_004326d0(int *param_1)

{
  int *piVar1;
  int unaff_EBX;
  int iVar2;
  int *piVar3;
  int local_4;
  
  if (*(int *)(unaff_EBX + 0x24) + *(int *)(unaff_EBX + 0x14) != 0) {
    iVar2 = 0;
    if (0 < *(int *)(unaff_EBX + 0x14)) {
      do {
        FUN_00414e70(0,10);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(unaff_EBX + 0x14));
    }
    piVar3 = *(int **)(unaff_EBX + 0x20);
    local_4 = 0;
    if (0 < *(int *)(unaff_EBX + 0x24)) {
      do {
        FUN_00414e70(0,10);
        if (-1 < piVar3[3]) {
          piVar1 = *(int **)(*piVar3 + 0x10);
          if ((piVar1 == (int *)0x0) || (*piVar1 != 1)) {
            FUN_00418b00((undefined **)"DISTINCT aggregates must have exactly one argument");
            piVar3[3] = -1;
          }
          else {
            piVar1 = FUN_00431bd0(param_1,piVar1);
            FUN_004197c0(0,piVar3[3],0x29,(char *)piVar1,-0x10);
          }
        }
        local_4 = local_4 + 1;
        piVar3 = piVar3 + 4;
      } while (local_4 < *(int *)(unaff_EBX + 0x24));
    }
  }
  return;
}


/* END FUNCTION 0x004326d0 */
