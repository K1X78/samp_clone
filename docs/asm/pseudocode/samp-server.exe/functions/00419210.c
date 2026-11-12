/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00419210
 * Name: FUN_00419210
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00419210(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x10);
  if (*(char *)(iVar2 + 5) != '\x02') {
    iVar3 = FUN_004191d0();
    if (iVar3 != 0) {
      return;
    }
    iVar3 = FUN_0040b0a0();
    if (iVar3 != 0) {
      return;
    }
    iVar3 = FUN_00407af0();
    if (iVar3 != 0) {
      return;
    }
  }
  piVar1 = (int *)(iVar2 + 0x30);
  *piVar1 = *piVar1 + 1;
  FUN_00413ad0(*(uint *)(param_1 + 0xc));
  return;
}


/* END FUNCTION 0x00419210 */
