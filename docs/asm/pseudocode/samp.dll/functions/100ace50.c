/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ace50
 * Name: FUN_100ace50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_100ace50(int param_1,undefined4 param_2,char *param_3,float param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (((*(int *)(param_1 + 0x2a4) != 0) &&
      (iVar1 = FUN_100b3770(*(undefined4 *)(param_1 + 0x44)), iVar1 != 0)) &&
     (iVar1 = __stricmp(param_3,"SEX"), iVar1 != 0)) {
    iVar1 = FUN_100a0ab0(param_3);
    if (iVar1 == 0) {
      FUN_100a0a90(param_3);
      iVar1 = FUN_100a0ab0(param_3);
      while (iVar1 == 0) {
        Sleep(1);
        iVar2 = iVar2 + 1;
        if (iVar2 == 0xf) {
          return;
        }
        iVar1 = FUN_100a0ab0(param_3);
      }
    }
    FUN_100b1f10(&DAT_1011f0a8,*(undefined4 *)(param_1 + 0x44),param_2,param_3,(double)param_4,
                 param_5,param_6,param_7,param_8,param_9);
  }
  return;
}


/* END FUNCTION 0x100ace50 */
