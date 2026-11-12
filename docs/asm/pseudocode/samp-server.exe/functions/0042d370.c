/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042d370
 * Name: FUN_0042d370
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_0042d370(void)

{
  int in_EAX;
  uint uVar1;
  undefined4 *unaff_ESI;
  
  if (1 < *(byte *)(in_EAX + 0x43)) {
    uVar1 = FUN_0042d320();
    if (uVar1 != 0) {
      *unaff_ESI = 1;
      return uVar1;
    }
  }
  if ((*(char *)(in_EAX + 0x43) == '\x01') && (*(int *)(in_EAX + 0x50) == 0)) {
    *unaff_ESI = 0;
    return 0;
  }
  *unaff_ESI = 1;
  return 0;
}


/* END FUNCTION 0x0042d370 */
