/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00466080
 * Name: FUN_00466080
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_00466080(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int local_8 [2];
  
  uVar3 = 0;
  DAT_004f6348 = 0;
  puVar4 = &DAT_004f6350;
  for (iVar2 = 1000; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  iVar2 = *(int *)(param_1 + 0x30d50);
  *(undefined4 *)(param_1 + 0x30d54) = 0;
  if (-1 < iVar2) {
    do {
      if (((ushort)uVar3 < 1000) && (*(int *)(param_1 + 0x24de4 + (uVar3 & 0xffff) * 4) != 0)) {
        (**(code **)(**(int **)(DAT_004fc438 + 0x40) + 0xe8))(local_8,uVar3);
        iVar1 = 0;
        if (DAT_004f6348 != 0) {
          do {
            if ((&DAT_004f6350)[iVar1] == local_8[0]) goto LAB_00466112;
            iVar1 = iVar1 + 1;
          } while (iVar1 != DAT_004f6348);
        }
        (&DAT_004f6350)[DAT_004f6348] = local_8[0];
        DAT_004f6348 = DAT_004f6348 + 1;
        *(int *)(param_1 + 0x30d54) = *(int *)(param_1 + 0x30d54) + 1;
      }
LAB_00466112:
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 <= iVar2);
  }
  return;
}


/* END FUNCTION 0x00466080 */
