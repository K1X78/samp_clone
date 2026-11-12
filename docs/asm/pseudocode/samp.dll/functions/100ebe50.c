/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ebe50
 * Name: FUN_100ebe50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100ebe50(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 local_c [12];
  
  FUN_100e4560(param_1,local_c);
  iVar2 = FUN_100e4580(local_c);
  while( true ) {
    if (iVar2 == 0) {
      return 0;
    }
    puVar1 = *(undefined4 **)(*(int *)(iVar2 + 0xc) + 8);
    if (puVar1 != (undefined4 *)0x0) break;
    iVar2 = FUN_100e4580(local_c);
  }
  return *puVar1;
}


/* END FUNCTION 0x100ebe50 */
