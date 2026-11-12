/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100486b0
 * Name: FUN_100486b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100486b0(uint param_1,int param_2)

{
  void *_Memory;
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = 0;
  iVar1 = FUN_100459c0();
  if (iVar1 != 0) {
    do {
      piVar2 = (int *)FUN_100459a0(uVar6);
      uVar5 = *(uint *)*piVar2;
      iVar1 = ((uint *)*piVar2)[1] + (uint)(0xff67697f < uVar5);
      if ((param_2 < iVar1) || ((param_2 <= iVar1 && (param_1 <= uVar5 + 10000000)))) {
LAB_100487e1:
        uVar6 = uVar6 + 1;
      }
      else {
        FUN_100459a0(uVar6);
        piVar2 = (int *)FUN_10043cd0(0);
        if (*(int *)(*piVar2 + 10) != 6) {
          FUN_100459a0(uVar6);
          piVar2 = (int *)FUN_10043cd0(0);
          if (*(int *)(*piVar2 + 10) != 7) goto LAB_100487e1;
        }
        uVar5 = 0;
        FUN_100459a0(uVar6);
        iVar1 = FUN_10043ce0();
        if (iVar1 != 0) {
          do {
            FUN_100459a0(uVar6);
            piVar2 = (int *)FUN_10043cd0(uVar5);
            _free(*(void **)(*piVar2 + 0x2f));
            FUN_100459a0(uVar6);
            puVar3 = (undefined4 *)FUN_10043cd0(uVar5);
            FUN_1002e630(*puVar3);
            uVar5 = uVar5 + 1;
            FUN_100459a0(uVar6);
            uVar4 = FUN_10043ce0();
          } while (uVar5 < uVar4);
        }
        puVar3 = (undefined4 *)FUN_100459a0(uVar6);
        _Memory = (void *)*puVar3;
        if (_Memory != (void *)0x0) {
          FUN_100473e0();
          _free(_Memory);
        }
        thunk_FUN_10045bf0(uVar6);
      }
      uVar5 = FUN_100459c0();
    } while (uVar6 < uVar5);
  }
  return;
}


/* END FUNCTION 0x100486b0 */
