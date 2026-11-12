/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00431bd0
 * Name: FUN_00431bd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int * __cdecl FUN_00431bd0(int *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  
  iVar2 = *param_2;
  iVar3 = *param_1;
  piVar4 = FUN_00417b70();
  if (piVar4 != (int *)0x0) {
    piVar4[2] = (int)(piVar4 + iVar2 + 3);
    *(short *)((int)piVar4 + 6) = (short)iVar2;
    uVar1 = *(undefined1 *)(*(int *)(*(int *)(iVar3 + 8) + 0xc) + 0x49);
    *piVar4 = iVar3;
    iVar7 = 0;
    *(undefined1 *)(piVar4 + 1) = uVar1;
    puVar6 = (undefined4 *)param_2[3];
    if (0 < iVar2) {
      param_2 = piVar4 + 3;
      do {
        piVar5 = FUN_004300f0((char *)*puVar6);
        if (piVar5 == (int *)0x0) {
          piVar5 = *(int **)(iVar3 + 0x2c);
        }
        *param_2 = (int)piVar5;
        *(undefined1 *)(iVar7 + piVar4[2]) = *(undefined1 *)(puVar6 + 3);
        iVar7 = iVar7 + 1;
        param_2 = param_2 + 1;
        puVar6 = puVar6 + 5;
      } while (iVar7 < iVar2);
    }
  }
  return piVar4;
}


/* END FUNCTION 0x00431bd0 */
