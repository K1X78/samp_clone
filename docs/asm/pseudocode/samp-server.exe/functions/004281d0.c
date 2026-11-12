/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004281d0
 * Name: FUN_004281d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_004281d0(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  
  iVar1 = *(int *)(in_EAX + 4);
  FUN_0040c2c0();
  if (*(char *)(in_EAX + 8) == '\x02') {
    iVar2 = FUN_00414330();
    if (iVar2 != 0) {
      FUN_0040c340();
      return iVar2;
    }
    *(undefined1 *)(iVar1 + 0x22) = 1;
  }
  FUN_00428180();
  FUN_0040c340();
  return 0;
}


/* END FUNCTION 0x004281d0 */
