/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100aecf0
 * Name: FUN_100aecf0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100aecf0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char local_16c [256];
  undefined1 local_6c [64];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  iVar3 = 0;
  if (DAT_102ac9ec != 0) {
    FUN_1009e950(local_6c);
    FUN_1006b6b0();
    do {
      piVar1 = *(int **)(local_1c + 0x2a4);
      if (((piVar1 != (int *)0x0) && (*piVar1 != 0x863c40)) && (iVar2 = piVar1[6], iVar2 != 0)) {
        local_8 = 0;
        local_20 = 0x734a40;
        local_c = iVar2;
        local_8 = (*(code *)0x734a40)(iVar2);
        iVar2 = *(int *)(*(int *)(local_8 + 0x20) + 0x24) * iVar3 + 0x4c + *(int *)(local_8 + 0x20);
        if (iVar2 != 0) {
          FUN_100b4850(&local_18,local_6c,iVar2 + 0x10);
          local_2c = local_18;
          local_28 = local_14;
          local_24 = local_10;
          _sprintf(local_16c,"%d",iVar3);
          FUN_1006b6d0(&local_2c,local_16c,0xffffffff,1,0);
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0x1e);
    FUN_1006b6c0();
  }
  return;
}


/* END FUNCTION 0x100aecf0 */
