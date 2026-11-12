/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006a2b0
 * Name: FUN_1006a2b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1006a2b0(int param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 local_8 [4];
  int local_4;
  
  *(undefined4 *)(param_1 + 0x250) = param_2;
  FUN_1006ac40(local_8,&DAT_10118400,0);
  pcVar3 = ">Updating models..";
  pcVar2 = (char *)(*(int *)(param_1 + 0x28) + 0x16);
  do {
    pcVar3 = pcVar3 + 1;
    cVar1 = *pcVar3;
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  *(undefined1 *)(*(int *)(param_1 + 0x28) + 0x14) = 1;
  *(int *)(*(int *)(param_1 + 0x28) + 0x126) = local_4 + 4;
  *(undefined1 *)(*(int *)(param_1 + 0x28) + 1) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x28) + 2) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x28) + 0x13) = 1;
  if (*(int **)(param_1 + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x40))(1);
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x38))(1);
  }
  FUN_1006a1a0();
  *(undefined4 *)(param_1 + 0x30) = 1;
  return;
}


/* END FUNCTION 0x1006a2b0 */
