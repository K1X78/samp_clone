/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100387a0
 * Name: FUN_100387a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __fastcall FUN_100387a0(int param_1)

{
  uint in_EAX;
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  
  pcVar2 = *(char **)(param_1 + 0x334);
  if ((pcVar2 == (char *)0x0) || (*(char *)(param_1 + 4) == '\x01')) {
    uVar1 = in_EAX & 0xffff0000;
  }
  else {
    uVar1 = 0;
    if (*(ushort *)(param_1 + 7) != 0) {
      uVar3 = (uint)*(ushort *)(param_1 + 7);
      do {
        if (((*pcVar2 != '\0') && (pcVar2[0x70f] == '\0')) && (*(int *)(pcVar2 + 0xc62) == 8)) {
          uVar1 = uVar1 + 1;
        }
        pcVar2 = pcVar2 + 0xc69;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      return uVar1;
    }
  }
  return uVar1;
}


/* END FUNCTION 0x100387a0 */
