/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041d730
 * Name: FUN_0041d730
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0041d730(undefined4 param_1,int *param_2,undefined2 param_3,undefined1 param_4)

{
  int *piVar1;
  int *in_EAX;
  int iVar2;
  
  iVar2 = *in_EAX + 1;
  *in_EAX = iVar2;
  if (99 < iVar2) {
    FUN_0041d6f0();
    return;
  }
  piVar1 = in_EAX + iVar2 * 4 + 3;
  *(undefined2 *)piVar1 = param_3;
  *(undefined1 *)((int)piVar1 + 2) = param_4;
  piVar1[1] = *param_2;
  piVar1[2] = param_2[1];
  piVar1[3] = param_2[2];
  return;
}


/* END FUNCTION 0x0041d730 */
