/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00415e40
 * Name: FUN_00415e40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_00415e40(void)

{
  char cVar1;
  char *in_EAX;
  int iVar2;
  
  iVar2 = FUN_00415bb0((int)in_EAX);
  if (iVar2 == 0) {
    return 0;
  }
  if ((in_EAX[3] & 2U) != 0) {
    cVar1 = *in_EAX;
    while (cVar1 == -99) {
      in_EAX = *(char **)(in_EAX + 8);
      cVar1 = *in_EAX;
    }
    switch(*in_EAX) {
    case '^':
    case 'b':
    case -0x7f:
    case -0x7e:
    case -0x7d:
    case -0x7b:
      return 0;
    case -100:
      if (**(char **)(in_EAX + 8) == -0x7e) {
        return 0;
      }
      if (**(char **)(in_EAX + 8) == -0x7f) {
        return 0;
      }
    }
  }
  return 1;
}


/* END FUNCTION 0x00415e40 */
