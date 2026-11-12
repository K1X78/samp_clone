/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045f190
 * Name: FUN_0045f190
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_0045f190(void *this,uint param_1,int param_2)

{
  void *this_00;
  void *_Memory;
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  
  this_00 = (void *)((int)this + 0xa8);
  uVar6 = 0;
  iVar1 = FUN_0045b300((int)this_00);
  if (iVar1 != 0) {
    do {
      piVar2 = (int *)FUN_0045b2f0(this_00,uVar6);
      uVar5 = *(uint *)*piVar2;
      iVar1 = ((uint *)*piVar2)[1] + (uint)(0xff67697f < uVar5);
      if ((param_2 < iVar1) || ((param_2 <= iVar1 && (param_1 <= uVar5 + 10000000)))) {
LAB_0045f2c1:
        uVar6 = uVar6 + 1;
      }
      else {
        piVar2 = (int *)FUN_0045b2f0(this_00,uVar6);
        piVar2 = (int *)FUN_0045b2f0((void *)(*piVar2 + 8),0);
        if (*(int *)(*piVar2 + 0xc) != 6) {
          piVar2 = (int *)FUN_0045b2f0(this_00,uVar6);
          piVar2 = (int *)FUN_0045b2f0((void *)(*piVar2 + 8),0);
          if (*(int *)(*piVar2 + 0xc) != 7) goto LAB_0045f2c1;
        }
        uVar5 = 0;
        piVar2 = (int *)FUN_0045b2f0(this_00,uVar6);
        iVar1 = FUN_0045b300(*piVar2 + 8);
        if (iVar1 != 0) {
          do {
            piVar2 = (int *)FUN_0045b2f0(this_00,uVar6);
            piVar2 = (int *)FUN_0045b2f0((void *)(*piVar2 + 8),uVar5);
            _free(*(void **)(*piVar2 + 0x34));
            piVar2 = (int *)FUN_0045b2f0(this_00,uVar6);
            piVar2 = (int *)FUN_0045b2f0((void *)(*piVar2 + 8),uVar5);
            FUN_0044eb60((void *)((int)this + 0x728),*piVar2);
            uVar5 = uVar5 + 1;
            piVar2 = (int *)FUN_0045b2f0(this_00,uVar6);
            uVar3 = FUN_0045b300(*piVar2 + 8);
          } while (uVar5 < uVar3);
        }
        puVar4 = (undefined4 *)FUN_0045b2f0(this_00,uVar6);
        _Memory = (void *)*puVar4;
        if (_Memory != (void *)0x0) {
          FUN_0045dee0((int)_Memory);
          _free(_Memory);
        }
        thunk_FUN_0045c920(this_00,uVar6);
      }
      uVar5 = FUN_0045b300((int)this_00);
    } while (uVar6 < uVar5);
  }
  return;
}


/* END FUNCTION 0x0045f190 */
