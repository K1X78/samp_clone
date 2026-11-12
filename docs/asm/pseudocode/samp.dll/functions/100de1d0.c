/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100de1d0
 * Name: FUN_100de1d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined * __fastcall FUN_100de1d0(undefined4 param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  
  if (param_2 != (char *)0x0) {
    pcVar3 = param_2;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    uVar6 = 0;
    do {
      pcVar2 = (&PTR_DAT_10125790)[uVar6 * 2];
      pcVar4 = pcVar2;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      if ((uint)((int)pcVar4 - (int)(pcVar2 + 1)) <= (uint)((int)pcVar3 - (int)(param_2 + 1))) {
        iVar5 = FUN_100de830(param_2 + (((int)pcVar3 - (int)(param_2 + 1)) -
                                       ((int)pcVar4 - (int)(pcVar2 + 1))),pcVar2);
        if (iVar5 != 0) {
          return (&PTR_s_image_gif_10125794)[uVar6 * 2];
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 10);
  }
  return (undefined *)0x0;
}


/* END FUNCTION 0x100de1d0 */
