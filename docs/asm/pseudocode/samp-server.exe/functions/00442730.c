/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00442730
 * Name: FUN_00442730
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_00442730(void)

{
  int *in_EAX;
  uint uVar1;
  int iVar2;
  char *unaff_EBX;
  byte *unaff_ESI;
  
  uVar1 = FUN_00442130();
  if (uVar1 != 0) {
    return 0;
  }
  iVar2 = FUN_0040edd0(*in_EAX,unaff_EBX,unaff_ESI);
  if (iVar2 == 0) {
    if (unaff_ESI != (byte *)0x0) {
      FUN_00418b00((undefined **)"%s: %s.%s");
      *(undefined1 *)((int)in_EAX + 0x12) = 1;
      return 0;
    }
    FUN_00418b00((undefined **)"%s: %s");
    *(undefined1 *)((int)in_EAX + 0x12) = 1;
  }
  return iVar2;
}


/* END FUNCTION 0x00442730 */
