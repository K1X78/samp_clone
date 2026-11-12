/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b7cd0
 * Name: FUN_100b7cd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100b7cd0(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x8f) == 0) {
    pcVar2 = (char *)(param_1 + 0x93);
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    if (pcVar2 != (char *)(param_1 + 0x94)) {
      uVar3 = FUN_1006d2c0((char *)(param_1 + 0x93));
      *(undefined4 *)(param_1 + 0x8f) = uVar3;
    }
  }
  return;
}


/* END FUNCTION 0x100b7cd0 */
