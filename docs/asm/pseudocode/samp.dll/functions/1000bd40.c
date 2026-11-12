/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000bd40
 * Name: FUN_1000bd40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_1000bd40(int param_1)

{
  char *pcVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x1344) == '\0') {
    return 0;
  }
  iVar2 = 0;
  pcVar1 = (char *)(param_1 + 0x1349);
  while (((pcVar1[2] == '\0' || (*pcVar1 != '\0')) || (pcVar1[1] != '\0'))) {
    iVar2 = iVar2 + 1;
    pcVar1 = pcVar1 + 0x230;
    if (5 < iVar2) {
      return 0;
    }
  }
  *(undefined1 *)(iVar2 * 0x230 + 0x134a + param_1) = 1;
  return 1;
}


/* END FUNCTION 0x1000bd40 */
