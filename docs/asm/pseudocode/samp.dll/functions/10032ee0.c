/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10032ee0
 * Name: FUN_10032ee0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10032ee0(undefined4 *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  
  *param_1 = &PTR_FUN_101191f4;
  cVar2 = FUN_10033370(&DAT_1013c720);
  if (cVar2 != '\0') {
    uVar3 = FUN_100324a0(param_1[1],param_1[2],0);
    piVar4 = (int *)FUN_10032860(uVar3);
    puVar1 = (undefined4 *)*piVar4;
    if ((undefined4 *)puVar1[2] == param_1) {
      uVar3 = FUN_100324a0(*puVar1,puVar1[1],0);
      FUN_10032ec0(uVar3);
    }
  }
  return;
}


/* END FUNCTION 0x10032ee0 */
