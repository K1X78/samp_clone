/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100922b0
 * Name: FUN_100922b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100922b0(undefined4 param_1,int *param_2,int param_3)

{
  char cVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_40c;
  undefined1 local_408;
  undefined4 local_407;
  char acStack_214 [511];
  char cStack_15;
  
  if (*(int *)(param_3 + 0x244) != 0) {
    return -0x7fffbffb;
  }
  local_408 = 0;
  puVar4 = &local_407;
  for (iVar3 = 0x7f; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  *(undefined1 *)((int)puVar4 + 2) = 0;
  local_40c = 0x200;
  iVar3 = (**(code **)(*param_2 + 0x10))(param_2,&local_408,&local_40c);
  if (-1 < iVar3) {
    iVar3 = 0;
    do {
      cVar1 = (&stack0xfffffbec)[iVar3];
      acStack_214[iVar3] = cVar1;
      iVar3 = iVar3 + 1;
    } while (cVar1 != '\0');
    cStack_15 = cVar1;
    pvVar2 = operator_new(0x219);
    if (pvVar2 == (void *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_10091c70(acStack_214);
    }
    *(int *)(param_3 + 0x244) = iVar3;
    if (iVar3 == 0) {
      return -0x7ff8fff2;
    }
    FUN_100921b0(param_1,param_2);
    iVar3 = 0;
  }
  return iVar3;
}


/* END FUNCTION 0x100922b0 */
