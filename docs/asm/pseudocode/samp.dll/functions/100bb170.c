/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100bb170
 * Name: FUN_100bb170
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * FUN_100bb170(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  piVar3 = param_1;
  if ((param_1[2] == 0) || ((char)param_1[3] != '\0')) {
    return (undefined4 *)0x0;
  }
  puVar4 = operator_new(0x23);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4[3] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    *(undefined1 *)(puVar4 + 6) = 0;
    *(undefined1 *)((int)puVar4 + 0x19) = 0;
    *(undefined1 *)((int)puVar4 + 0x22) = 0;
    *(undefined4 *)((int)puVar4 + 0x1e) = 0;
    *(undefined4 *)((int)puVar4 + 0x1a) = 0;
    *puVar4 = 0;
    puVar4[1] = 0;
    *(undefined2 *)(puVar4 + 2) = 0xffff;
    *(undefined2 *)((int)puVar4 + 10) = 0x1803;
  }
  param_1 = (int *)0x0;
  FUN_100bc1d0(&param_1,4);
  *puVar4 = param_1;
  param_1 = (int *)0x0;
  FUN_100bc1d0(&param_1,4);
  puVar4[1] = param_1;
  param_1 = (int *)0x0;
  FUN_100bc1d0(&param_1,2);
  *(undefined2 *)(puVar4 + 2) = param_1._0_2_;
  param_1 = (int *)0x0;
  FUN_100bc1d0(&param_1,2);
  *(undefined2 *)((int)puVar4 + 10) = param_1._0_2_;
  iVar1 = *piVar3;
  iVar2 = piVar3[1];
  puVar4[5] = puVar4[1];
  puVar4[3] = iVar2 + iVar1;
  puVar4[4] = 0;
  *(undefined1 *)(puVar4 + 6) = 0;
  *(undefined1 *)((int)puVar4 + 0x19) = 0;
  if ((uint)(puVar4[1] + piVar3[1]) < (uint)piVar3[2]) {
    piVar3[1] = puVar4[1] + piVar3[1];
    return puVar4;
  }
  piVar3[1] = piVar3[2];
  *(undefined1 *)(piVar3 + 3) = 1;
  return puVar4;
}


/* END FUNCTION 0x100bb170 */
