/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004735b0
 * Name: FUN_004735b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 __cdecl FUN_004735b0(int *param_1,int param_2)

{
  int *piVar1;
  char *pcVar2;
  int *piVar3;
  byte *pbVar4;
  char *pcVar5;
  int iVar6;
  undefined2 unaff_BX;
  undefined4 unaff_ESI;
  undefined2 unaff_DI;
  undefined4 *puVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined4 *puStack_102c;
  undefined1 local_101c [12];
  undefined4 local_1010 [1025];
  undefined4 uStack_c;
  
  uStack_c = 0x4735c0;
  puVar7 = local_1010;
  for (iVar6 = 0x400; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  *(undefined1 *)puVar7 = 0;
  piVar1 = *(int **)(DAT_004fc438 + 0x40);
  puStack_102c = *(undefined4 **)(param_2 + 4);
  uVar9 = 0x47;
  (**(code **)(*piVar1 + 0xec))(local_101c);
  uVar8 = 0x47;
  piVar3 = (int *)(**(code **)(*piVar1 + 0x114))(unaff_ESI,CONCAT22(uVar9,unaff_BX));
  pbVar4 = (byte *)(**(code **)(*piVar1 + 0x90))(puStack_102c,CONCAT22(uVar8,unaff_DI));
  if (pbVar4 == (byte *)0x0) {
    _sprintf(&stack0xffffefd8,"Network Active: 0\nNetwork State: 0\n");
  }
  else {
    _sprintf(&stack0xffffefd8,"Network Active: %d\nNetwork State: %d\n",(uint)*pbVar4,
             *(undefined4 *)(pbVar4 + 0xcb0));
  }
  if (piVar3 != (int *)0x0) {
    pcVar2 = &stack0xffffefd8;
    do {
      pcVar5 = pcVar2;
      pcVar2 = pcVar5 + 1;
    } while (*pcVar5 != '\0');
    FUN_0044f110(piVar3,pcVar5,1);
  }
  FUN_00403100(param_1,*(int *)(param_2 + 8),(int *)&puStack_102c);
  FUN_00403250(puStack_102c,(short *)&stack0xffffefd8,0,0,*(uint *)(param_2 + 0xc));
  return 1;
}


/* END FUNCTION 0x004735b0 */
