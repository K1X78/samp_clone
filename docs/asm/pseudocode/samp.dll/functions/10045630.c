/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10045630
 * Name: FUN_10045630
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_10045630(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,char param_5,
            undefined4 *param_6)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((char)param_6 != '\0') {
    if (*(int *)(param_1 + 0xb2) != 0 || *(int *)(param_1 + 0xb6) != 0) {
      cVar1 = FUN_10043e20();
      if (cVar1 == '\0') goto LAB_10045669;
    }
    *(undefined4 *)(param_1 + 0xb2) = param_3;
    *(undefined4 *)(param_1 + 0xb6) = param_4;
  }
LAB_10045669:
  if (param_5 != '\0') {
    param_6 = (undefined4 *)FUN_10044ec0();
    puVar3 = param_2;
    puVar4 = param_6;
    for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    *(undefined2 *)puVar4 = *(undefined2 *)puVar3;
    *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
    FUN_1002e400(&param_6);
    return;
  }
  FUN_1002e400(&param_2);
  return;
}


/* END FUNCTION 0x10045630 */
