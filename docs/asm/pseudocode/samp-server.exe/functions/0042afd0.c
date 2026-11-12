/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042afd0
 * Name: FUN_0042afd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0042afd0(void)

{
  short sVar1;
  int in_EAX;
  int iVar2;
  int extraout_ECX;
  
  do {
    sVar1 = *(short *)(in_EAX + 0x5c);
    iVar2 = *(int *)(in_EAX + 0x60 + sVar1 * 4);
    if (*(char *)(iVar2 + 3) != '\0') {
      *(short *)(in_EAX + 0xb0 + *(short *)(in_EAX + 0x5c) * 2) = *(short *)(iVar2 + 0x10) + -1;
      *(undefined2 *)(in_EAX + 0x3e) = 0;
      *(undefined1 *)(in_EAX + 0x42) = 0;
      return;
    }
    FUN_00408f80();
    *(undefined2 *)(in_EAX + 0xb0 + sVar1 * 2) = *(undefined2 *)(iVar2 + 0x10);
    iVar2 = FUN_0042add0(extraout_ECX);
  } while (iVar2 == 0);
  return;
}


/* END FUNCTION 0x0042afd0 */
