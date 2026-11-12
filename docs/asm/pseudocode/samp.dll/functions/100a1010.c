/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a1010
 * Name: FUN_100a1010
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_100a1010(uint param_1,undefined4 param_2,float param_3,float param_4,float param_5,
                 int *param_6)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_1;
  iVar1 = FUN_100b4170(param_1);
  if (iVar1 == 0) {
    uVar2 = 0x48c7;
  }
  else if ((20000 < (int)uVar2) || ((int)uVar2 < 0)) goto LAB_100a1084;
  iVar1 = FUN_100b1f10();
  if (iVar1 == 0) {
    FUN_100b1f10(&DAT_1011e664);
    FUN_100b1f10();
    while (((int)uVar2 < 0x4e21 && (iVar1 = FUN_100b1f10(&DAT_1011e6a0), iVar1 == 0))) {
      Sleep(1);
    }
  }
LAB_100a1084:
  FUN_100b1f10(&DAT_1011e830,uVar2,param_2,(double)param_3,(double)param_4,(double)param_5,&param_1)
  ;
  iVar1 = (param_1 & 0xffff) * 0x20;
  if ((param_1 & 0xffff) != 0) {
    iVar1 = iVar1 >> 5;
  }
  if (param_6 != (int *)0x0) {
    *param_6 = iVar1;
  }
  return param_1;
}


/* END FUNCTION 0x100a1010 */
