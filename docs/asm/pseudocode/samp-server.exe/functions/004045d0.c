/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004045d0
 * Name: FUN_004045d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_004045d0(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1[1];
  if (iVar1 == 0) {
    iVar1 = *(int *)(*param_1 + 0x10) + *param_1;
  }
  return *(undefined4 *)
          (*(int *)(param_1[5] + 0xc + *(int *)(param_2 + 4) * 4 + iVar1) +
           *(int *)(param_2 + 8) * 4 + iVar1);
}


/* END FUNCTION 0x004045d0 */
