/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e9050
 * Name: FUN_100e9050
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100e9050(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(param_2 + 0x398);
  FUN_100e8960((int *)(param_2 + 0x398),*(undefined4 *)(param_2 + 0x39c),param_1,param_1 + 0x18);
  puVar2 = *(undefined4 **)(param_2 + 0x398);
  if (puVar1 != puVar2) {
    *(undefined4 *)(param_2 + 0x394) = 0;
    FUN_100d66d0(*puVar2,0,6);
  }
  return 0;
}


/* END FUNCTION 0x100e9050 */
