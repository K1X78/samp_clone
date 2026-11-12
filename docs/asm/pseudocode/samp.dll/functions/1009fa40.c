/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009fa40
 * Name: FUN_1009fa40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_1009fa40(int param_1,undefined4 *param_2,undefined4 *param_3,char param_4)

{
  int *piVar1;
  char cVar2;
  float10 fVar3;
  
  piVar1 = *(int **)(param_1 + 0x40);
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0x863c40)) {
    fVar3 = (float10)FUN_100b5ea0((int)*(short *)((int)piVar1 + 0x22));
    if (fVar3 < (float10)0.0 == (fVar3 == (float10)0.0)) {
      _DAT_1018de60 = *param_2;
      _DAT_1018de64 = param_2[1];
      _DAT_1018de68 = param_2[2];
      _DAT_1018de6c = param_2[3];
      _DAT_1018de70 = param_2[4];
      _DAT_1018de4c = *param_3;
      _DAT_1018de50 = param_3[1];
      _DAT_1018de54 = param_3[2];
      _DAT_1018de58 = param_3[3];
      _DAT_1018de5c = param_3[4];
      _DAT_1018de7c = *(undefined4 *)(param_1 + 0x40);
      if (param_4 == '\0') {
        cVar2 = FUN_100b6090(&DAT_1018de60,&DAT_1018de4c,_DAT_1018de7c);
        if (cVar2 != '\0') {
          return 1;
        }
      }
      else {
        cVar2 = FUN_100b6070(&DAT_1018de60,&DAT_1018de4c,_DAT_1018de7c);
        if (cVar2 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}


/* END FUNCTION 0x1009fa40 */
