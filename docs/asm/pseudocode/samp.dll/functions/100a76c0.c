/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a76c0
 * Name: FUN_100a76c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * FUN_100a76c0(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar2 = *(undefined4 **)(PTR_DAT_10152ae0 + param_2 * 4);
  if (puVar2 == (undefined4 *)0x0) {
    puVar1 = _calloc(0x20,1);
    puVar2 = (undefined4 *)FUN_100a7630(param_1);
    if (puVar2 != (undefined4 *)0x0) {
      iVar3 = FUN_100b40e0(puVar2);
      if (iVar3 != 0) {
        puVar4 = puVar1;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar4 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar4 = puVar4 + 1;
        }
        *(undefined4 **)(PTR_DAT_10152ae0 + param_2 * 4) = puVar1;
        return puVar1;
      }
    }
    puVar2 = (undefined4 *)0x0;
  }
  return puVar2;
}


/* END FUNCTION 0x100a76c0 */
