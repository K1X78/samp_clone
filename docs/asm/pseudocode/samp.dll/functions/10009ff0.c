/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10009ff0
 * Name: FUN_10009ff0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_10009ff0(int param_1,byte param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined1 param_6,undefined4 param_7,undefined4 param_8)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 < 100) {
    piVar1 = (int *)(param_1 + 0x23d + (uint)param_2 * 4);
    if (*piVar1 != 0) {
      FUN_100b1f10(&DAT_101179c8,*piVar1);
      *piVar1 = 0;
    }
    iVar2 = FUN_100a0bb0(param_6,param_3,param_4,param_5,param_7,param_8);
    *piVar1 = iVar2;
  }
  return;
}


/* END FUNCTION 0x10009ff0 */
