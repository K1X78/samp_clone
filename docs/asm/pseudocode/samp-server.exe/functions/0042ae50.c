/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042ae50
 * Name: FUN_0042ae50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_0042ae50(void)

{
  int in_EAX;
  int extraout_ECX;
  int iVar1;
  
  if (1 < *(byte *)(in_EAX + 0x43)) {
    if (*(byte *)(in_EAX + 0x43) == 3) {
      return *(int *)(in_EAX + 0x50);
    }
    FUN_0040c720();
  }
  if (*(short *)(in_EAX + 0x5c) < 0) {
    iVar1 = FUN_0042a810();
    if (iVar1 != 0) {
      *(undefined1 *)(in_EAX + 0x43) = 0;
      return iVar1;
    }
    *(undefined2 *)(in_EAX + 0x5c) = 0;
    if ((*(int *)(in_EAX + 0x10) == 0) != (bool)*(char *)(*(int *)(in_EAX + 0x60) + 2)) {
      iVar1 = FUN_0041d790();
      return iVar1;
    }
  }
  else {
    iVar1 = 1;
    if (0 < *(short *)(in_EAX + 0x5c)) {
      do {
        FUN_00427610();
        iVar1 = iVar1 + 1;
      } while (iVar1 <= *(short *)(in_EAX + 0x5c));
    }
    *(undefined2 *)(in_EAX + 0x5c) = 0;
  }
  iVar1 = *(int *)(in_EAX + 0x60);
  *(undefined2 *)(in_EAX + 0xb0) = 0;
  *(undefined2 *)(in_EAX + 0x3e) = 0;
  *(undefined1 *)(in_EAX + 0x41) = 0;
  *(undefined1 *)(in_EAX + 0x42) = 0;
  if ((*(short *)(iVar1 + 0x10) == 0) && (*(char *)(iVar1 + 3) == '\0')) {
    if (*(int *)(iVar1 + 0x48) == 1) {
      FUN_00408f80();
      *(undefined1 *)(in_EAX + 0x43) = 1;
      iVar1 = FUN_0042add0(extraout_ECX);
      return iVar1;
    }
    iVar1 = FUN_0041d790();
    return iVar1;
  }
  *(bool *)(in_EAX + 0x43) = *(short *)(iVar1 + 0x10) != 0;
  return 0;
}


/* END FUNCTION 0x0042ae50 */
