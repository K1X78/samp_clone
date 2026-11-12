/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040c560
 * Name: FUN_0040c560
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_0040c560(int param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  int unaff_EDI;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(char *)(param_1 + 9) == '\0') {
    return 0;
  }
  if ((*(int *)(iVar1 + 0x48) != param_1) && (*(char *)(iVar1 + 0x4c) != '\0')) {
    return 0x106;
  }
  piVar2 = *(int **)(iVar1 + 0x44);
  while( true ) {
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    if (((*piVar2 != param_1) && (piVar2[1] == unaff_EDI)) && ((char)piVar2[2] != param_2)) break;
    piVar2 = (int *)piVar2[3];
  }
  if (param_2 == '\x02') {
    *(undefined1 *)(iVar1 + 0x4d) = 1;
  }
  return 0x106;
}


/* END FUNCTION 0x0040c560 */
