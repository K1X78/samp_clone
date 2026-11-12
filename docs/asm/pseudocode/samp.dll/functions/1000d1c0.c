/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000d1c0
 * Name: FUN_1000d1c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_1000d1c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_1000c830(param_2,param_3,(int *)(param_1 + 0x222));
  if (cVar1 == '\0') {
    if (DAT_102aca10 != 0) {
      FUN_10067b60(DAT_102aca10,"Can\'t fill download info for CRC: 0x%X",param_3);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x1340) = 0;
    iVar2 = FUN_100f9cc9(param_1 + 0x23b,&DAT_10117d30);
    *(int *)(param_1 + 0x222) = iVar2;
    if (iVar2 != 0) {
      if (DAT_102ac9e8 != 0) {
        FUN_1006a720(*(undefined1 *)(param_1 + 0x226),*(undefined4 *)(param_1 + 0x233),0,0,
                     *(undefined4 *)(param_1 + 0x22b),0xffffffff,0);
      }
      *(undefined4 *)(param_1 + 0x213) = 1;
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x1000d1c0 */
