/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b7570
 * Name: FUN_100b7570
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


byte __fastcall FUN_100b7570(int param_1)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  
  if (*(int *)(param_1 + 0x4c) == 0) {
    return 0;
  }
  iVar2 = FUN_100b5d20(*(int *)(param_1 + 0x4c));
  if (iVar2 == 1) {
    iVar2 = *(int *)(param_1 + 0x4c);
    bVar3 = (*(char *)(iVar2 + 0x5a5) != '\0') << 1;
    if (*(char *)(iVar2 + 0x5a6) != '\0') {
      bVar3 = bVar3 | 1;
    }
    bVar3 = bVar3 << 1;
    if (*(char *)(iVar2 + 0x5a7) != '\0') {
      bVar3 = bVar3 | 1;
    }
    cVar1 = *(char *)(iVar2 + 0x5a8);
  }
  else {
    if (*(int *)(param_1 + 0x4c) == 0) {
      return 0;
    }
    iVar2 = FUN_100b5d20(*(int *)(param_1 + 0x4c));
    if (iVar2 != 2) {
      return 0;
    }
    bVar3 = *(char *)(*(int *)(param_1 + 0x4c) + 0x65c) != '\0';
    cVar1 = *(char *)(*(int *)(param_1 + 0x4c) + 0x65d);
  }
  bVar3 = bVar3 << 1;
  if (cVar1 != '\0') {
    bVar3 = bVar3 | 1;
  }
  return bVar3;
}


/* END FUNCTION 0x100b7570 */
