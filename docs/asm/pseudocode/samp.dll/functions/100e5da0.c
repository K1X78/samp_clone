/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e5da0
 * Name: FUN_100e5da0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100e5da0(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  pcVar2 = (char *)FUN_100cd2b0(param_2,&stack0x0000000c);
  if (pcVar2 != (char *)0x0) {
    pcVar3 = pcVar2;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    uVar4 = FUN_100e5510(param_1,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
    (*(code *)PTR__free_101554bc)(pcVar2);
    return uVar4;
  }
  (*(code *)PTR__free_101554bc)(*param_1);
  (*(code *)PTR__free_101554bc)(param_1);
  return 0x1b;
}


/* END FUNCTION 0x100e5da0 */
