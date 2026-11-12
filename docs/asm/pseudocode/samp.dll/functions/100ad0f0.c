/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ad0f0
 * Name: FUN_100ad0f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_100ad0f0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 local_48 [68];
  
  puVar1 = (undefined4 *)(param_1 + 0x2b9);
  if (*(int *)(param_1 + 0x2b9) == 0) {
    FUN_1009e950(local_48);
    FUN_100b1f10();
    iVar2 = FUN_100b3830(*puVar1);
    if (iVar2 == 0) {
      *puVar1 = 0;
      return 0;
    }
    FUN_100b1f10(&DAT_1011f120,*puVar1,*(undefined4 *)(param_1 + 0x44),0,0,0,0,0,0,0,0,0,0);
    FUN_100b1f10(&DAT_1011f134,*puVar1,0);
    FUN_100b1f10(&DAT_1011f170,*puVar1,0,0);
    FUN_100b1f10(&DAT_1011f10c,*puVar1,"PARA_OPEN_O","PARACHUTE",0,0x408f4000,0,1);
    FUN_100b1f10();
    FUN_100b1f10(&DAT_1011f170,*puVar1,0,0x3ff00000);
  }
  return 1;
}


/* END FUNCTION 0x100ad0f0 */
