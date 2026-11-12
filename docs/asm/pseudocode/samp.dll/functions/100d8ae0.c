/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d8ae0
 * Name: FUN_100d8ae0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100d8ae0(int param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  char local_804 [2052];
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x548) != 0)) {
    FUN_100cc720(local_804,0x801,param_2,&stack0x0000000c);
    pcVar2 = local_804;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    if (*(code **)(param_1 + 0x1c0) != (code *)0x0) {
      (**(code **)(param_1 + 0x1c0))
                (param_1,0,local_804,(int)pcVar2 - (int)(local_804 + 1),
                 *(undefined4 *)(param_1 + 0x14c));
      return;
    }
    _fwrite(&DAT_10124f50,2,1,*(FILE **)(param_1 + 0x148));
    _fwrite(local_804,(int)pcVar2 - (int)(local_804 + 1),1,*(FILE **)(param_1 + 0x148));
  }
  return;
}


/* END FUNCTION 0x100d8ae0 */
