/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10071350
 * Name: FUN_10071350
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10071350(int param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 local_8 [4];
  int local_4;
  
  FUN_1006ac40(local_8,&DAT_10118400,0);
  pcVar3 = "Transform";
  pcVar2 = (char *)(*(int *)(param_1 + 0x20) + 0x16);
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  *(undefined1 *)(*(int *)(param_1 + 0x20) + 0x14) = 1;
  *(int *)(*(int *)(param_1 + 0x20) + 0x126) = local_4 + 4;
  *(undefined1 *)(*(int *)(param_1 + 0x20) + 0x13) = 1;
  FUN_100712c0();
  *(undefined4 *)(param_1 + 0x24) = 1;
  return;
}


/* END FUNCTION 0x10071350 */
