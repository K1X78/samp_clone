/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041b570
 * Name: FUN_0041b570
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


short * __thiscall
FUN_0041b570(void *this,undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,
            int param_6)

{
  int in_EAX;
  short *psVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)this;
  if ((in_EAX == 0) && ((param_5 != 0 || (param_6 != 0)))) {
    FUN_00418b00((undefined **)"a JOIN clause is required before %s");
  }
  else {
    psVar1 = FUN_0041b4e0();
    if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
      iVar3 = (int)*psVar1;
      if (*(int *)(param_3 + 4) != 0) {
        uVar2 = FUN_00416430();
        *(undefined4 *)(psVar1 + iVar3 * 0x1c + -0x14) = uVar2;
      }
      *(int *)(psVar1 + iVar3 * 0x1c + -0x10) = param_4;
      *(int *)(psVar1 + iVar3 * 0x1c + -10) = param_5;
      *(int *)(psVar1 + iVar3 * 0x1c + -8) = param_6;
      return psVar1;
    }
  }
  FUN_004158d0(iVar3,param_5);
  FUN_0040f150();
  FUN_0040fce0(iVar3,param_4);
  return (short *)0x0;
}


/* END FUNCTION 0x0041b570 */
