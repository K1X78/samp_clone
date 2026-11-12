/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100344c0
 * Name: FUN_100344c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __fastcall FUN_100344c0(int param_1)

{
  uint uVar1;
  char *pcVar2;
  
  uVar1 = 0;
  pcVar2 = (char *)(param_1 + 0x100c);
  do {
    if (*pcVar2 == '\0') {
      return uVar1;
    }
    uVar1 = uVar1 + 1;
    pcVar2 = pcVar2 + 0x11a;
  } while (uVar1 < 0x20);
  return 0xffffffff;
}


/* END FUNCTION 0x100344c0 */
