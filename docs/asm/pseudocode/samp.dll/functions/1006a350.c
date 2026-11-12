/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006a350
 * Name: FUN_1006a350
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1006a350(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    if (*(int *)(param_1 + 0x28) != 0) {
      FUN_10090360(0x41200000);
    }
    FUN_1006a280(&local_10);
    local_c = local_c + 3 + *(int *)(*(int *)(param_1 + 0x28) + 0x126);
    local_10 = local_10 + 0x10;
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x34)) {
      piVar1 = (int *)(param_1 + 0x23c);
      iVar2 = param_1 + 0x38;
      do {
        FUN_1006af20(0,iVar2,local_10,local_c,local_8,local_4,0x120,0xffa9c4e4,1);
        local_10 = local_10 + *piVar1;
        iVar3 = iVar3 + 1;
        piVar1 = piVar1 + 1;
        iVar2 = iVar2 + 0x81;
      } while (iVar3 < *(int *)(param_1 + 0x34));
    }
  }
  return;
}


/* END FUNCTION 0x1006a350 */
