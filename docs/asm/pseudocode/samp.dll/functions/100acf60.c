/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100acf60
 * Name: FUN_100acf60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100acf60(int param_1,byte param_2,int param_3)

{
  undefined4 unaff_EDI;
  undefined *puVar1;
  undefined8 uVar2;
  float local_10;
  float local_c;
  
  if (*(int *)(param_1 + 0x2a4) != 0) {
    if (*(char *)(param_1 + 0x2b0) == '\0') {
      uVar2 = CONCAT44(unaff_EDI,(uint)param_2);
      puVar1 = &DAT_1011eec8;
      FUN_100b1f10();
      FUN_100b1f10(&DAT_1011f0f8,*(undefined4 *)(param_1 + 0x44),(uint)param_2,puVar1,uVar2);
      if (param_3 != 0) {
        FUN_1009e950();
        FUN_100b1f10(&DAT_1011f058,(double)local_10,(double)local_c);
        return;
      }
    }
    else {
      FUN_100b1f10();
    }
  }
  return;
}


/* END FUNCTION 0x100acf60 */
