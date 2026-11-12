/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e3180
 * Name: FUN_100e3180
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100e3180(uint param_1,int param_2,uint param_3,int param_4,uint param_5,int param_6,
                int param_7,int param_8,undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar1 = (param_2 - param_4) - (uint)(param_1 < param_3);
  if ((param_7 != 0) || (param_8 != 0)) {
    if ((iVar1 <= param_6) && ((iVar1 < param_6 || (param_1 - param_3 < param_5)))) {
      return -1;
    }
    uVar3 = __allmul(param_1 - param_3,iVar1,1000,0);
    iVar1 = __alldiv(uVar3,param_5,param_6);
    iVar2 = FUN_100d8520(param_9,param_10,param_7,param_8);
    if (iVar2 < iVar1) {
      return iVar1 - iVar2;
    }
  }
  return 0;
}


/* END FUNCTION 0x100e3180 */
