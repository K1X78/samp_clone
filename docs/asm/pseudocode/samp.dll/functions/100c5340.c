/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c5340
 * Name: FUN_100c5340
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100c5340(void)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  char local_108 [264];
  
  puVar4 = &DAT_102ac7a8;
  for (iVar3 = 0x41; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)puVar4 = 0;
  pcVar1 = &DAT_00c92368;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  if (pcVar2 == &DAT_00c92368) {
    GetCurrentDirectoryA(0x105,(LPSTR)&DAT_102ac7a8);
    return;
  }
  _sprintf((char *)&DAT_102ac7a8,"%s\\SAMP",&DAT_00c92368);
  iVar3 = FUN_100b5900(&DAT_102ac7a8);
  if (iVar3 == 0) {
    CreateDirectoryA((LPCSTR)&DAT_102ac7a8,(LPSECURITY_ATTRIBUTES)0x0);
  }
  _sprintf(local_108,"%s\\screens",&DAT_102ac7a8);
  iVar3 = FUN_100b5900(local_108);
  if (iVar3 == 0) {
    CreateDirectoryA(local_108,(LPSECURITY_ATTRIBUTES)0x0);
  }
  FUN_100c51c0();
  return;
}


/* END FUNCTION 0x100c5340 */
