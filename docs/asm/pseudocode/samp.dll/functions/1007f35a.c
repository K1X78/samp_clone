/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1007f35a
 * Name: FUN_1007f35a
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_1007f35a(void)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  float10 fVar9;
  int iStack00000004;
  float fStack00000008;
  int iStack0000000c;
  int in_stack_00000024;
  undefined4 *in_stack_000000b0;
  undefined4 in_stack_000000b4;
  undefined1 *in_stack_000000b8;
  
  FUN_1007e000(0);
  piVar4 = (int *)FUN_1007d360();
  if (in_stack_000000b8 == (undefined1 *)0x0) {
    puVar8 = (undefined4 *)&stack0x00000070;
    for (iVar6 = 0xf; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    in_stack_000000b8 = &stack0x00000070;
  }
  FUN_1007e060(&stack0x00000028,in_stack_000000b4,in_stack_000000b8);
  fStack00000008 = -1.0;
  iStack0000000c = 0;
  piVar5 = (int *)FUN_10082120();
  iStack00000004 = 0;
  if (0 < piVar5[1]) {
    do {
      puVar8 = *(undefined4 **)(*piVar5 + iStack00000004 * 4);
      (**(code **)(*piVar4 + 0x20))(piVar4,*puVar8,&stack0x00000018);
      iVar6 = 0;
      if (0 < (int)puVar8[0x158]) {
        do {
          iVar1 = *(int *)(puVar8[0x157] + iVar6 * 4);
          iVar7 = 0;
          if (0 < *(int *)(iVar1 + 0x13c)) {
            do {
              iVar2 = *(int *)(*(int *)(iVar1 + 0x138) + iVar7 * 4);
              if ((((*(int *)(iVar2 + 0x10) == 0) || (*(int *)(iVar2 + 8) == in_stack_00000024)) &&
                  (cVar3 = FUN_1007c550(iVar2,in_stack_000000b4,in_stack_000000b8), cVar3 != '\0'))
                 && (fVar9 = (float10)FUN_1007c7f0(iVar2,&stack0x00000028,&stack0x00000018),
                    (float10)fStack00000008 < fVar9)) {
                fStack00000008 = (float)fVar9;
                iStack0000000c = iVar2;
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 < *(int *)(iVar1 + 0x13c));
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)puVar8[0x158]);
      }
      iStack00000004 = iStack00000004 + 1;
    } while (iStack00000004 < piVar5[1]);
    if (iStack0000000c != 0) {
      FUN_1007e250(&stack0x00000028,iStack0000000c,in_stack_000000b4,in_stack_000000b8);
      puVar8 = (undefined4 *)&stack0x00000028;
      for (iVar6 = 0x12; iVar6 != 0; iVar6 = iVar6 + -1) {
        *in_stack_000000b0 = *puVar8;
        puVar8 = puVar8 + 1;
        in_stack_000000b0 = in_stack_000000b0 + 1;
      }
      return 0;
    }
  }
  return 0x80040902;
}


/* END FUNCTION 0x1007f35a */
