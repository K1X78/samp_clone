/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10028a60
 * Name: FUN_10028a60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_10028a60(int param_1,char *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 auStack_54 [6];
  undefined4 uStack_3c;
  char *pcStack_38;
  undefined1 *puStack_34;
  
  if (*param_2 == '\0') {
    return -1;
  }
  puStack_34 = (undefined1 *)param_3;
  pcStack_38 = param_2;
  uStack_3c = 0x10028a8c;
  puVar1 = (undefined4 *)FUN_10026f10();
  puVar3 = auStack_54;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_100280a0();
  puStack_34 = &LAB_100279d0;
  pcStack_38 = (char *)0x10028aae;
  FUN_10027070();
  return *(int *)(param_1 + 0x1c) + -1;
}


/* END FUNCTION 0x10028a60 */
