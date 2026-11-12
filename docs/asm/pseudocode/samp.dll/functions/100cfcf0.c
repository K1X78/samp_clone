/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100cfcf0
 * Name: FUN_100cfcf0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100cfcf0(void)

{
  char cVar1;
  int iVar2;
  int *in_EAX;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  int local_4;
  
  iVar2 = *in_EAX;
  pcVar3 = (char *)FUN_100cfbc0();
  if (pcVar3 == (char *)0x0) {
    return 0;
  }
  pcVar4 = pcVar3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = FUN_100e43c0(*(undefined4 *)(iVar2 + 0x5c),pcVar3,pcVar4 + (1 - (int)(pcVar3 + 1)));
  if ((iVar5 != 0) && (*(int *)(iVar2 + 0x4cc) != -1)) {
    FID_conflict___time32(&local_4);
    if ((*(int *)(iVar5 + 4) != 0) && (*(int *)(iVar2 + 0x4cc) <= local_4 - *(int *)(iVar5 + 4))) {
      FUN_100d8ae0(iVar2,"Hostname in DNS cache was stale, zapped\n");
      iVar5 = 0;
      FUN_100e4340(*(undefined4 *)(iVar2 + 0x5c),pcVar3,pcVar4 + (1 - (int)(pcVar3 + 1)));
    }
  }
  (*(code *)PTR__free_101554bc)(pcVar3);
  return iVar5;
}


/* END FUNCTION 0x100cfcf0 */
