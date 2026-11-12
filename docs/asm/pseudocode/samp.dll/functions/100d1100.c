/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d1100
 * Name: FUN_100d1100
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100d1100(void)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 *in_EAX;
  char *pcVar5;
  int iVar6;
  byte *pbVar7;
  int unaff_ESI;
  
  pcVar3 = *(char **)(unaff_ESI + 8);
  uVar4 = *in_EAX;
  *(char **)(unaff_ESI + 0xc) = pcVar3;
  pcVar5 = pcVar3;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar6 = (int)pcVar5 - (int)(pcVar3 + 1);
  if ((iVar6 != 0) && (pcVar3[iVar6 + -1] == '.')) {
    pcVar3[iVar6 + -1] = '\0';
  }
  pbVar7 = *(byte **)(unaff_ESI + 8);
  bVar2 = *pbVar7;
  do {
    if (bVar2 == 0) {
LAB_100d114d:
      pcVar3 = *(char **)(unaff_ESI + 8);
      cVar1 = *pcVar3;
      pcVar5 = pcVar3;
      while( true ) {
        if (cVar1 == '\0') {
          return 0;
        }
        if (cVar1 < '!') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 1;
      }
      FUN_100d8ba0(uVar4,"Host name \'%s\' contains bad letter",pcVar3);
      return 3;
    }
    pbVar7 = pbVar7 + 1;
    if ((bVar2 & 0x80) != 0) {
      FUN_100d8ae0(uVar4,"IDN support not present, can\'t parse Unicode domains\n");
      goto LAB_100d114d;
    }
    bVar2 = *pbVar7;
  } while( true );
}


/* END FUNCTION 0x100d1100 */
