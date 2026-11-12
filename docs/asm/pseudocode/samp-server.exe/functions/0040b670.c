/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040b670
 * Name: FUN_0040b670
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_0040b670(undefined4 param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint unaff_ESI;
  
  for (uVar2 = unaff_ESI >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *param_2 = 0;
    param_2 = param_2 + 1;
  }
  for (uVar2 = unaff_ESI & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)param_2 = 0;
    param_2 = (undefined4 *)((int)param_2 + 1);
  }
  if (**(int **)(param_3 + 0x38) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_00407ad0();
    if (iVar1 == 0x20a) {
      return 0;
    }
  }
  return iVar1;
}


/* END FUNCTION 0x0040b670 */
