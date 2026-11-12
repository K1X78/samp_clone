/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004014e0
 * Name: FUN_004014e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_004014e0(int *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  
  if ((param_1 == (int *)0x0) || (iVar1 = *param_1, *(short *)(iVar1 + 4) != -0xe20)) {
    return 0x11;
  }
  if ((*(char *)(iVar1 + 6) < '\t') && ('\x05' < *(char *)(iVar1 + 7))) {
    if (param_2 != (int *)0x0) {
      *param_2 = *(int *)(iVar1 + 0x10) - *(int *)(iVar1 + 0xc);
    }
    if (param_3 != (int *)0x0) {
      *param_3 = *(int *)(iVar1 + 0x14) - *(int *)(iVar1 + 0x10);
    }
    if (param_4 != (int *)0x0) {
      *param_4 = *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14);
    }
    return 0;
  }
  return 0x12;
}


/* END FUNCTION 0x004014e0 */
