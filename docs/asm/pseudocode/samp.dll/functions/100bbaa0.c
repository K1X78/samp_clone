/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100bbaa0
 * Name: FUN_100bbaa0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100bbaa0(int param_1)

{
  char cVar1;
  uint uVar2;
  int local_c;
  uint local_8;
  
  cVar1 = *(char *)(param_1 + 0x18);
  while( true ) {
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_100bc1d0(&local_c,0xc);
    if (((local_c != 0x11e) && (local_c == 0x253f2fe)) && (0x17 < local_8)) break;
    uVar2 = *(int *)(param_1 + 0x10) + local_8;
    if (uVar2 < *(uint *)(param_1 + 0x14)) {
      *(uint *)(param_1 + 0x10) = uVar2;
    }
    else {
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x14);
      *(undefined1 *)(param_1 + 0x18) = 1;
    }
    cVar1 = *(char *)(param_1 + 0x18);
  }
  return 0;
}


/* END FUNCTION 0x100bbaa0 */
