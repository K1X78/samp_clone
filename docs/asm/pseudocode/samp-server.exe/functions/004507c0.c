/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004507c0
 * Name: FUN_004507c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_004507c0(void *this,int param_1)

{
  uint in_EAX;
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  
  pcVar2 = *(char **)((int)this + 0x33c);
  if ((pcVar2 == (char *)0x0) || (*(char *)((int)this + 4) == '\x01')) {
    uVar1 = in_EAX & 0xffff0000;
  }
  else {
    uVar1 = 0;
    if (*(ushort *)((int)this + 8) != 0) {
      uVar3 = (uint)*(ushort *)((int)this + 8);
      do {
        if (((*pcVar2 != '\0') && (*(int *)(pcVar2 + 1) == param_1)) &&
           ((*(int *)(pcVar2 + 0xcb0) == 6 || (pcVar2[0xcb6] == '\0')))) {
          uVar1 = uVar1 + 1;
        }
        pcVar2 = pcVar2 + 0xcb8;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      return uVar1;
    }
  }
  return uVar1;
}


/* END FUNCTION 0x004507c0 */
