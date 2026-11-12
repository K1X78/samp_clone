/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e5e90
 * Name: FUN_100e5e90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_100e5e90(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_ESI;
  
  *(undefined4 *)(unaff_ESI + 0x4ac8) = 0;
  if ((((*(int *)(unaff_ESI + 0x4ac4) != 10) && (iVar2 = *(int *)(param_2 + 0x180), iVar2 != 10)) &&
      ((iVar1 = *(int *)(unaff_ESI + 0x3ec), iVar1 != 1 || (10 < iVar2)))) &&
     (((iVar1 == 0 || (1 < iVar1)) && (iVar2 != 0x14)))) {
    iVar2 = FUN_100ec550(param_2,"Expect:");
    if (iVar2 == 0) {
      iVar2 = FUN_100e5da0(param_3,"Expect: 100-continue\r\n");
      if (iVar2 != 0) {
        return iVar2;
      }
      *(undefined4 *)(unaff_ESI + 0x4ac8) = 1;
      return 0;
    }
    uVar3 = FUN_100e55e0(iVar2,"Expect:","100-continue");
    *(undefined4 *)(unaff_ESI + 0x4ac8) = uVar3;
  }
  return 0;
}


/* END FUNCTION 0x100e5e90 */
