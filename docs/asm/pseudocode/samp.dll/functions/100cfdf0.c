/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100cfdf0
 * Name: FUN_100cfdf0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100cfdf0(int param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int iVar6;
  
  pcVar3 = (char *)FUN_100cfbc0();
  if (pcVar3 == (char *)0x0) {
    return 0;
  }
  pcVar4 = pcVar3;
  do {
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  puVar5 = (undefined4 *)(*(code *)PTR__calloc_101554c8)(1,0xc);
  if (puVar5 == (undefined4 *)0x0) {
    (*(code *)PTR__free_101554bc)(pcVar3);
    return 0;
  }
  piVar1 = puVar5 + 1;
  puVar5[2] = 1;
  *puVar5 = param_2;
  FID_conflict___time32(piVar1);
  if (*piVar1 == 0) {
    *piVar1 = 1;
  }
  iVar6 = FUN_100e4280(*(undefined4 *)(param_1 + 0x5c),pcVar3,pcVar4 + (1 - (int)(pcVar3 + 1)),
                       puVar5);
  if (iVar6 == 0) {
    (*(code *)PTR__free_101554bc)(puVar5);
    (*(code *)PTR__free_101554bc)(pcVar3);
    return 0;
  }
  *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
  (*(code *)PTR__free_101554bc)(pcVar3);
  return iVar6;
}


/* END FUNCTION 0x100cfdf0 */
