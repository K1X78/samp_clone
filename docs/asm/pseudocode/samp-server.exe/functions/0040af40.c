/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040af40
 * Name: FUN_0040af40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_0040af40(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_EAX;
  
  FUN_0040aef0();
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 != (undefined4 *)0x0) {
    *in_EAX = *puVar1;
    in_EAX[1] = puVar1[1];
    iVar2 = *(int *)(*(int *)(param_1 + 8) + 8);
    *(int *)(param_1 + 8) = iVar2;
    if (iVar2 == 0) {
      FUN_0040ac90();
    }
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x0040af40 */
