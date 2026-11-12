/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e4610
 * Name: FUN_100e4610
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100e4610(uint param_1)

{
  char cVar1;
  undefined1 *in_EAX;
  char *pcVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int unaff_ESI;
  char local_10 [16];
  
  local_10[0] = '\0';
  FUN_100cc780(local_10,0x10,"%d.%d.%d.%d",*in_EAX,in_EAX[1],in_EAX[2],in_EAX[3]);
  pcVar2 = local_10;
  pcVar3 = local_10;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if ((pcVar2 != local_10 + 1) && ((uint)((int)pcVar2 - (int)(local_10 + 1)) < param_1)) {
    do {
      cVar1 = *pcVar3;
      pcVar3[unaff_ESI - (int)local_10] = cVar1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    return unaff_ESI;
  }
  puVar4 = (undefined4 *)FUN_100fdc77();
  *puVar4 = 0x1c;
  return 0;
}


/* END FUNCTION 0x100e4610 */
