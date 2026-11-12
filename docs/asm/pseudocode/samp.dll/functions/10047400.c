/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10047400
 * Name: FUN_10047400
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10047400(int *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  void *pvVar4;
  
  iVar2 = param_2;
  bVar1 = *(byte *)(param_2 + 0xe);
  if (bVar1 < 0x20) {
    if (((uint)bVar1 < (uint)param_1[1]) &&
       (piVar3 = *(int **)(*param_1 + (uint)bVar1 * 4), piVar3 != (int *)0x0)) {
      if (*piVar3 != 0) {
        piVar3 = (int *)FUN_10045610(bVar1);
      }
    }
    else {
      pvVar4 = operator_new(0xc);
      if (pvVar4 == (void *)0x0) {
        pvVar4 = (void *)0x0;
      }
      else {
        FUN_10044210();
      }
      FUN_10043d30(pvVar4,0,*(undefined1 *)(iVar2 + 0xe));
      piVar3 = *(int **)(*param_1 + (uint)*(byte *)(iVar2 + 0xe) * 4);
    }
    if (piVar3[1] != 0) {
      piVar3[2] = *(int *)(piVar3[1] + 4);
    }
    FUN_10044220(&param_2);
  }
  return;
}


/* END FUNCTION 0x10047400 */
