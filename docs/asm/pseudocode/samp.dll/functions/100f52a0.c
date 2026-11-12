/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f52a0
 * Name: FUN_100f52a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * FUN_100f52a0(void)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *in_EAX;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  char *unaff_EBX;
  uint uVar7;
  char *local_4;
  
  local_4 = in_EAX;
  if (in_EAX == (char *)0x0) {
    local_4 = "application/octet-stream";
  }
  if (unaff_EBX == (char *)0x0) {
    return local_4;
  }
  uVar7 = 0;
  do {
    pcVar4 = unaff_EBX;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    pcVar2 = (&PTR_DAT_1012a92c)[uVar7 * 2];
    pcVar6 = pcVar2;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    pcVar3 = unaff_EBX;
    if ((uint)((int)pcVar6 - (int)(pcVar2 + 1)) <= (uint)((int)pcVar4 - (int)(unaff_EBX + 1))) {
      do {
        pcVar4 = pcVar3;
        pcVar3 = pcVar4 + 1;
      } while (*pcVar4 != '\0');
      pcVar6 = pcVar2;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      iVar5 = FUN_100de830((int)pcVar4 - ((int)pcVar6 - (int)(pcVar2 + 1)),pcVar2);
      if (iVar5 != 0) {
        return (&PTR_s_image_gif_1012a930)[uVar7 * 2];
      }
    }
    uVar7 = uVar7 + 1;
    if (5 < uVar7) {
      return local_4;
    }
  } while( true );
}


/* END FUNCTION 0x100f52a0 */
