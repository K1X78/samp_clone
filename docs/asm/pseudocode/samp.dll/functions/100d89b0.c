/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d89b0
 * Name: FUN_100d89b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100d89b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined *puVar4;
  char local_a0 [160];
  
  if (((*(int *)(param_1 + 0x4fc) != 0) && (param_5 != 0)) && (*(int *)(param_5 + 0xa4) != 0)) {
    pcVar2 = "Data";
    switch(param_2) {
    case 1:
      pcVar2 = "Header";
    case 3:
      puVar4 = &DAT_10124f78;
      break;
    case 2:
      pcVar2 = "Header";
    case 4:
      puVar4 = &DAT_10124f74;
      break;
    default:
      goto switchD_100d89ff_default;
    }
    FUN_100cc780(local_a0,0xa0,"[%s %s %s]",pcVar2,puVar4,*(int *)(param_5 + 0xa4));
    pcVar2 = local_a0;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    if (*(code **)(param_1 + 0x1c0) == (code *)0x0) {
      _fwrite(&DAT_10124f50,2,1,*(FILE **)(param_1 + 0x148));
      _fwrite(local_a0,(int)pcVar2 - (int)(local_a0 + 1),1,*(FILE **)(param_1 + 0x148));
    }
    else {
      iVar3 = (**(code **)(param_1 + 0x1c0))
                        (param_1,0,local_a0,(int)pcVar2 - (int)(local_a0 + 1),
                         *(undefined4 *)(param_1 + 0x14c));
      if (iVar3 != 0) {
        return;
      }
    }
  }
switchD_100d89ff_default:
  FUN_100d8950(param_3);
  return;
}


/* END FUNCTION 0x100d89b0 */
